//
// Created by alina on 10/23/2018.
//

#ifndef PINPADDRIVER_WISEPAYPINPADAPI_H
#define PINPADDRIVER_WISEPAYPINPADAPI_H

#ifdef __cplusplus
extern "C" {
#endif

 //For windows
#if defined _WIN32 || defined __CYGWYN__

#ifdef WisepayPinPadDriver_EXPORTS
#define PINPAD_API __declspec(dllexport)
#else
#define PINPAD_API __declspec(dllimport)
#endif


//For linux
#else

#ifdef WisepayPinPadDriver_EXPORTS
#define PINPAD_API __attribute__ ((visibility ("default")))
#else
#define PINPAD_API
#endif
#endif


PINPAD_API void WisepayPinPad_SetDebug(bool debug);
PINPAD_API void WisepayPinPad_Version(char *buffer, int bufferSize);

PINPAD_API int WisepayPinPad_Open2(const char *address, const char *accessCode);
PINPAD_API int WisepayPinPad_Close();
PINPAD_API int WisepayPinPad_Shutdown();

PINPAD_API int WisepayPinPad_Txn(const char* txnType,
                                   int amount,
                                   const char* currency,
                                   const char* creditTerms,
                                   int noPayments,
                                   int firstPayment,
                                   int notFirstPayment,
                                   int creditNoPayments,
                                   const char* indexPayment,
                                   int cashbackAmount,
                                   const char* authNum,
                                   const char* motoPanEntry,
                                   bool printVoucher,
                                   const char* context,
                                   const char* userData);
PINPAD_API int WisepayPinPad_CancelTxn(const char* voucherNum,
                                         int amount,
                                         const char* currency,
                                         const char* motoPanEntry,
                                         bool printVoucher,
                                         const char* context,
                                         const char* userData);
PINPAD_API int WisepayPinPad_CancelTxnByUID(const char* UID,
                                            int amount,
                                            const char* currency,
                                            const char* motoPanEntry,
                                            bool printVoucher,
                                            const char* context,
                                            const char* userData);
PINPAD_API int WisepayPinPad_CancelTxnNoValidate(const char* UID,
                                                 const char* voucherNum,
                                                 bool printVoucher,
                                                 const char* context,
                                                 const char* userData);


PINPAD_API int WisepayPinPad_J2(const char* motoPanEntry,
                                const char* context);
PINPAD_API int WisepayPinPad_J2Ex(const char* motoPanEntry,
                                   int amount,
                                   const char* currency,
                                   const char* txnType,
                                   const char* creditTerms,
                                   int noPayments,
                                   int firstPayment,
                                   int notFirstPayment,
                                   int creditNoPayments,
                                   const char* indexPayment,
                                   int cashbackAmount,
                                   const char* context,
                                   const char* userData);

PINPAD_API int WisepayPinPad_J5(int amount,
                                  const char* currency,
                                  const char* creditTerms,
                                  int noPayments,
                                  int firstPayment,
                                  int notFirstPayment,
                                  int creditNoPayments,
                                  const char* indxPayment,
                                  const char* motoPanEntry,
                                  bool printVoucher,
                                  const char* context,
                                  const char* userData);
PINPAD_API int WisepayPinPad_SettleJ5(const char* authNum,
                                        int amount,
                                        const char* currency,
                                        const char* motoPanEntry,
                                        bool printVoucher,
                                        const char* context,
                                        const char* userData);
PINPAD_API int WisepayPinPad_CancelJ5(const char* authNum,
                                        int amount,
                                        const char* currency,
                                        const char* motoPanEntry,
                                        bool printVoucher,
                                        const char* context,
                                        const char* userData);
PINPAD_API int WisepayPinPad_CheckBalance(const char* motoPanEntry,
                                          bool printVoucher,
                                          const char* context,
                                          const char* userData);
PINPAD_API int WisepayPinPad_DepositTxns(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int WisepayPinPad_DepositTxns2(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int WisepayPinPad_LastDeposit(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int WisepayPinPad_LastDeposit2(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int WisepayPinPad_LastTxnDetails(bool printVoucher, const char* context);
PINPAD_API int WisepayPinPad_ReadCard(const char* displayMsg, const char* context);
PINPAD_API int WisepayPinPad_GetInfo(const char* context);

PINPAD_API int WisepayPinPad_MessageBox(const char* header,
                                        const char* message,
                                        const char* icon,
                                        const char* footerStyle,
                                        int timeout,
                                        const char* context);
PINPAD_API int WisepayPinPad_PrintLine(const char* line, const char* fontSize, const char* alignment, bool underline, bool reverse);
PINPAD_API int WisepayPinPad_PrintParagraph(const char* paragraphInJsonFormat);
PINPAD_API int WisepayPinPad_FeedLine(int numOfLines);

PINPAD_API int WisepayPinPad_IsResponseReady(unsigned long msTimeout);
PINPAD_API void WisepayPinPad_GetResponse(char *response, unsigned int responseLength);
PINPAD_API void WisepayPinPad_CancelOngoingTxn();

PINPAD_API int WisepayPinPad_SetLocale(const char* locale);

PINPAD_API int WisepayPinPad_QueryByppContext(const char* ppContext, const char* context);

///////////////////////////////////////////////////////

PINPAD_API int WisepayPinPad_Txn_Start(const char* motoPanEntry,
                                       int amount,
                                       const char* currency,
                                       const char* txnType,
                                       const char* context);

PINPAD_API int WisepayPinPad_Txn_StartEx(const char* motoPanEntry,
                                         int amount,
                                         const char* currency,
                                         const char* txnType,
                                         const char* creditTerms,
                                         int noPayments,
                                         int firstPayment,
                                         int notFirstPayment,
                                         int creditNoPayments,
                                         const char* indexPayment,
                                         int cashbackAmount,
                                         const char* context,
                                         const char* userData);

PINPAD_API int WisepayPinPad_Txn_End(const char* pendingTxnId,
                                               const char* txnType,
                                               int amount,
                                               const char* currency,
                                               const char* creditTerms,
                                               int noPayments,
                                               int firstPayment,
                                               int notFirstPayment,
                                               int creditNoPayments,
                                               const char* indexPayment,
                                               int cashbackAmount,
                                               const char* authNum,
                                               bool printVoucher,
                                               bool userConfirm,
                                               const char* context,
                                               const char* userData);
PINPAD_API int WisepayPinPad_CancelTwoPhasePendingTxn(const char* twoPhasePendingTxnId);


#ifdef __cplusplus
}
#endif

#endif //PINPADDRIVER_WISEPAYPINPADAPI_H
