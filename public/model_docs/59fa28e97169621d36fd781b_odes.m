function dydt= /home/manuel/bitbucket/plantco/public/model_docs/59fa28e97169621d36fd781b_odes(t, y, rates, parameters)

	d_1111= rates(1);

	k_u1111= parameters(1);
	k1111e= parameters(2);
	k_1111= parameters(3);
	Cn1111= parameters(4);
	k_m1111= parameters(5);
	k_b1111= parameters(6);
	CrnaPOLfree1111= parameters(7);
	Km1111e= parameters(8);
	d_m1111= parameters(9);

	1111= y(1);


	dydt(size(y,1),1)= 0;
	dydt(1)= +k1111e*Cn1111-d_1111*1111;
