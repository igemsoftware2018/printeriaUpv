function dydt= /home/manuel/cloudnode/plantlabco/public/model_docs/59fa179af0c2831184eff9a6_odes(t, y, rates, parameters)

	d_aaa= rates(1);

	k_maaa= parameters(1);
	k_baaa= parameters(2);
	k_aaa= parameters(3);
	Kmaaae= parameters(4);
	Cnaaa= parameters(5);
	CrnaPOLfreeaaa= parameters(6);
	d_maaa= parameters(7);
	k_uaaa= parameters(8);
	kaaae= parameters(9);

	aaa= y(1);


	dydt(size(y,1),1)= 0;
	dydt(1)= +kaaae*Cnaaa-d_aaa*aaa;
