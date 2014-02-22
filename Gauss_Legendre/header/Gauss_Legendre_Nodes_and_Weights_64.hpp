//
//        Gauss_Legendre_Nodes_and_Weights_64.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 64.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_64_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_64_hpp__

void Gauss_Legendre_Nodes_and_Weights_64(long double*& nodes, long double*& weights) {
	nodes	= new long double[64];
	weights	= new long double[64];

	nodes[0] 	= -0.024350292663424432508955842853715661426887109314975809163453166396056696516629528852985306165711689488237049301367171756047992668;
	weights[0] 	= 0.0486909570091397203833653907347499124426286922838743305086688042456914190998246107310291565645676057401607079939845156005172257;

	nodes[1] 	= 0.024350292663424432508955842853715661426887109314975809163453166396056696516629528852985306165711689488237049301367171756047992668;
	weights[1] 	= 0.0486909570091397203833653907347499124426286922838743305086688042456914190998246107310291565645676057401607079939845156005172257;

	nodes[2] 	= -0.072993121787799039449542941940337493244126181668778853356316332337739521725442905018183306496750547880213476800767845861295645913;
	weights[2] 	= 0.048575467441503426934799066783978113687556544704929485711151676102515819309369703922916342763393041018623214908392368816276149;

	nodes[3] 	= 0.072993121787799039449542941940337493244126181668778853356316332337739521725442905018183306496750547880213476800767845861295645913;
	weights[3] 	= 0.048575467441503426934799066783978113687556544704929485711151676102515819309369703922916342763393041018623214908392368816276149;

	nodes[4] 	= -0.12146281929612055447037646349224787821868363833719129404234958260069318322450709442139522368896902376796611228486263524371159251;
	weights[4] 	= 0.04834476223480295716976952715801780970369255060950108062944220144524982894642920215676415326434830811916981153413799979977991;

	nodes[5] 	= 0.12146281929612055447037646349224787821868363833719129404234958260069318322450709442139522368896902376796611228486263524371159251;
	weights[5] 	= 0.04834476223480295716976952715801780970369255060950108062944220144524982894642920215676415326434830811916981153413799979977991;

	nodes[6] 	= -0.16964442042399281803731362974826984419999026673437785058941787468843423577965055913259258011068341276023966246277462084988381906;
	weights[6] 	= 0.047999388596458307728126179871346069954316713471493620944632393093333521461965027758813856850410342760928314672847045504136;

	nodes[7] 	= 0.16964442042399281803731362974826984419999026673437785058941787468843423577965055913259258011068341276023966246277462084988381906;
	weights[7] 	= 0.047999388596458307728126179871346069954316713471493620944632393093333521461965027758813856850410342760928314672847045504136;

	nodes[8] 	= -0.2174236437400070841496487489888226175784858311412223486303804018856896347376592355371637377402436048007599212927900136428369982;
	weights[8] 	= 0.04754016571483030866228220694422317164082525126253875215847403187847351913123495860419713256185436600766823695643047384876;

	nodes[9] 	= 0.2174236437400070841496487489888226175784858311412223486303804018856896347376592355371637377402436048007599212927900136428369982;
	weights[9] 	= 0.04754016571483030866228220694422317164082525126253875215847403187847351913123495860419713256185436600766823695643047384876;

	nodes[10] 	= -0.26468716220876741637396417251002011798041313629509324395598954481262064294528529820164509016498054459990787287149436926223300163;
	weights[10] 	= 0.046968182816210017325326285754581075199897528473812564982924088686190050018180080743701238163030219887692564246183069403;

	nodes[11] 	= 0.26468716220876741637396417251002011798041313629509324395598954481262064294528529820164509016498054459990787287149436926223300163;
	weights[11] 	= 0.046968182816210017325326285754581075199897528473812564982924088686190050018180080743701238163030219887692564246183069403;

	nodes[12] 	= -0.31132287199021095615751269856015688355771535786805012699545717098581690988683982687196549994601497097578045829880777476055328961;
	weights[12] 	= 0.04628479658131441729595324923226118496965030753244680077783408183646988617746069862442415391056853210885171429475792915;

	nodes[13] 	= 0.31132287199021095615751269856015688355771535786805012699545717098581690988683982687196549994601497097578045829880777476055328961;
	weights[13] 	= 0.04628479658131441729595324923226118496965030753244680077783408183646988617746069862442415391056853210885171429475792915;

	nodes[14] 	= -0.35722015833766811595044261504620253162626446464090911202123701934009917740380250974132558954074387484509367563254775028703762283;
	weights[14] 	= 0.0454916279274181444797709969712690588873234618023998968168834081606504637618082102750954507142497706775055424364453741;

	nodes[15] 	= 0.35722015833766811595044261504620253162626446464090911202123701934009917740380250974132558954074387484509367563254775028703762283;
	weights[15] 	= 0.0454916279274181444797709969712690588873234618023998968168834081606504637618082102750954507142497706775055424364453741;

	nodes[16] 	= -0.40227015796399160369576677126015884871326520561502080827604318431290872149672615159696697089709902216695082170895557148060120465;
	weights[16] 	= 0.044590558163756563060134710030944843294023799991221725643219328686194836337776108956958567887593285723766909694185408;

	nodes[17] 	= 0.40227015796399160369576677126015884871326520561502080827604318431290872149672615159696697089709902216695082170895557148060120465;
	weights[17] 	= 0.044590558163756563060134710030944843294023799991221725643219328686194836337776108956958567887593285723766909694185408;

	nodes[18] 	= -0.44636601725346408798494771475891518920675075782625017630826068202129376269707912957359373848139414736102388547368639668314646949;
	weights[18] 	= 0.0435837245293234533768278609737374809227888974971180150532193925502569499020021803936448815937567079991401855477391;

	nodes[19] 	= 0.44636601725346408798494771475891518920675075782625017630826068202129376269707912957359373848139414736102388547368639668314646949;
	weights[19] 	= 0.0435837245293234533768278609737374809227888974971180150532193925502569499020021803936448815937567079991401855477391;

	nodes[20] 	= -0.48940314570705295747852630702192139084937329746373983733165407932403155855375848447528510871155818334431588316577595019167449272;
	weights[20] 	= 0.042473515123653589007339767908817366165546648180649669731460772205524543348716932718239898855367012835878750758246;

	nodes[21] 	= 0.48940314570705295747852630702192139084937329746373983733165407932403155855375848447528510871155818334431588316577595019167449272;
	weights[21] 	= 0.042473515123653589007339767908817366165546648180649669731460772205524543348716932718239898855367012835878750758246;

	nodes[22] 	= -0.53127946401989454565801390354445524740852558873418023805326804716604177839824512144884325329646041161981607338521187515139724894;
	weights[22] 	= 0.04126256324262352861015629747363804773993063553054741054290347791227049511780459144632670350328323361618165474201;

	nodes[23] 	= 0.53127946401989454565801390354445524740852558873418023805326804716604177839824512144884325329646041161981607338521187515139724894;
	weights[23] 	= 0.04126256324262352861015629747363804773993063553054741054290347791227049511780459144632670350328323361618165474201;

	nodes[24] 	= -0.57189564620263403428387811665918864318319100609125099322732847194189122126432233275974177358447769726481638212252072661452633959;
	weights[24] 	= 0.0399537411327203413866569261283360739186769506703336301114037026981570543670430333260307390357287606111017588758;

	nodes[25] 	= 0.57189564620263403428387811665918864318319100609125099322732847194189122126432233275974177358447769726481638212252072661452633959;
	weights[25] 	= 0.0399537411327203413866569261283360739186769506703336301114037026981570543670430333260307390357287606111017588758;

	nodes[26] 	= -0.61115535517239325024885297101854891869612455930797184433679766669330883746502881484486678798307038677265777206664917725601103682;
	weights[26] 	= 0.038550153178615629128962496946808991012787112201718031966237885408800527132368268139441854044292836309054521456;

	nodes[27] 	= 0.61115535517239325024885297101854891869612455930797184433679766669330883746502881484486678798307038677265777206664917725601103682;
	weights[27] 	= 0.038550153178615629128962496946808991012787112201718031966237885408800527132368268139441854044292836309054521456;

	nodes[28] 	= -0.64896547125465733985776123199340488552969043347320117287925026243660575988657382397731666278263588716991425318539305258668309334;
	weights[28] 	= 0.037055128540240046040415101809583375083464945305656302174753627202809156212296668717830264664906683296060937047;

	nodes[29] 	= 0.64896547125465733985776123199340488552969043347320117287925026243660575988657382397731666278263588716991425318539305258668309334;
	weights[29] 	= 0.037055128540240046040415101809583375083464945305656302174753627202809156212296668717830264664906683296060937047;

	nodes[30] 	= -0.68523631305423324256355837103137630193564107853967186813240427499136119765489673326476255412341554130350757393488632332408517093;
	weights[30] 	= 0.0354722132568823838106931467152459479480946310024100946926514848199381113651392962399922996268087884509143421;

	nodes[31] 	= 0.68523631305423324256355837103137630193564107853967186813240427499136119765489673326476255412341554130350757393488632332408517093;
	weights[31] 	= 0.0354722132568823838106931467152459479480946310024100946926514848199381113651392962399922996268087884509143421;

	nodes[32] 	= -0.71988185017161082684894021783194724475813800331490195262204731511844685924864336460423009192624989028821798914947240467479215446;
	weights[32] 	= 0.0338051618371416093915654821107254310210499263140045346675500650400323727745785853730452808963944098691936344;

	nodes[33] 	= 0.71988185017161082684894021783194724475813800331490195262204731511844685924864336460423009192624989028821798914947240467479215446;
	weights[33] 	= 0.0338051618371416093915654821107254310210499263140045346675500650400323727745785853730452808963944098691936344;

	nodes[34] 	= -0.75281990726053189661186377488569398555171427132208719324619877611677226396369685393904135830094679249959051471539232863476938649;
	weights[34] 	= 0.032057928354851553585467504347898716966221573881398062250169407854535275399124366530227987935629046729162365;

	nodes[35] 	= 0.75281990726053189661186377488569398555171427132208719324619877611677226396369685393904135830094679249959051471539232863476938649;
	weights[35] 	= 0.032057928354851553585467504347898716966221573881398062250169407854535275399124366530227987935629046729162365;

	nodes[36] 	= -0.78397235894334140761022052521376828405641412498982593341327596174768165787050985093571161906080023258953482076117529873353854949;
	weights[36] 	= 0.030234657072402478867974059819548659158281397768481241636026542045969161851838118212761980885178641520596874;

	nodes[37] 	= 0.78397235894334140761022052521376828405641412498982593341327596174768165787050985093571161906080023258953482076117529873353854949;
	weights[37] 	= 0.030234657072402478867974059819548659158281397768481241636026542045969161851838118212761980885178641520596874;

	nodes[38] 	= -0.81326531512279755974192333808630334069814182256559721669564851493565863460820198703092801284114129364114236147679187568433809994;
	weights[38] 	= 0.02833967261425948322751130520023735198120758412575433599079551850845001757128807129018345798164762693930134;

	nodes[39] 	= 0.81326531512279755974192333808630334069814182256559721669564851493565863460820198703092801284114129364114236147679187568433809994;
	weights[39] 	= 0.02833967261425948322751130520023735198120758412575433599079551850845001757128807129018345798164762693930134;

	nodes[40] 	= -0.84062929625258036275169154469587330298248982380175535392820268307559346589392217184072614786811750371766379956195641121593792413;
	weights[40] 	= 0.02637746971505465867169179262522518567559933084224571844961567368530215924289677902847804872136534808676204;

	nodes[41] 	= 0.84062929625258036275169154469587330298248982380175535392820268307559346589392217184072614786811750371766379956195641121593792413;
	weights[41] 	= 0.02637746971505465867169179262522518567559933084224571844961567368530215924289677902847804872136534808676204;

	nodes[42] 	= -0.8659993981540928197607833850701575024125019187582496425664279511808356713122188567857456842034906362573453815878913951040194916;
	weights[42] 	= 0.0243527025687108733381775504090689876499784155133784119819985685535536787083770723737264828464464223276156;

	nodes[43] 	= 0.8659993981540928197607833850701575024125019187582496425664279511808356713122188567857456842034906362573453815878913951040194916;
	weights[43] 	= 0.0243527025687108733381775504090689876499784155133784119819985685535536787083770723737264828464464223276156;

	nodes[44] 	= -0.88931544599511410585340403827285162242919446151045218931947445660848110905777225264004459106237114805905295331888321059886572694;
	weights[44] 	= 0.0222701738083832541592983303841550024229592905997594051455205429744914460867081990116647982811451138592401;

	nodes[45] 	= 0.88931544599511410585340403827285162242919446151045218931947445660848110905777225264004459106237114805905295331888321059886572694;
	weights[45] 	= 0.0222701738083832541592983303841550024229592905997594051455205429744914460867081990116647982811451138592401;

	nodes[46] 	= -0.91052213707850280575638066800832986101348808488836402925317237144671022345562919681790187757803084580243021038484513127416638206;
	weights[46] 	= 0.020134823153530209372340316728543897089526680100791951922007234327676982821192359798229949841699859799544;

	nodes[47] 	= 0.91052213707850280575638066800832986101348808488836402925317237144671022345562919681790187757803084580243021038484513127416638206;
	weights[47] 	= 0.020134823153530209372340316728543897089526680100791951922007234327676982821192359798229949841699859799544;

	nodes[48] 	= -0.92956917213193957582149015455922560734742701442971549759281168336124309862655945159988344993558447366865128051296882149920475971;
	weights[48] 	= 0.017951715775697343085045302001119368897167357036415857297718427356924729587062098474308914057919927210797;

	nodes[49] 	= 0.92956917213193957582149015455922560734742701442971549759281168336124309862655945159988344993558447366865128051296882149920475971;
	weights[49] 	= 0.017951715775697343085045302001119368897167357036415857297718427356924729587062098474308914057919927210797;

	nodes[50] 	= -0.94641137485840281606248149134726479527939497179523319023177897129736644021494365912609281791884205335162641427554521597237227862;
	weights[50] 	= 0.015726030476024719321965995297539794426029009843156512152894393228421050216412455652574562847632699718948;

	nodes[51] 	= 0.94641137485840281606248149134726479527939497179523319023177897129736644021494365912609281791884205335162641427554521597237227862;
	weights[51] 	= 0.015726030476024719321965995297539794426029009843156512152894393228421050216412455652574562847632699718948;

	nodes[52] 	= -0.96100879965205371891861412189715720676211461103784594944615861586239199454889925639767808068662037862160014987883107145528474697;
	weights[52] 	= 0.013463047896718642598060766685955684108425771977349670818468278522198359889466626848969783705610503848585;

	nodes[53] 	= 0.96100879965205371891861412189715720676211461103784594944615861586239199454889925639767808068662037862160014987883107145528474697;
	weights[53] 	= 0.013463047896718642598060766685955684108425771977349670818468278522198359889466626848969783705610503848585;

	nodes[54] 	= -0.97332682778991096374185350735227266802614529445517417588191397819781522569584537499949660381541255476122079031050201761724202377;
	weights[54] 	= 0.011168139460131128818590493019208135072778797816827287215251362273969701224836131369547661822970774719522;

	nodes[55] 	= 0.97332682778991096374185350735227266802614529445517417588191397819781522569584537499949660381541255476122079031050201761724202377;
	weights[55] 	= 0.011168139460131128818590493019208135072778797816827287215251362273969701224836131369547661822970774719522;

	nodes[56] 	= -0.98333625388462595693129930215683111694524750662374038374648721312334261284154705356065597213308180035855326281248456628974106847;
	weights[56] 	= 0.008846759826363947723030914659730647695176266079220499798471576929611038000598536734169428632255052015617;

	nodes[57] 	= 0.98333625388462595693129930215683111694524750662374038374648721312334261284154705356065597213308180035855326281248456628974106847;
	weights[57] 	= 0.008846759826363947723030914659730647695176266079220499798471576929611038000598536734169428632255052015617;

	nodes[58] 	= -0.99101337147674432073938238344330311364134944539079048522254274593781316586441299973451089501337704343403301512891001500970183325;
	weights[58] 	= 0.006504457968978362856117360399981266771131761054952340095244879257568512571761306820353052649111329604941;

	nodes[59] 	= 0.99101337147674432073938238344330311364134944539079048522254274593781316586441299973451089501337704343403301512891001500970183325;
	weights[59] 	= 0.006504457968978362856117360399981266771131761054952340095244879257568512571761306820353052649111329604941;

	nodes[60] 	= -0.9963401167719552793469245006763991232098575063402266121352522199507030568202208530946066801021703916301511794658310735397567341;
	weights[60] 	= 0.004147033260562467635287535728551415313302819253684802462876366143183477669015739377682093310618713759201;

	nodes[61] 	= 0.9963401167719552793469245006763991232098575063402266121352522199507030568202208530946066801021703916301511794658310735397567341;
	weights[61] 	= 0.004147033260562467635287535728551415313302819253684802462876366143183477669015739377682093310618713759201;

	nodes[62] 	= -0.99930504173577213945690562434563631196971219167560877606280729546176465435053319978432423764626394349453767765121702653140112325;
	weights[62] 	= 0.0017832807216964329472960791449719331799593472719279556695308063655858546954239803486698215802150348282745;

	nodes[63] 	= 0.99930504173577213945690562434563631196971219167560877606280729546176465435053319978432423764626394349453767765121702653140112325;
	weights[63] 	= 0.0017832807216964329472960791449719331799593472719279556695308063655858546954239803486698215802150348282745;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_64_hpp__)*/