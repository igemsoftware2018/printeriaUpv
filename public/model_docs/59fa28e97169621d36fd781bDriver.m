% parameters
k_u1111= 0;
k1111e= k_1111*(Km1111e/d_m1111);
k_1111= 0;
Cn1111= 0;
k_m1111= 0;
k_b1111= 0;
CrnaPOLfree1111= 0;
Km1111e= k_m1111/(1+(1/CrnaPOLfree1111)*((k_u1111+k_m1111)/k_b1111));
d_m1111= 0;
parameters= [k_u1111 k1111e k_1111 Cn1111 k_m1111 k_b1111 CrnaPOLfree1111 Km1111e d_m1111];

% define rate constants
d_1111= null;
rates= [d_1111];

% define initial conditions
1111_0= 0;
init= [1111_0];

% call solver routine 
t0= 0;
tf= NO_TIME_SPECIFIED;
[t,y]= ode23s(@(t,y) /home/manuel/bitbucket/plantco/public/model_docs/59fa28e97169621d36fd781b_odes(t, y, rates, parameters), [t0 tf], init);
1111= y(:,1);

