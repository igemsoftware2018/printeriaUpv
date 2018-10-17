% parameters
k_maaa= 0;
Kmaaae= k_maaa/(1+(1/CrnaPOLfreeaaa)*((k_uaaa+k_maaa)/k_baaa));
d_maaa= 0;
kaaae= k_aaa*(Kmaaae/d_maaa);
k_uaaa= 0;
k_baaa= 0;
CrnaPOLfreeaaa= 0;
Cnaaa= 0;
k_aaa= 0;
parameters= [k_maaa Kmaaae d_maaa kaaae k_uaaa k_baaa CrnaPOLfreeaaa Cnaaa k_aaa];

% define rate constants
d_aaa= null;
rates= [d_aaa];

% define initial conditions
aaa_0= 0;
init= [aaa_0];

% call solver routine 
t0= 0;
tf= NO_TIME_SPECIFIED;
[t,y]= ode23s(@(t,y) /home/manuel/bitbucket/plantco/public/model_docs/59fa2c4ced12fb20dcfdf7bd_odes(t, y, rates, parameters), [t0 tf], init);
aaa= y(:,1);

