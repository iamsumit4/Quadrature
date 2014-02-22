//
//        Gauss_Legendre_Nodes_and_Weights_30.hpp
//
//
//        Created by Sivaram Ambikasaran on 2014-02-21.20:10:28.
//
//
//        Array of nodes and weights for Gauss Legendre quadrature of order 30.
//
//

#ifndef __Gauss_Legendre_Nodes_and_Weights_30_hpp__
#define __Gauss_Legendre_Nodes_and_Weights_30_hpp__

void Gauss_Legendre_Nodes_and_Weights_30(long double*& nodes, long double*& weights) {
	nodes	= new long double[30];
	weights	= new long double[30];

	nodes[0] 	= -0.051471842555317695833025213166722573749141453666569564255160843987964755210427109055870090707285485841217089963590678285540419113;
	weights[0] 	= 0.1028526528935588403412856367054150438683755570649282225863189866760162386566094293926288463218887091650381585270908625590053446;

	nodes[1] 	= 0.051471842555317695833025213166722573749141453666569564255160843987964755210427109055870090707285485841217089963590678285540419113;
	weights[1] 	= 0.1028526528935588403412856367054150438683755570649282225863189866760162386566094293926288463218887091650381585270908625590053446;

	nodes[2] 	= -0.15386991360858354696379467274325592041855197124433846171896298291578714851081610139692310651074078557990111754952061953350505177;
	weights[2] 	= 0.101762389748405504596428952168554044632706289487126840864260945419642513605317674945475997819783911988816933858876964988601882;

	nodes[3] 	= 0.15386991360858354696379467274325592041855197124433846171896298291578714851081610139692310651074078557990111754952061953350505177;
	weights[3] 	= 0.101762389748405504596428952168554044632706289487126840864260945419642513605317674945475997819783911988816933858876964988601882;

	nodes[4] 	= -0.25463692616788984643980512981780510788278930330251842616428597508896353156907880290636628138423620257595521678255758141865652604;
	weights[4] 	= 0.0995934205867952670627802821035694765298692636667042772213651461839466603899088090180922992893241847053735232295920367522235;

	nodes[5] 	= 0.25463692616788984643980512981780510788278930330251842616428597508896353156907880290636628138423620257595521678255758141865652604;
	weights[5] 	= 0.0995934205867952670627802821035694765298692636667042772213651461839466603899088090180922992893241847053735232295920367522235;

	nodes[6] 	= -0.35270472553087811347103720708937386065363100802142562659418446890026941623319107866436039675211352945165817827083103949016851565;
	weights[6] 	= 0.0963687371746442596394686263518098650964064614301602459129942757328375347420031237249512478181041953633430935835834288197;

	nodes[7] 	= 0.35270472553087811347103720708937386065363100802142562659418446890026941623319107866436039675211352945165817827083103949016851565;
	weights[7] 	= 0.0963687371746442596394686263518098650964064614301602459129942757328375347420031237249512478181041953633430935835834288197;

	nodes[8] 	= -0.44703376953808917678060990032285400016240759386142440975447738172761535172858420700400688872124189834257262048739698805427165941;
	weights[8] 	= 0.09212252223778612871763270708761876719691323441823410752767504700197304707009416829846405291681190715895494939410050136961;

	nodes[9] 	= 0.44703376953808917678060990032285400016240759386142440975447738172761535172858420700400688872124189834257262048739698805427165941;
	weights[9] 	= 0.09212252223778612871763270708761876719691323441823410752767504700197304707009416829846405291681190715895494939410050136961;

	nodes[10] 	= -0.53662414814201989926416979331107279416417800693029710545274348291201490861897837863114116009718990258091585830703557398587618458;
	weights[10] 	= 0.0868997872010829798023875307151257025767533287435453440122221298821535822542614942479550335096391053302154776019539209407;

	nodes[11] 	= 0.53662414814201989926416979331107279416417800693029710545274348291201490861897837863114116009718990258091585830703557398587618458;
	weights[11] 	= 0.0868997872010829798023875307151257025767533287435453440122221298821535822542614942479550335096391053302154776019539209407;

	nodes[12] 	= -0.62052618298924286114047755643118929920736469282952813259505117012433531497488911774115258445532782106478789996137480669502255663;
	weights[12] 	= 0.080755895229420215354694938460529730875892803708439299890258593706051180567026345604212402769217808080749416147400961856;

	nodes[13] 	= 0.62052618298924286114047755643118929920736469282952813259505117012433531497488911774115258445532782106478789996137480669502255663;
	weights[13] 	= 0.080755895229420215354694938460529730875892803708439299890258593706051180567026345604212402769217808080749416147400961856;

	nodes[14] 	= -0.69785049479331579693229238802664006838235380065395465637972284673997672124315996069538163644008904690545069439941340929943926265;
	weights[14] 	= 0.07375597473770520626824385002219073415377052603704943894126918237459939931463521171040135271663818327019225423688263011;

	nodes[15] 	= 0.69785049479331579693229238802664006838235380065395465637972284673997672124315996069538163644008904690545069439941340929943926265;
	weights[15] 	= 0.07375597473770520626824385002219073415377052603704943894126918237459939931463521171040135271663818327019225423688263011;

	nodes[16] 	= -0.76777743210482619491797734097450313169488361723290845320649438736515857017299504505260960258623968420224697596501719288168759482;
	weights[16] 	= 0.0659742298821804951281285151159623612374429536566603789670315160421436724660941793658199139115987374394782058082712374;

	nodes[17] 	= 0.76777743210482619491797734097450313169488361723290845320649438736515857017299504505260960258623968420224697596501719288168759482;
	weights[17] 	= 0.0659742298821804951281285151159623612374429536566603789670315160421436724660941793658199139115987374394782058082712374;

	nodes[18] 	= -0.82956576238276839744289811973250191643906869617034167880695298345365650658958163508295244350814016004371545455777731662280290671;
	weights[18] 	= 0.0574931562176190664817216894020561287971206707217631345487157990032321474099543769252119996509501253555599743482798456;

	nodes[19] 	= 0.82956576238276839744289811973250191643906869617034167880695298345365650658958163508295244350814016004371545455777731662280290671;
	weights[19] 	= 0.0574931562176190664817216894020561287971206707217631345487157990032321474099543769252119996509501253555599743482798456;

	nodes[20] 	= -0.88256053579205268154311646253022559005668914714648423206832605312161626269519165572921583828573210485349058106849548238273693238;
	weights[20] 	= 0.0484026728305940529029381404228075178152718091973727363451919367918054256771021527977674395635622634543746459550720074;

	nodes[21] 	= 0.88256053579205268154311646253022559005668914714648423206832605312161626269519165572921583828573210485349058106849548238273693238;
	weights[21] 	= 0.0484026728305940529029381404228075178152718091973727363451919367918054256771021527977674395635622634543746459550720074;

	nodes[22] 	= -0.92620004742927432587932427708047400408647453682532906091103713367942299565110232681677288015055886244486106298320067852489212422;
	weights[22] 	= 0.038799192569627049596801936446347692033200976766395352107732789705946970952769793919055026279035105656340228558382274;

	nodes[23] 	= 0.92620004742927432587932427708047400408647453682532906091103713367942299565110232681677288015055886244486106298320067852489212422;
	weights[23] 	= 0.038799192569627049596801936446347692033200976766395352107732789705946970952769793919055026279035105656340228558382274;

	nodes[24] 	= -0.96002186496830751221687102558179766293035921740392339948566167242493995770706842922718944370380002378239172677454384320488735738;
	weights[24] 	= 0.028784707883323369349719179611292043639588894546287496474180122608145988940013933101730206711484171554940392262251283;

	nodes[25] 	= 0.96002186496830751221687102558179766293035921740392339948566167242493995770706842922718944370380002378239172677454384320488735738;
	weights[25] 	= 0.028784707883323369349719179611292043639588894546287496474180122608145988940013933101730206711484171554940392262251283;

	nodes[26] 	= -0.98366812327974720997003258160566280194031785470971136351718001015114429536479104370207597166035471368057762560137209331201599781;
	weights[26] 	= 0.0184664683110909591423021319120472690962065339681814033712983655145855995213079736540805190296754179556380958320461636;

	nodes[27] 	= 0.98366812327974720997003258160566280194031785470971136351718001015114429536479104370207597166035471368057762560137209331201599781;
	weights[27] 	= 0.0184664683110909591423021319120472690962065339681814033712983655145855995213079736540805190296754179556380958320461636;

	nodes[28] 	= -0.99689348407464954027163005091869528334088203811775079010809429780238769521016374081588201955806171741257405095963816831643780225;
	weights[28] 	= 0.00796819249616660561546588347467362245048069658715172122948516335692003843290133329415366169228617352098465065621588169;

	nodes[29] 	= 0.99689348407464954027163005091869528334088203811775079010809429780238769521016374081588201955806171741257405095963816831643780225;
	weights[29] 	= 0.00796819249616660561546588347467362245048069658715172122948516335692003843290133329415366169228617352098465065621588169;

}
#endif /*(__Gauss_Legendre_Nodes_and_Weights_30_hpp__)*/