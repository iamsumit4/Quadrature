//
//        Gauss_Legendre_Nodes_and_Weights_33.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 33.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_33_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_33_hpp__

void Gauss_Legendre_Nodes_and_Weights_33(long double*& nodes, long double*& weights) {
	nodes	= new long double[33];
	weights	= new long double[33];

	nodes[0] 	= 0;
	weights[0] 	= 0.093768446160209996567304541546348784384473363981826681286748695568072579982924517402713458898725291718074303123463565451027683617;

	nodes[1] 	= -0.093631065854733385670742924122537721321505778152636881282025195792894004748646520745926471780673520355946643883171502686894958433;
	weights[1] 	= 0.0933564260655961161609991262742754649520039860886308049662192477390084596308328988428317232204083084927781539355593926199640803;

	nodes[2] 	= 0.093631065854733385670742924122537721321505778152636881282025195792894004748646520745926471780673520355946643883171502686894958433;
	weights[2] 	= 0.0933564260655961161609991262742754649520039860886308049662192477390084596308328988428317232204083084927781539355593926199640803;

	nodes[3] 	= -0.18643929882799157233579875921882398783734430282316534160934583605100169625044691453975345514414700002802735738451657402719477891;
	weights[3] 	= 0.09212398664331684621324097771736306072147100320398172055990358696877164409951326511975675950014178220630102739039216646508163;

	nodes[4] 	= 0.18643929882799157233579875921882398783734430282316534160934583605100169625044691453975345514414700002802735738451657402719477891;
	weights[4] 	= 0.09212398664331684621324097771736306072147100320398172055990358696877164409951326511975675950014178220630102739039216646508163;

	nodes[5] 	= -0.27760909715249702940324806729832100575475832927824321891534808932413341174808187315255254915004384726322770441285833509411357333;
	weights[5] 	= 0.0900819586606385772397437055002236211873706820794914849889610309956188237567820898022396466131722135503387903072876720791508;

	nodes[6] 	= 0.27760909715249702940324806729832100575475832927824321891534808932413341174808187315255254915004384726322770441285833509411357333;
	weights[6] 	= 0.0900819586606385772397437055002236211873706820794914849889610309956188237567820898022396466131722135503387903072876720791508;

	nodes[7] 	= -0.36633925774807334107022062325387111129693468110014017163820556536695725301143889358516429731648731282541151889315363210783748577;
	weights[7] 	= 0.08724828761884433760728167094544645656669607129390228839164452049037836110050865106722151607278240797780038108188738909739;

	nodes[8] 	= 0.36633925774807334107022062325387111129693468110014017163820556536695725301143889358516429731648731282541151889315363210783748577;
	weights[8] 	= 0.08724828761884433760728167094544645656669607129390228839164452049037836110050865106722151607278240797780038108188738909739;

	nodes[9] 	= -0.45185001727245069572599327724076705379877173439053117742637848022022139691265062923998301157728948241384780504090437629396303546;
	weights[9] 	= 0.0836478760670387076139280145176605974203276865458260165188328048177831518460310956448092170841401783076008113822918797759;

	nodes[10] 	= 0.45185001727245069572599327724076705379877173439053117742637848022022139691265062923998301157728948241384780504090437629396303546;
	weights[10] 	= 0.0836478760670387076139280145176605974203276865458260165188328048177831518460310956448092170841401783076008113822918797759;

	nodes[11] 	= -0.53338990478634764354889426499549212545266509222442246935653308972425933246813473323071040073719431189894196794417773907259875049;
	weights[11] 	= 0.079312364794886738363908384941997588088688029392298642708376306721623331997532627481580853783900468601550588249787176435;

	nodes[12] 	= 0.53338990478634764354889426499549212545266509222442246935653308972425933246813473323071040073719431189894196794417773907259875049;
	weights[12] 	= 0.079312364794886738363908384941997588088688029392298642708376306721623331997532627481580853783900468601550588249787176435;

	nodes[13] 	= -0.61024234583637902730728751353809743140634293088803394908953142094842795941301648741979055096900428743902897948772438437838324967;
	weights[13] 	= 0.074279854843954149342472175918472046710098393196255323464967166860530919625056374536323594918685581875809140967031821;

	nodes[14] 	= 0.61024234583637902730728751353809743140634293088803394908953142094842795941301648741979055096900428743902897948772438437838324967;
	weights[14] 	= 0.074279854843954149342472175918472046710098393196255323464967166860530919625056374536323594918685581875809140967031821;

	nodes[15] 	= -0.68173195996974278626821594691932813466893518071429402892273851702882452250152199673611089669437419863194016951682219439349885362;
	weights[15] 	= 0.0685945728186567128059550730149586524873610929403886976970709153423126079598508024388665060283658888188459933573555641;

	nodes[16] 	= 0.68173195996974278626821594691932813466893518071429402892273851702882452250152199673611089669437419863194016951682219439349885362;
	weights[16] 	= 0.0685945728186567128059550730149586524873610929403886976970709153423126079598508024388665060283658888188459933573555641;

	nodes[17] 	= -0.74723049644956215785905512489794826885428808646382447861307854286194721118615667275850205825715725529958177756063392562283919941;
	weights[17] 	= 0.0623064825303174800316277257708976114217684275793131068259725312888007783036491696147783665668297839646586258050266579;

	nodes[18] 	= 0.74723049644956215785905512489794826885428808646382447861307854286194721118615667275850205825715725529958177756063392562283919941;
	weights[18] 	= 0.0623064825303174800316277257708976114217684275793131068259725312888007783036491696147783665668297839646586258050266579;

	nodes[19] 	= -0.80616235627416658979620087078277717569771061813544611234712513698656798214583334954983996288810646676391177335621839644255572658;
	weights[19] 	= 0.055470846631663561284944495439259110420508407150220440344256968225546487076292342258403051040327097074854912134424316;

	nodes[20] 	= 0.80616235627416658979620087078277717569771061813544611234712513698656798214583334954983996288810646676391177335621839644255572658;
	weights[20] 	= 0.055470846631663561284944495439259110420508407150220440344256968225546487076292342258403051040327097074854912134424316;

	nodes[21] 	= -0.85800965267650406464306148014606847332735106889672006579713641870185988991703778349231607457898730439701512162380916330769516402;
	weights[21] 	= 0.048147742818711695670146880138119649741751148676969061338269219073307593131878790879467763651923223073530547914291737;

	nodes[22] 	= 0.85800965267650406464306148014606847332735106889672006579713641870185988991703778349231607457898730439701512162380916330769516402;
	weights[22] 	= 0.048147742818711695670146880138119649741751148676969061338269219073307593131878790879467763651923223073530547914291737;

	nodes[23] 	= -0.90231676774343358304053133151876160747520555819091811495655129076537019345532852776976339275372988536452632454105701353432687867;
	weights[23] 	= 0.040401541331669591563409790527398496166862788382653916946013918612036223692590950991796299367592104963702103575339074;

	nodes[24] 	= 0.90231676774343358304053133151876160747520555819091811495655129076537019345532852776976339275372988536452632454105701353432687867;
	weights[24] 	= 0.040401541331669591563409790527398496166862788382653916946013918612036223692590950991796299367592104963702103575339074;

	nodes[25] 	= -0.93869437261116835035583512436355371261443448409654682589660978541603908840965112698969546084019794153142003642982859267769241432;
	weights[25] 	= 0.03230035863232895328156144724943128806825272305067292722953161704350005331774667845973317441478280472016208791765799;

	nodes[26] 	= 0.93869437261116835035583512436355371261443448409654682589660978541603908840965112698969546084019794153142003642982859267769241432;
	weights[26] 	= 0.03230035863232895328156144724943128806825272305067292722953161704350005331774667845973317441478280472016208791765799;

	nodes[27] 	= -0.96682290968999276892837770667859224521831433657998659964673162582856128777376905619311969036023480141739855167588868725083712205;
	weights[27] 	= 0.02391554810174948035053325752918624206600836114451491924556293127226971293211134268819335624223770179956091703962835;

	nodes[28] 	= 0.96682290968999276892837770667859224521831433657998659964673162582856128777376905619311969036023480141739855167588868725083712205;
	weights[28] 	= 0.02391554810174948035053325752918624206600836114451491924556293127226971293211134268819335624223770179956091703962835;

	nodes[29] 	= -0.98645572623064248811037569826462592158917111421565109972305565823615252945110836038698000353045168171587281417692179905533438834;
	weights[29] 	= 0.015321701512934676127945768533661866757535354780756236781510010717225485938274167044554470004352709682772559236517607;

	nodes[30] 	= 0.98645572623064248811037569826462592158917111421565109972305565823615252945110836038698000353045168171587281417692179905533438834;
	weights[30] 	= 0.015321701512934676127945768533661866757535354780756236781510010717225485938274167044554470004352709682772559236517607;

	nodes[31] 	= -0.99742469424645521726616801758040416107822901088136192071704013308544481951227148173285998910283093770267522083532944473183878934;
	weights[31] 	= 0.00660622784758737805864923520847385503105916250321107134953287604725007559988649442808697204099509903069620814378942;

	nodes[32] 	= 0.99742469424645521726616801758040416107822901088136192071704013308544481951227148173285998910283093770267522083532944473183878934;
	weights[32] 	= 0.00660622784758737805864923520847385503105916250321107134953287604725007559988649442808697204099509903069620814378942;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_33_hpp__)*/