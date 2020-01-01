COMMENT
Conceptual model:  Delayed rectifier current for 
  a model of a fast-spiking cortical interneuron.

Authors and citation:
  Golomb D, Donner K, Shacham L, Shlosberg D, Amitai Y, Hansel D (2007).
  Mechanisms of Firing Patterns in Fast-Spiking Cortical Interneurons. 
  PLoS Comput Biol 3:e156.

Original implementation and programming language/simulation environment:
  by Golomb et al. for XPP
  Available from http://senselab.med.yale.edu/modeldb/ShowModel.asp?model=97747

This implementation is by N.T. Carnevale and V. Yamini for NEURON.
ENDCOMMENT

NEURON {
  SUFFIX kdr
  USEION k READ ek WRITE ik
  RANGE gkdr, g,theta_hn,sigma_n,ninf,taun,segkdr
}

UNITS {
  (S) = (siemens)
  (mV) = (millivolt)
  (mA) = (milliamp)
}

PARAMETER {
  gkdr = 0.225 (S/cm2)
  theta_hn = -12.4 (mV)
  sigma_n = 6.8 (mV)
  segkdr = -70
}

ASSIGNED {
  v (mV)
  ek (mV)
  ik (mA/cm2)
  g (S/cm2)
  ninf
  taun
}

STATE {n}

BREAKPOINT {
  SOLVE states METHOD cnexp
  g = gkdr * n^2
  ik = g * (v-ek)
}

INITIAL {
  rate(v)
  n = ninf
}

DERIVATIVE states {
  rate(v)
  n' = (ninf-n)/taun
}

PROCEDURE rate(v (mV)) {
  if (v<segkdr){
    ninf = 0
  }
  else
	{ninf = ninfi(v)}
  taun = tauni(v)
}


FUNCTION ninfi(v (mV)) {
  UNITSOFF
  ninfi=1/(1 + exp(-(v-theta_hn)/sigma_n))
  UNITSON
}

FUNCTION tauni(v (mV)) (ms) {
  UNITSOFF
  tauni = (0.087 + 11.4 / (1 + exp ((v+14.6)/8.6))) * (0.087 + 11.4 / (1 + exp (-(v-1.3)/18.7)))
  UNITSON
}
