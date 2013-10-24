#include <iostream>
#include <string>
#include <sstream>

using namespace std;


/*
Start the program and input this on the command line as one row:
dsfkasafsddfasjdffasasmamsdfmasdfmasfdmasfmhafdasmasfmasfmasfmasfmasfdasgfmasfdmasffmasdfmasf12347123478jhsadfkq6r21326r21i7r2r2u73rti217rti7132rf612rf7213re7132r123r23r6523m45mq364qk2u346q2m746kq234q2463kq46qk3w4tq2k34q2ku346rq2k37r4kq236r4kq2364kq2764kqw64kqw364kqi46kq364qk3746rqk234r6kq2346q2k346kq32i42iq634lq26r4ql236r4lq2i3463qwr4i23gr92376r36rgt2374r92347r123o4r6123o48r7123ir132ery1283te1238te87123te123te8132te8123te812te8123e132e312v23f23f231rgfdtd21f721ed761d27fd27tfd27tf2dt7fe2dt7f2de7f2d7f2d17f2df7d2f2d1fdf22d1f7fd72fd2t72d17fd21t7d21f7d21fy72d1f7fd217tf1d2tf7d27f2df7f271d7fd21f6d727f2d1f6723rf7edr213e67e621fe812fe3u67123rfe71r2f3u7612rtfeu6721tre712treu67r132tu67er1237rei7123teri127trei7312tre132t7iet127re8tr12376et21ei7t127etr12i7e61237i6tei172t3ei97123t3rei1732te7i12tre1237e6t1273t6e127iet2136et231i7te9712t3e9712te123e7t1237et1273te123e123e213e12e123e213e3ngt123e96t1297ter8712te9123ite9rt32e789123tg197123te897123te876132t8e7t213e672eh123eh21o83eg9128ge91723tgei97123fge78132fe81732fe87132f21873fe91327itgf1297iegt127i93egti3712et971i23te91i723teg129i73tgei7132gte9i17t632gr1i732tr2317tr928713tr81327tr12398rt12983rt12938rt12938r128Brtg12938rgf123837r9o872rt1o832rt128o73r8o123tr87132rtg1o23r13298fc2h89345fho31785f5h9t1~2fg57t67834t7f8392rf873r723i723fro9RTI792TRI723QRI723TRdsfkasafsddfasjdffasasmamsdfmasdfmasfdmasfmhafdasmasfmasfmasfmasfmasfdasgfmasfdmasffmasdfmasf12347123478jhsadfkq6r21326r21i7r2r2u73rti217rti7132rf612rf7213re7132r123r23r6523m45mq364qk2u346q2m746kq234q2463kq46qk3w4tq2k34q2ku346rq2k37r4kq236r4kq2364kq2764kqw64kqw364kqi46kq364qk3746rqk234r6kq2346q2k346kq32i42iq634lq26r4ql236r4lq2i3463qwr4i23gr92376r36rgt2374r92347r123o4r6123o48r7123ir132ery1283te1238te87123te123te8132te8123te812te8123e132e312v23f23f231rgfdtd21f721ed761d27fd27tfd27tf2dt7fe2dt7f2de7f2d7f2d17f2df7d2f2d1fdf22d1f7fd72fd2t72d17fd21t7d21f7d21fy72d1f7fd217tf1d2tf7d27f2df7f271d7fd21f6d727f2d1f6723rf7edr213e67e621fe812fe3u67123rfe71r2f3u7612rtfeu6721tre712treu67r132tu67er1237rei7123teri127trei7312tre132t7iet127re8tr12376et21ei7t127etr12i7e61237i6tei172t3ei97123t3rei1732te7i12tre1237e6t1273t6e127iet2136et231i7te9712t3e9712te123e7t1237et1273te123e123e213e12e123e213e3ngt123e96t1297ter8712te9123ite9rt32e789123tg197123te897123te876132t8e7t213e672eh123eh21o83eg9128ge91723tgei97123fge78132fe81732fe87132f21873fe91327itgf1297iegt127i93egti3712et971i23te91i723teg129i73tgei7132gte9i17t632gr1i732tr2317tr928713tr81327tr12398rt12983rt12938rt12938r128Brtg12938rgf123837r9o872rt1o832rt128o73r8o123tr87132rtg1o23r13298fc2h89345fho31785f5h9t1~2fg57t67834t7f8392rf873r723i723fro9RTI792TRI723QRI723TRdsfkasafsddfasjdffasasmamsdfmasdfmasfdmasfmhafdasmasfmasfmasfmasfmasfdasgfmasfdmasffmasdfmasf12347123478jhsadfkq6r21326r21i7r2r2u73rti217rti7132rf612rf7213re7132r123r23r6523m45mq364qk2u346q2m746kq234q2463kq46qk3w4tq2k34q2ku346rq2k37r4kq236r4kq2364kq2764kqw64kqw364kqi46kq364qk3746rqk234r6kq2346q2k346kq32i42iq634lq26r4ql236r4lq2i3463qwr4i23gr92376r36rgt2374r92347r123o4r6123o48r7123ir132ery1283te1238te87123te123te8132te8123te812te8123e132e312v23f23f231rgfdtd21f721ed761d27fd27tfd27tf2dt7fe2dt7f2de7f2d7f2d17f2df7d2f2d1fdf22d1f7fd72fd2t72d17fd21t7d21f7d21fy72d1f7fd217tf1d2tf7d27f2df7f271d7fd21f6d727f2d1f6723rf7edr213e67e621fe812fe3u67123rfe71r2f3u7612rtfeu6721tre712treu67r132tu67er1237rei7123teri127trei7312tre132t7iet127re8tr12376et21ei7t127etr12i7e61237i6tei172t3ei97123t3rei1732te7i12tre1237e6t1273t6e127iet2136et231i7te9712t3e9712te123e7t1237et1273te123e123e213e12e123e213e3ngt123e96t1297ter8712te9123ite9rt32e789123tg197123te897123te876132t8e7t213e672eh123eh21o83eg9128ge91723tgei97123fge78132fe81732fe87132f21873fe91327itgf1297iegt127i93egti3712et971i23te91i723teg129i73tgei7132gte9i17t632gr1i732tr2317tr928713tr81327tr12398rt12983rt12938rt12938r128Brtg12938rgf123837r9o872rt1o832rt128o73r8o123tr87132rtg1o23r13298fc2h89345fho31785f5h9t1~2fg57t67834t7f8392rf873r723i723fro9RTI792TRI723QRI723TRdsfkasafsddfasjdffasasmamsdfmasdfmasfdmasfmhafdasmasfmasfmasfmasfmasfdasgfmasfdmasffmasdfmasf12347123478jhsadfkq6r21326r21i7r2r2u73rti217rti7132rf612rf7213re7132r123r23r6523m45mq364qk2u346q2m746kq234q2463kq46qk3w4tq2k34q2ku346rq2k37r4kq236r4kq2364kq2764kqw64kqw364kqi46kq364qk3746rqk234r6kq2346q2k346kq32isdfgsdfgsdfgsdfgsdfgsdfdsfgsdfgsdfgsdfgdfgsdfsfgsfdgsdfgsdfgsdfgsdfgsdfgsdfgsdfgdfsgsdfgsdfgsgfsdfgsdfgsdfgsdfgsdfgqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqtheend

You wont be able to input it all
*/
int main() 
{
	const size_t bufferSize = 2 * 4096;
	wchar_t lineBuffer[bufferSize] = {0};

	wcin.getline(lineBuffer, bufferSize); 
	wstring line(lineBuffer);

	wostringstream wos;
	wos << L", state of wcin, badbit: " << wcin.bad();
	wos << L", eof: " << wcin.eof();
	wos << L", failbit: " << wcin.fail();

	wcout << L"The input: " << line << wos.str() << endl; 

	return 0;
}