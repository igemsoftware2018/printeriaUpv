% parameters
k_maaa= 0;
k_baaa= 0;
k_aaa= 0;
Kmaaae= k_maaa/(1+(1/CrnaPOLfreeaaa)*((k_uaaa+k_maaa)/k_baaa));
Cnaaa= 0;
CrnaPOLfreeaaa= 0;
d_maaa= 0;
k_uaaa= 0;
kaaae= k_aaa*(Kmaaae/d_maaa);
parameters= [k_maaa k_baaa k_aaa Kmaaae Cnaaa CrnaPOLfreeaaa d_maaa k_uaaa kaaae];

% define rate constants
d_aaa= null;
rates= [d_aaa];

% define initial conditions
aaa_0= 0;
init= [aaa_0];

% call solver routine 
t0= 0;
tf= NO_TIME_SPECIFIED;
[t,y]= ode23s(@(t,y) /home/manuel/cloudnode/plantlabco/public/model_docs/59fa179af0c2831184eff9a6_odes(t, y, rates, parameters), [t0 tf], init);
aaa= y(:,1);

