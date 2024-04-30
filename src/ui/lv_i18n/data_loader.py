# -*- coding: utf-8 -*-
# !/usr/bin/python

import csv
import yaml
import argparse
import subprocess
import glob
import os

parser = argparse.ArgumentParser(description='Convert CSV to YAML')
parser.add_argument('--ru', action='store_true', help='Generate Russian translations')
parser.add_argument('--zh', action='store_true', help='Generate Chinese (Simplified) translations')
parser.add_argument('--ko', action='store_true', help='Generate Koear translations')
parser.add_argument('--es', action='store_true', help='Generate es translations')
args = parser.parse_args()
compile_command = 'lv_i18n compile -t "*.yml" -o .'

with open("./data.csv", newline="", encoding='utf-8') as csvfile:
    reader = csv.DictReader(csvfile)
    en = {}
    ru = {}
    cn = {}
    ko = {}
    es = {}

    for row in reader:
        id = row['ID']
        en[id] = row['en']
        if args.ru:
            ru[id] = row['ru']
        if args.zh:
            cn[id] = row['cn']
        if args.ko:
            ko[id] = row['ko']
        if args.es:
            es[id] = row['es']

with open("./en.yml", 'w', encoding='utf-8') as f:
    yaml.dump({'en': en}, f, default_flow_style=False)

if args.ru:
    with open("./ru.yml", 'w', encoding='utf-8') as f:
        yaml.dump({'ru': ru}, f, allow_unicode=True, default_flow_style=False)
    compile_command += ' -l ru'

if args.zh:
    with open("./zh-CN.yml", 'w', encoding='utf-8') as f:
        yaml.dump({'zh-CN': cn}, f, allow_unicode=True, default_flow_style=False)
    compile_command += ' -l zh-CN'

if args.ko:
    with open("./ko.yml", 'w', encoding='utf-8') as f:
        yaml.dump({'ko': ko}, f, allow_unicode=True, default_flow_style=False)
    compile_command += ' -l ko'

if args.es:
    with open("./es.yml", 'w', encoding='utf-8') as f:
        yaml.dump({'es': es}, f, allow_unicode=True, default_flow_style=False)
    compile_command += ' -l es'

compile_command += ' -l en'

print(compile_command)

cmd_result = os.system(compile_command)
if cmd_result != 0:
    exit(cmd_result)