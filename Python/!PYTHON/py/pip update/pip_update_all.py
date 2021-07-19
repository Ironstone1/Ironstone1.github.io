import os, re

modules = re.compile("([\w-]+)==").findall(os.popen("pip freeze").read())
print("Updating {} modules!".format(len(modules)))

print(os.popen("pip install --upgrade pip").read())
for i,module in enumerate(modules):
    print("[+] Updating module {} of {}! ({})".format(i+1, len(modules), module))
    os.system("pip install " + module + " --upgrade")

input("[+] Finished updating press enter to close!")
