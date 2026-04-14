# ePayment Focus

This folder collects the strongest local evidence related to `ePayment` and adjacent payment infrastructure.

## Main Conclusion

If the goal is to understand where an independent payment flow might plug into the existing system, `ePayment` does look like one of the most important concepts to inspect.

That said, it probably is not a single standalone module by itself. It looks more like an internal payment flow or abstraction layer that sits among:

- paymeans
- credit-card transactions
- EFT/EMV integrations
- tender separation
- transaction export/import
- invoice printing
- value-card flows

## Why `ePayment` Looks Important

The strongest evidence comes from release notes with explicit `ePayment` mentions:

- `2020-05-24`: "Improved support for ePayment in POS"
- `2020-08-24`: "ePayment transaction are now supported in export to Comax"
- `2020-08-30`: "Invoice for bill payed with ePayment does not print credit card info"
- `2020-08-30`: "ePayment bill line is commited but not displayed when failed to add change..."
- `2020-08-30`: "ePayments payment lines now support tender seperation by credit card issuer"
- `2020-09-17`: "Added support for authorization number in ePayment card transaction"
- `2021-08-24`: "Specific paymean selection in ePayments based on card type return paymean ..."
- `2022-09-12`: "Voiding ePayment line or canceling a bill with ePayment is now possible"
- `2022-08-31`: "Pelecard ePayment process improved ..."

Those lines suggest `ePayment` is tied to:

- POS payment execution
- accounting/export behavior
- invoice printing
- card metadata
- issuer-based tender separation
- paymean selection logic
- void/cancel behavior

## Likely Technical Neighbors

The surrounding runtime and release-note evidence suggests `ePayment` probably touches these areas:

- `tblPaymeans`
- `tblPayments`
- `tblPaymentsDetails`
- `tblTransPayments`
- `tblOrdersPayments`
- `tblDataPaymentsTransmissions`
- `tblDataCreditCards`
- `tblDataCreditCardsTransmissions`
- `tblCreditCardTypes`
- `tblCustomersPaymeans`

And likely interacts with one or more of these runtime modules:

- `ProfitAgeClearingLink.dll`
- `ProfitAgeCHePay.dll`
- `ProfitAgeSVAEMVLink.dll`
- `ProfitAgeSVAEMVLinkVerifone.dll`
- `ProfitAgeSVALink.dll`
- `POSTShvaEngine.dll`
- `libWisepayPinPadDriver.dll`

## Provider / Terminal Signals Around ePayment

The release notes and runtime names suggest a broad payments ecosystem around the same area of the product:

- SVA EMV
- Verifone
- WisePay
- Pelecard
- CreditGuard
- Sodexo / Cibus
- Rapyd
- UPay
- external value cards
- internal value cards

This matters because `ePayment` may not mean "one gateway." It may mean a system-level payment workflow that can route to different providers or devices depending on paymean/card type/configuration.

## What Was Added Here

- `epayment_release_notes_extract.txt`
  Focused timeline of payment/ePayment-related release-note entries.

- `epayment_relevant_tables.txt`
  Focused list of database tables likely closest to paymeans, payments, cards, cheques, and value cards.

- `epayment_relevant_fields.csv`
  Focused table/field/type inventory for payment-adjacent schema areas.

- `payment_binary_evidence.csv`
  Names of payment-adjacent runtime binaries found locally.

- `payment_related_archives_and_installers.csv`
  Names of payment-adjacent installers/archives found locally but not uploaded as binaries.

- `ui-assets/`
  Lightweight icons and payment UI assets found in the runtime folder.

## What Was Still Not Uploaded

Even in this payment-focused pass, some artifacts were still kept out:

- compiled proprietary DLLs and EXEs
- update archives such as `SVAEMV_16_27.rar`
- full installed upgrade ZIPs
- raw payment logs
- raw database backups
- any credential-bearing or environment-specific file in unsanitized form

Why:

- source-code value is low compared with size/risk
- binaries are closed-source and not directly editable
- logs/backups may expose real operational data
- archives are large and usually redundant for AI architecture analysis

## Best Reading Order For A Model

1. `EPAYMENT_FOCUS.md`
2. `epayment_release_notes_extract.txt`
3. `epayment_relevant_tables.txt`
4. `epayment_relevant_fields.csv`
5. `payment_binary_evidence.csv`
6. `db-metadata/payment_related_modules.txt`
7. `docs/SYSTEM_OVERVIEW_AND_OMISSIONS.md`

## Practical Interpretation

If you want to develop an independent payment capability around this product, the most plausible starting hypothesis is:

- `ePayment` is a core payment-processing concept inside the application
- `paymeans` are a central configuration/domain model
- provider/device-specific behavior is probably delegated into separate integration modules
- database tables and config determine routing, metadata, and downstream accounting/export behavior

That is a strong architecture clue, even without the original source code.
