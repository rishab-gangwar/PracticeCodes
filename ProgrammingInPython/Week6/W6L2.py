malgudi = ['It', 'was', 'Monday', 'morning.', 'Swaminathan', 'was', 'reluctant', 'to', 'open', 'his',
 'eyes.', 'He', 'considered', 'Monday', 'specially', 'unpleasant', 'in', 'the', 'calendar.', 'After',
 'the', 'delicious', 'freedom', 'of', 'Saturday', 'And', 'Sunday,', 'it', 'was', 'difficult', 'to',
 'get', 'into', 'the', 'Monday', 'mood', 'of', 'work', 'and', 'discipline.', 'He', 'shuddered', 'at',
 'the', 'very', 'thought', 'of', 'school:', 'the', 'dismal', 'yellow', 'building;', 'the',
 'fire-eyed', 'Vedanayagam,', 'his', 'class', 'teacher,', 'and', 'headmaster', 'with', 'his',
 'thin', 'long', 'cane...']
for i in range(len(malgudi)):
  malgudi[i]=malgudi[i].strip(",.:;").lower()
print(malgudi)
malgudiDict={}
for i in range(len(malgudi)):
  if malgudi[i] not in malgudiDict:
    malgudiDict[malgudi[i]]=1
  else:
    malgudiDict[malgudi[i]]+=1
max=0
maxRepWord=''
for i in malgudiDict:
  res = "{:<12}".format(i)
  print (res,malgudiDict[i])
  if malgudiDict[i]>max:
    max=malgudiDict[i]
    maxRepWord=i
print("Maximum repeted word :-",maxRepWord.upper(), "with frequency :",max)


