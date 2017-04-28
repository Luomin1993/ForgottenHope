#include "CTP_API/ThostFtdcTraderApi.h"
#include "CTP_API/ThostFtdcUserApiStruct.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <thread>
#include <mutex>

// ---- 全局参数声明 ---- //
extern TThostFtdcBrokerIDType gBrokerID;                      // 模拟经纪商代码
extern TThostFtdcInvestorIDType gInvesterID;                  // 投资者账户名
extern TThostFtdcPasswordType gInvesterPassword;              // 投资者密码
extern CThostFtdcTraderApi *g_pTradeUserApi;                  // 交易指针
extern char gTradeFrontAddr[];                                // 模拟交易前置地址

extern TThostFtdcInstrumentIDType g_pTradeInstrumentID;       // 所交易的合约代码
extern TThostFtdcDirectionType gTradeDirection;               // 买卖方向
extern TThostFtdcPriceType gLimitPrice;                       // 交易价格

extern CThostFtdcMdApi *g_pMdUserApi;                         // 行情指针
extern char gMdFrontAddr[];                                   // 模拟行情前置地址
extern TThostFtdcBrokerIDType gBrokerID;                      // 模拟经纪商代码
extern TThostFtdcInvestorIDType gInvesterID;                  // 投资者账户名
extern TThostFtdcPasswordType gInvesterPassword;              // 投资者密码
extern char *g_pInstrumentID[];                               // 行情合约代码列表，中、上、大、郑交易所各选一种
extern int instrumentNum;                                     // 行情合约订阅数量

std::unordered_map<std::string, TickToKlineHelper> g_KlineHashST;

extern std::unordered_map<std::string, TickToKlineHelper> g_KlineHash;
//extern std::unordered_map<std::string, TickToKlineHelper> g_KlineHashST;
std::mutex g_marketDataMutex;
