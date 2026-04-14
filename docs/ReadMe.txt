Version 5.1.0 Patch 131 17/02/2026

000 18/06/2025 - Version Released
001 22/06/2025 - BugFix: Item-return require customer doesn't work in fast EFT payment
002 22/06/2025 - BugFix: Import from Comax failure due to customers import (Customers import removed)
003 26/06/2025 - Improve reading of Comax API XML response
004 26/06/2025 - Improve DataDictionary to support use of user in queries
005 26/06/2025 - Import from Comax fail when multiple stores has the same pricelist
006 09/07/2025 - BugFix: Cost price of child item (of another item) is updated regardless to flag 'Update cost by parent' (MC 224053)
007 09/07/2025 - BugFix: GroupRepresentsStore customer order by preferred source was handled as POSNumber
008 09/07/2025 - BugFix: Graphic finder - Update controls on scroll/Down movement, color fixes
009 09/07/2025 - BugFix: Cannot send transaction to credit-guard with no exp-date
010 09/07/2025 - BugFix: Search for Verifone certificate for the LocalMachine and for the CurrentUser due to a permissions issue
011 13/07/2025 - Support reading units from KC scale
012 13/07/2025 - Support more reward type (13) on AIMS ESL export
013 14/07/2025 - BugFix: Bring top records by wrong order when loading customer transactions from external system
014 22/07/2025 - Add option to use terminals-group token for Lion-Wheel API communication
015 22/07/2025 - BugFix: Promotion line voiding permission is ignored at the POS (MC 225102)
016 22/07/2025 - Option added to define a specific host name on which the store-server will be running (MC 225104)
017 22/07/2025 - BugFix: Error importing data from Comax if multiple prices lists are set to specific item(s)
018 23/07/2025 - Support sending message to customer from POS
019 07/08/2025 - Add option to activate weezmo on selective POS numbers
020 07/08/2025 - New fields added in Data-Dictionary (sets 41 and 161) for turnover of supplier (Scripts.txt) (MC 226106)
021 10/08/2025 - Add option to pick warehouse from list for late-delivery
022 10/08/2025 - New system event is recoded on Server startup (Scripts.txt)
023 20/08/2025 - Support POS warehouse for lionwheel token recognition in case delivery was done without late delivery
024 24/08/2025 - Endless loop prevention in EMV transaction process on SelfCheckout POS (MC 227021)
025 25/08/2025 - BugFix: Error sending message to customer and printing bill from bills-list if bill exists on a different POS
026 25/08/2025 - BugFix: Item price changed from POS (item query) caused exception due to non nullable field in the DB table (MC 226935)
027 25/08/2025 - New option added in value cards type to skip manual entry permission check. Add ** in the type name in order to skip the permission validation (MC 227142)
028 09/09/2025 - Change InForU API calls to https
029 09/09/2025 - SMS is now supported even if number includes (ISR) country prefix (MC 225552)
030 09/09/2025 - New bill lines merging option is now supported (Following lines same sign) (Scripts.txt) (MC 227652)
031 09/09/2025 - BugFix: Upload of transaction to Comax now has 3 retries only
032 09/09/2025 - New gate opening barcode format added - RavShaar (Scripts.txt)
033 10/09/2025 - Length of item name field extended (MC 227380)
034 10/09/2025 - Validate value card by barcode only  (Scripts.txt) (MC 227653)
035 17/09/2025 - BugFix: ESL export did not check subsets
036 17/09/2025 - Export of EFT transmissions to Comax is now done for each store
037 21/09/2025 - New SVA banker added (75 =Rapyd, 85 = UPay) (Scripts.txt)
038 29/09/2025 - Prevent blocking of EOD data transfer from POS terminals to server
039 29/09/2025 - Export of instore sales with Net amounts instead of Gross amounts
040 29/09/2025 - Optimus Telephony events handling
041 29/09/2025 - BugFix: Translation of 'send invoice' field in Invoice data entry (Back-Office) (Scripts.txt)
042 29/09/2025 - BugFix: Sale command ID not being saved in category card (Back-office) (MC 229049)
043 29/09/2025 - BugFix: Stock order auto numbering not working in BLG localization (MC 229087)
044 29/09/2025 - WebShopAPI supports optimus telephony
045 29/09/2025 - Support export to Bosanova (MC 228992)
046 05/10/2025 - Default value of double promotion mode by parameter (MC 227696) (Scripts.txt)
047 05/10/2025 - User permissions fix for NamedPipe and extra debug logs for Optimus telephony
048 09/10/2025 - BugFix: BugFix: Items marked as 'deleted' not to be shown in info terminal (MC 229704)
049 09/10/2025 - Mettler Toledo scale values ending with N are read correctly (MC 229781)
050 20/10/2025 - BugFix: No printout if Weezmo target phone number empty (MC 225646)
051 20/10/2025 - BugFix: POS Starting with open bill may fail due to bill file locking (MC 229904)
052 20/10/2025 - BugFix: Slip printing cleanup improved upon cheque printing failure (MC 229921)
053 20/10/2025 - Optimus test from ProfitAgeTools can send empty DEST phone number
054 20/10/2025 - BugFix: Optimus API can get some incoming call messages with the same CallID
055 21/10/2025 - Extra debug logs for Optimus init failure
056 22/10/2025 - BugFix: Exception in HQ sync upon getting customer transactions from HQ
057 22/10/2025 - BugFix: Optimus API can handle some messages that arrived at the same time
058 27/10/2025 - BugFix: Optimus NamedPipe timeouts and name
059 28/10/2025 - BugFix: Export of report to Excel with date column not always result expected data format (MC 230367)
060 28/10/2025 - BugFix: Prevent saving a parent item With same code of the same code as a child item (MC 230379)
061 28/10/2025 - BugFix: Optimus error
062 28/10/2025 - Implement date filter for Wolt export
063 28/10/2025 - BugFix: Prevention of log overload when the parameter 2272 is set to DISABLED (MC 230666)
064 28/10/2025 - BugFix: Optimus error
065 28/10/2025 - BugFix: Optimus error
066 29/10/2025 - BugFix: Error loading ready valuecard
067 02/11/2025 - BugFix: Exception when calling A4SLabels application from back office module
068 03/11/2025 - BugFix: Optimus interface click-to-call fixed
069 04/11/2025 - Telephony ClickToCall from NewCustomerForm
070 11/11/2025 - Telephony ClickToCall from BO (CustomersForm, CustomerForm, CommunicationsForm)
071 11/11/2025 - BugFix: Telephony ClickToCall fix
072 11/11/2025 - WinTec scale now supports Reset-to-zero by clicking the scale panel on the POS screen (MC 231306)
073 18/11/2025 - OptimusServer URL changed
074 23/11/2025 - Comax export improvements: Scrollable options list and date range export
075 23/11/2025 - Improve handling of decimal point with Belgian localization when importing docs from PAMobile
076 23/11/2025 - Support upgraded version of WinSCP
077 24/11/2025 - Support SimplyClub customer with no phone number
078 26/11/2025 - Add option to select specific bills and send an SMS to the customer associated with each bill and notifying them to pick up their order , Bills can now be marked as Delivered (MC 230027)
079 26/11/2025 - Extra DD fields added in customer's identities set (Scripts.txt)
080 01/12/2025 - Item category ID added to default EWAVE ESL export (MC 232678)
081 01/12/2025 - Transactions (bill) list in Back-office auto refresh interval changed to 30 seconds (230027)
082 01/12/2025 - Back-office lists handled in pages are now refreshed with addingqremoval of records (230027)
083 01/12/2025 - Option added to disable promotions import from Comax ERP (232816)
084 07/12/2025 - By clicking the Pos Number SVA License download from OLS (228497) , fix Promotion bug (232325)
085 07/12/2025 - Add credit-card last 4 digits to movein export (MC 233051)
086 08/12/2025 - BugFix: Stock document CSV import not working if file contains only 3 columns (233265)
087 10/12/2025 - BugFix: Missing subtype when exporting external payments to accouting
088 14/12/2025 - Add option to keep background backoffice external caller alive
089 21/12/2025 - Add option to send invoices by email also from invoice sending to customers group form (MC 233048)
090 21/12/2025 - BugFix: Optimus telephony sometimes stopped working
091 21/12/2025 - BugFix: HQLink will no longer execute DELETE commands on HeadOffice if records does not exist
092 23/12/2025 - Add option to Show QR Code on Castles and ingenico Devices With Kashcash Payment. (MC 233185)
093 24/12/2025 - BugFix: Subsets handling was incorrect when only one subset is configured (232695)
094 25/12/2025 - BugFix: Disable instore labels export if path not set (MC 234363)
095 25/12/2025 - BugFix: Subsets handling fixed (caused by patch 093) (MC 234388)
096 28/12/2025 - Add {STORENUM} and {STORENAME} PlaceHolder to SendAutoTaskBLockingMessage (MC 234237)
097 28/12/2025 - BugFix: Optimus telephony sometimes stopped working - exception handling added
098 30/12/2025 - BugFix: user cannot add more than 64 subset (MC 234648)
099 30/12/2025 - BugFix: City data saving (Back-office module) improved (all streets/zip-codes to be written in a single command) (234785)
100 04/01/2026 - BugFix: Import from Comax to be skipped if no items or no departments exists in Comax DB (MC 235229)
101 04/01/2026 - BugFix: Customer action-items now being read at server (by POS) without locking DB tables (MC 235228)
102 04/01/2026 - BugFix: Open Format export bug fixed (Missing records in output file (MC 234831)
103 04/01/2026 - Improve Action Items query handling (234849)
104 05/01/2026 - BugFix: Import of Action items at server cause blocking of DB tables
105 06/01/2026 - Option added to define main price list in external import (MC 235374)
106 06/01/2026 - Improve Export open Format file from Tools.
107 06/01/2026 - BugFix: GovReference (ISR) error writing caused SQL exception ()
108 08/01/2026 - Added an option to manually print a Gate barcode from the POS , Added an option to define a minimum bill amount required for Gate barcode printing (MC 234599)
109 08/01/2026 - BugFix: Printing of delivery note was prevented if GofReference feature is active (MC 234875)
110 11/01/2026 - BugFix: Resize GovReference Max Len to 30
111 12/01/2026 - Goodie protocol replace to SSL/TLS
112 18/01/2026 - BugFix: Full download performed from HQ Controller was not always usable (if field value was NULL)
113 18/01/2026 - Restricted discount permission (37) now shows the discount description and discount amount (Scripts.txt) (MC 236332)
114 25/01/2026 - Upload CreditTicket to HQ
115 25/01/2026 - BugFix: GovRefernece (ISR) error message for 406 http error
116 25/01/2026 - BugFix: Local items with no update date will not be imported in partial (not full) import from Comax
117 26/01/2026 - Added option: Allow assigning a customer from historic bills list.
118 27/01/2026 - Extra parameter added to allow Comnax export while ignoring Max Amount validation (MC 237156)
119 02/02/2026 - Auto register SVA certificate and retry on communication error
120 02/02/2026 - Improved remote approval screen , ordered by priority. (MC 236377)
121 04/02/2026 - Added New PlaceHolders for DocLayouts.(MC 236747)
122 08/02/2026 - Parameter added to ignore customer's accouting code field and mearge records regardless to this field when exporting to accountanty system (MC 237888)
123 08/02/2026 - Exception prevented in POS log file when searching customer by numeric value if customer with code >INT exists (MC 238258)
124 08/02/2026 - BugFix: Click-to-call handling of - (minus) char improved (MC 238153)
125 09/02/2026 - BugFix: Verifon value-card online vouchers not to allow zero transaction (MC 236223)
126 09/02/2026 - BugFix: DDSet 381 Fix Approval Method While using SMS (MC 238166)
127 09/02/2026 - Amount field in Comax export will be limited to 999,999.99 (Instead of 214,748.00 until now) (MC 234656)
128 10/02/2026 - Added option: Print bill copy from customer transactions form (MC 238256)
129 10/02/2026 - Added option: Select multiple items to re-sell to customer from customer transactions form (MC 238386)
130 17/02/2026 - DDSet 381 Fix Now PlaceHolder Replace with Values of Caption (MC 238166)
131 17/02/2026 - Improved logging of identities balance reset at Close-workday procedure (MC 237553)
