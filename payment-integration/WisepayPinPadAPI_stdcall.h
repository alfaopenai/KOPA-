//
// Created by alina on 8/21/2018.
//

#ifndef WISEPAYPINPADDRIVER_WISEPAYPINPADAPI_STDCALL_H
#define WISEPAYPINPADDRIVER_WISEPAYPINPADAPI_STDCALL_H


#ifdef __cplusplus
extern "C" {
#endif

#ifdef WisepayPinPadDriver_stdcall_EXPORTS
#define PINPAD_API __declspec(dllexport)
#else
#define PINPAD_API __declspec(dllimport)
#endif

PINPAD_API void __stdcall WisepayPinPad_SetDebug(bool debug);
PINPAD_API void __stdcall WisepayPinPad_Version(char *buffer, int bufferSize);

PINPAD_API int __stdcall WisepayPinPad_Open2(const char *address, const char *accessCode);
PINPAD_API int __stdcall WisepayPinPad_Close();
PINPAD_API int __stdcall WisepayPinPad_Shutdown();

PINPAD_API int __stdcall WisepayPinPad_Txn(const char* txnType,
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
PINPAD_API int __stdcall WisepayPinPad_CancelTxn(const char* voucherNum,
                                                int amount,
                                                const char* currency,
                                                const char* motoPanEntry,
                                                bool printVoucher,
                                                const char* context,
                                                const char* userData);
PINPAD_API int __stdcall WisepayPinPad_CancelTxnByUID(const char* UID,
                                                      int amount,
                                                      const char* currency,
                                                      const char* motoPanEntry,
                                                      bool printVoucher,
                                                      const char* context,
                                                      const char* userData);
PINPAD_API int __stdcall WisepayPinPad_CancelTxnNoValidate(const char* UID,
                                                           const char* voucherNum,
                                                           bool printVoucher,
                                                           const char* context,
                                                           const char* userData);


PINPAD_API int __stdcall WisepayPinPad_J2(const char* motoPanEntry,
                                          const char* context);
PINPAD_API int __stdcall WisepayPinPad_J2Ex(const char* motoPanEntry,
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

PINPAD_API int __stdcall WisepayPinPad_J5(int amount,
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
PINPAD_API int __stdcall WisepayPinPad_SettleJ5(const char* authNum,
                                               int amount,
                                               const char* currency,
                                               const char* motoPanEntry,
                                               bool printVoucher,
                                               const char* context,
                                               const char* userData);
PINPAD_API int __stdcall WisepayPinPad_CancelJ5(const char* authNum,
                                               int amount,
                                               const char* currency,
                                               const char* motoPanEntry,
                                               bool printVoucher,
                                               const char* context,
                                               const char* userData);
PINPAD_API int __stdcall WisepayPinPad_CheckBalance(const char* motoPanEntry,
                                                    bool printVoucher,
                                                    const char* context,
                                                    const char* userData);
PINPAD_API int __stdcall WisepayPinPad_DepositTxns(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int __stdcall WisepayPinPad_DepositTxns2(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int __stdcall WisepayPinPad_LastDeposit(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int __stdcall WisepayPinPad_LastDeposit2(const char* reportFormat, bool printVoucher, const char* context);
PINPAD_API int __stdcall WisepayPinPad_LastTxnDetails(bool printVoucher, const char* context);
PINPAD_API int __stdcall WisepayPinPad_ReadCard(const char* displayMsg, const char* context);
PINPAD_API int __stdcall WisepayPinPad_GetInfo(const char* context);

PINPAD_API int __stdcall WisepayPinPad_MessageBox(const char* header,
                                                  const char* message,
                                                  const char* icon,
                                                  const char* footerStyle,
                                                  int timeout,
                                                  const char* context);
PINPAD_API int __stdcall WisepayPinPad_PrintLine(const char* line, const char* fontSize, const char* alignment, bool underline, bool reverse);
PINPAD_API int __stdcall WisepayPinPad_PrintParagraph(const char* paragraphInJsonFormat);
PINPAD_API int __stdcall WisepayPinPad_FeedLine(int numOfLines);

PINPAD_API int __stdcall WisepayPinPad_IsResponseReady(unsigned long msTimeout);
PINPAD_API void __stdcall WisepayPinPad_GetResponse(char *response, unsigned int responseLength);
PINPAD_API void __stdcall WisepayPinPad_CancelOngoingTxn();

PINPAD_API int __stdcall WisepayPinPad_SetLocale(const char* locale);

PINPAD_API int __stdcall WisepayPinPad_QueryByppContext(const char* ppContext, const char* context);

//////////////////////////////////////////////////////////////////////////////////////////

PINPAD_API int __stdcall WisepayPinPad_Txn_Start(const char* motoPanEntry,
                                                 int amount,
                                                 const char* currency,
                                                 const char* txnType,
                                                 const char* context);
PINPAD_API int __stdcall WisepayPinPad_Txn_StartEx(const char* motoPanEntry,
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

PINPAD_API int __stdcall WisepayPinPad_Txn_End(const char* pendingTxnId,
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
PINPAD_API int __stdcall WisepayPinPad_CancelTwoPhasePendingTxn(const char* twoPhasePendingTxnId);

#ifdef __cplusplus
}
#endif


#endif //WISEPAYPINPADDRIVER_WISEPAYPINPADAPI_STDCALL_H

// This software uses picoJson.
/*
 * Copyright 2009-2010 Cybozu Labs, Inc.
 * Copyright 2011-2014 Kazuho Oku
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
