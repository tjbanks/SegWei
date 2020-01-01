from pprint import pprint
import json

def process_json(json_file,channel,number):

        with open(json_file,"r", encoding='utf-8') as load_f:
                write_data = json.load(load_f)
        counter = 0
        for seq in write_data['genome']:
            counter += 1
        for i in range (counter):
                if write_data['genome'][i]['mechanism'] == channel:
                        write_data['genome'][i]['value'] = float(number)
        with open(json_file,"w") as dump_f:
                json.dump(write_data,dump_f)
    


