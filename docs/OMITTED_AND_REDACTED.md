# Omitted And Redacted

The upload package intentionally excludes or sanitizes the following:

Omitted:
- Executables, installers, DLLs, and archive files
- Database backups such as `ProfitAgeDB.bak`
- Large setup archives such as `Upgrade_5-0-0.zip` and `Upgrade_5-1-0.zip`
- Operational logs and temp files
- `WinSCP.ini`
- `PALicense.txt`
- `Setup/Data.xml` because it is large and may contain operational data

Redacted in `config-sanitized/`:
- User names
- Passwords
- FTP details
- Connection strings
- Email addresses
- Store or environment identifiers where they looked sensitive

Notes:
- `Sodexo.ini` originally contained real-looking credentials and FTP details, so those values were replaced
- `SBOInterface.Ini` originally contained credentials and connection details, so those values were replaced
- `POSData.Xml` had a store identifier that was replaced
