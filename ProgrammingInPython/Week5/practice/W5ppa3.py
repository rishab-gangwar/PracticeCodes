str_='/home/mark/facebook/src.cpp'
def is_folder(src):
  splitted=src.split('/')
  ind_dot=splitted[-1].find('.')
  if(ind_dot!=-1):
    return False
  else:
    return True

def is_file(src):
  return not is_folder(src)
def is_code(src):
  splitted=src.split('/')
  ind_dot=splitted[-1].find('.')
  if(ind_dot!=-1):
    extension=splitted[-1][ind_dot+1:]
    if extension=='cpp' or extension=='py':
      return True
    else:
      return False
  else:
    return False
def is_image(src):
  splitted=src.split('/')
  ind_dot=splitted[-1].find('.')
  if(ind_dot!=-1):
    extension=splitted[-1][ind_dot+1:]
    if extension=='png' or extension=='jpg':
      return True
    else:
      return False
  else:
    return False
def level(src):
  return src.count('/')    
print(level(str_))