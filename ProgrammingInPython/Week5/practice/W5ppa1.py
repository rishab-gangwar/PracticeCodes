def solve_equation(coeff_L1,coeff_L2):
  #solve for x
  #coefficient to be multiplied with each list
  coeff_L1[-1]=-coeff_L1[-1]
  coeff_L2[-1]=-coeff_L2[-1]
  initxcoeff=coeff_L2[0]
  initycoeff=coeff_L2[1]
  initconst=coeff_L2[2]
  mul1=coeff_L2[0]
  mul2=coeff_L1[0]
  #list after coefficient mul
  step1=[]
  for i in range(len(coeff_L1)):
    coeff_L1[i]*=mul1
    coeff_L2[i]*=mul2
    step1.append(0)
  for i in range(len(coeff_L1)):
    step1[i]=(coeff_L1[i]-coeff_L2[i])
  y=step1[2]/step1[1]
  x=(initconst-(y*(initycoeff)))/initxcoeff
  return x,y
L1=[10,-4,-58]
L2=[6,4,10]
print(solve_equation(L1,L2))
