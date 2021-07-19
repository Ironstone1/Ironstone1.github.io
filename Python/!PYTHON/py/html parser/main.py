import re

def get_tag(html):
    tag = re.compile(r"<([\w-]+).+?>").search(html)
    tag.group(0)

    info = {tag.group(1) : {}}
