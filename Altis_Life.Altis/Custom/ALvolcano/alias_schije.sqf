_buc_sch = _this select 0;

	_fum_sch = "#particlesource" createVehicleLocal getpos _buc_sch;
	_fum_sch setParticleCircle [0, [0, 0, 0]];
	_fum_sch setParticleRandom [2, [0, 0, 0], [0.2, 0.2, 0.5], 0.3, 0.5, [0, 0, 0, 0.5], 0, 0];
	_fum_sch setParticleParams [["\A3\data_f\cl_basic.p3d", 1, 0, 1], "", "Billboard", 1, 5+random 3, [0, 0, 0], [0, 0, 0.5], 0, 10.2, 7.9, 0.01, [floor(3+random 15), floor (3+random 5), floor (7+random 7)], [[1,1,1,1], [1,1,1,0.5], [1,1,1,0]], [0.125], 1, 0, "", "", _buc_sch];
	_fum_sch setDropInterval 0.01;