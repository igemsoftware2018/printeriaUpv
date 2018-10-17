function dydt= /home/manuel/bitbucket/plantco/public/model_docs/59fa2c4ced12fb20dcfdf7bd_odes(t, y, rates, parameters)

	d_aaa= rates(1);

	k_maaa= parameters(1);
	Kmaaae= parameters(2);
	d_maaa= parameters(3);
	kaaae= parameters(4);
	k_uaaa= parameters(5);
	k_baaa= parameters(6);
	CrnaPOLfreeaaa= parameters(7);
	Cnaaa= parameters(8);
	k_aaa= parameters(9);

	aaa= y(1);


	dydt(size(y,1),1)= 0;
	dydt(1)= +kaaae*Cnaaa-d_aaa*aaa;
