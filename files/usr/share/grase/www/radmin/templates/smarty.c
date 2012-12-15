gettext("Username");
gettext("Choose a username");
gettext("Password");
gettext("Choose a secure password for the user");
gettext("Group");
gettext("Choose the users group (Expiry is based on the user group)");
gettext("Comment");
gettext("A comment about the user");
gettext("When ether limit is reached, the user will be cut off. (i.e. after 1hour even if they still have data left)");
gettext("A limit of 0 does not mean unlimited, it will immediately lock the user out. To have an unlimited user, the user must be created without any limits.");
gettext("If a limit is not set here, but is defined for the group, then the group limit will apply");
gettext("Data Limit (MiB)");
gettext("OR");
gettext("Type your own Mb Limit");
gettext("Choose a Data Limit OR Type your own value");
gettext("Time Limit (Minutes)");
gettext("OR");
gettext("Type your own Time Limit");
gettext("Choose a Time Limit OR Type your own value");
gettext("User Management Interface");
gettext("Device Information");
gettext("Model Name");
gettext("Host Name");
gettext("HTTP Server");
gettext("System Up-Time");
gettext("Current Server Time");
gettext("Hardware Version");
gettext("Software Version");
gettext("Home URL");
gettext("LAN");
gettext("IP Address");
gettext("Subnet Mask");
gettext("MAC Address");
gettext("Network Interface");
gettext("WAN");
gettext("IP Address");
gettext("Subnet Mask");
gettext("Gateway");
gettext("DNS 1");
gettext("DNS 2");
gettext("MAC Address");
gettext("Network Interface");
gettext("Login");
gettext("Login is required to access the Administration section of this website.");
gettext("Username");
gettext("Username for Admin interface (Different to internet access username)");
gettext("Password");
gettext("Login");
gettext("Site Settings");
gettext("Location Name");
gettext("Enter a name that identifies this Hotspot Location");
gettext("Support Contact Name");
gettext("Enter the name of the Support Contact");
gettext("Support Link");
gettext("This is the link for the support contact. http:// or mailto: are allowed. If using http:// ensure this is accessabile for users who aren't logged into the hotspot");
gettext("Locale");
gettext("Available languages:");
gettext("Select the appropriate Locale for your location");
gettext("A locale has 2 parts, the language and location.<br/><strong>en_AU</strong> for example has the Language set to English, and the location to Australia.<br/><strong>en_ZA</strong> has the language set to English, and the location to South Africa, while <strong>af_ZA</strong> has the language set to Afrikaans and the location to South Africa.");
gettext("The locale defines the number formats, currency and language. If the language selected is not available, it will fallback to English.");
gettext("Current locale is %1, which sets the language to %2, and location to %3.");
gettext("Currency symbol is %1");
gettext("Data Options");
gettext("Space separated list of Data Options in MB's to populate dropdown boxes");
gettext("Time Options");
gettext("Space separated list of Time options in minutes to populate dropdown boxes.");
gettext("Bandwidth Options");
gettext("Space separated list of Bandwidth options in kbit/s to populate dropdown boxes.");
gettext("Website Name");
gettext("Label for Website Footer link");
gettext("Website Link");
gettext("Link for Website Footer Link");
gettext("Save Settings");
gettext("Please select your preferred payment method");
gettext("Access Denied");
gettext("You have attempted to access a page outside of your access level. Please return to an area you have access to.");
gettext("Group Config");
gettext("Group expiry needs to be in a format understood by the <a target=\"_blank\" href=\"http://www.php.net/manual/en/function.strtotime.php\">strtotime</a> PHP function.");
gettext("For example, \"+1 month\" will set an expiry for 1 month from when the account is created. \"+2 weeks\", \"+3 days\" etc.");
gettext("Expiry is calculated to the second, so if you want it to a date for example, try \"+1 week midnight\".");
gettext("Login Time must be in the format of UUCP time ranges. See <a target=\"_blank\" href=\"http://ftp.gnu.org/pub/old-gnu/Manuals/radius/html_node/radius_186.html\">http://ftp.gnu.org/pub/old-gnu/Manuals/radius/html_node/radius_186.html</a> for more details. Only basic format checking is done, so please ensure that the correct format is used. Leaving Login Times blank will allow login at any time.");
gettext("Deleting a group won't delete it's users. Next time the user is edited it's group will become the default group unless a new group is selected.");
gettext("The limits here are the default for group members, unless overridden when creating a member. The limits are applied at user creation time, if \"Inherit from group\" is selected. If multiple limits are specified, the first limit to be reached will disconnect the user.");
gettext("Changing Expiry, Data or Time limits, will not change existing users of the group and will only apply to new users. Recurring limits, Bandwidth and simultaneous logins will all apply to existing and new members.");
gettext("Recurring Data and Time limits must not be used with simultaneous login set to yes, otherwise users may be able to use more than the allocated limit. Data limits should only be used with larger time periods, and users may need to logout and log back in if they use past the time period.");
gettext("Groups");
gettext("Name");
gettext("Description");
gettext("Expiry");
gettext("Login Times");
gettext("Default Data Limit (MiB)");
gettext("Default Time Limit (Minutes)");
gettext("Recurring Data Limit (MiB)");
gettext("per");
gettext("Recurring Time Limit (Minutes)");
gettext("per");
gettext("Bandwidth Limit Down");
gettext("Bandwidth Limit Up");
gettext("Allow simultaneous logins?");
gettext("Delete Group");
gettext("Name");
gettext("Description");
gettext("Expiry");
gettext("Login Times");
gettext("Default Data Limit (MiB)");
gettext("Default Time Limit (Minutes)");
gettext("Recurring Data Limit (MiB)");
gettext("per");
gettext("Recurring Time Limit (Minutes)");
gettext("per");
gettext("Bandwidth Limit Down");
gettext("Bandwidth Limit Up");
gettext("Allow simultaneous logins?");
gettext("Save Settings");
gettext("Edit Computer Account");
gettext("Edit User");
gettext("Username");
gettext("Password");
gettext("Choose a secure password for the user. Leave blank to not change");
gettext("Choose the users group (Expiry is based on the user group)");
gettext("This user account never expires");
gettext("This user account has expired");
gettext("Reset expiry");
gettext("Computer Accounts never expire");
gettext("Comment");
gettext("A comment about the user");
gettext("Account Lock Reason");
gettext("Enter a reason in here to lock the users account. Clear the reason to unlock the account");
gettext("When ether limit is reached, the user will be cut off. (i.e. after 1hour even if they still have data left)");
gettext("A limit of 0 does not mean unlimited, it will immediately lock the user out. To have an unlimited user, the user must be created without any limits.");
gettext("Data Limit (MiB)");
gettext("Type your own Mb Limit");
gettext("Change the Data Limit");
gettext("Add Data to Limit (MiB)");
gettext("Add to the Data Limit (Will ignore changes made above)");
gettext("Time Limit (Minutes)");
gettext("Type your own Time Limit");
gettext("Change the Time Limit");
gettext("Add Time to Limit (Minutes)");
gettext("Add to the Time Limit (Will ignore changes made above)");
gettext("Update User Details");
gettext("Update User Details");
gettext("Delete Computer Account");
gettext("Delete User");
gettext("User accounts are automatically deleted 2 months after expiry. Only accounts with zero usage should be manually deleted to prevent errors in the reports or statistics.");
gettext("Delete User");
gettext("Are you sure you want to delete this user?");
gettext("Delete User %1");
gettext("Login");
gettext("Username");
gettext("Password");
gettext("Login");
gettext("Sessions for %1");
gettext("Active Sessions");
gettext("Display all Sessions");
gettext("Start Time");
gettext("Stop Time");
gettext("Time");
gettext("IP/MAC Address");
gettext("Username");
gettext("Data Usage");
gettext("Reason: ");
gettext("Captive Portal Config Login");
gettext("All Sessions");
gettext("Display just active Sessions");
gettext("Start Time");
gettext("Stop Time");
gettext("Time");
gettext("IP Address");
gettext("Username");
gettext("Data Usage");
gettext("Reason: ");
gettext("Captive Portal Config Login");
gettext("First");
gettext("Prev");
gettext("Displaying page %1 of %2");
gettext("Next");
gettext("Last");
gettext("PayPal Settings");
gettext("These settings are used for the PayPal payment gateway to allow your users to purchase internet accounts online with a Credit Card or PayPal account. You will need to set which groups are allowed to be purchased on the Group Config page.");
gettext("Save Settings");
gettext("Please select your voucher type");
gettext("Please select your preferred payment method");
gettext("Proceed to Payment");
gettext("Upload Logo");
gettext("Logo Image");
gettext("Select new logo file.");
gettext("Logo file needs to be in png format, and relatively small (remember, every page has the logo). 10 Kilobytes maximum. It's physical size shouldn't be bigger than about 220px in both directions.");
gettext("Upload Logo");
gettext("For more advanced logos, (different file type, size, placement}, manually upload the file to /var/www/ or /usr/share/grase/www/images/ and use the custom CSS to override this logo. The logo is defined in the #page container as the background.");
gettext("Admin Users");
gettext("Change Password");
gettext("Username");
gettext("Old Password");
gettext("New Password");
gettext("Confirm New Password");
gettext("Change Password");
gettext("Change Password");
gettext("Admin Users");
gettext("Deleting or modifying the support user will prevent remote assistance.");
gettext("Admin User");
gettext("Admin User");
gettext("Power User");
gettext("Power User");
gettext("Normal User");
gettext("Normal User");
gettext("Are you sure you want to delete %1?");
gettext("Delete %1");
gettext("Create new Admin User");
gettext("Username");
gettext("Password");
gettext("Create new Admin User");
gettext("Delete Admin User");
gettext("Deleting or modifying the support user will prevent remote assistance.");
gettext("Are you sure you want to delete %1?");
gettext("Delete %1");
gettext("Cannot delete current user");
gettext("Logged in as <b>%1</b>");
gettext("Session logs for %1 on %2");
gettext("Computers hardware (MAC) address is");
gettext("Between %1 and %2");
gettext("Total HTTP (WWW) Traffic Size:");
gettext("Domain");
gettext("Count");
gettext("Size");
gettext("Timestamp");
gettext("Address");
gettext("Host");
gettext("Cached");
gettext("Request Type");
gettext("Size");
gettext("Network Settings");
gettext("These settings are used by Coova Chilli and Dnsmasq. Both Coova Chilli and Dnsmasq will need to be reloaded when these settings change. A cron job will automatically check for changes every 5 minutes and reload these daemons if needed.");
gettext("Network Config last reloaded %1");
gettext("Network Config last updated %1");
gettext("For each of the following items, if you need multiple values you can submit the form and it will append a blank input below the last valid value");
gettext("Save Settings");
gettext("Help Page");
gettext("My Account");
gettext("Admin");
gettext("Coova Chilli Settings");
gettext("These settings are used by Coova Chilli. Coova Chilli only reloads it's config roughly once an hour, or when it's restarted.");
gettext("If you change the MAC Auth Password, no computer accounts will be able to login until Coova Chilli reloads it's config, or is manually restarted.");
gettext("Chilli Config last updated %1");
gettext("Portal Config last updated %1");
gettext("For each of the following items, if you need multiple values you can submit the form and it will append a blank input below the last valid value");
gettext("Save Settings");
gettext("Data Limit");
gettext("Time Limit");
gettext("%1 Time Limit");
gettext("%1 Data Limit");
gettext("Username");
gettext("Group");
gettext("Data Limit");
gettext("Total Data usage for the current month");
gettext("Data Usage (M)");
gettext("Total Data usage, from previous months, excluding current month");
gettext("Data Usage (T)");
gettext("Time Remaining");
gettext("Time Usage (Total)");
gettext("Account Expiry");
gettext("Last Logoff timestamp from current month only");
gettext("Last Logoff");
gettext("Comment");
gettext("Password Hidden");
gettext("(Account Locked)");
gettext("Admin Log");
gettext("Timestamp");
gettext("Username");
gettext("IP");
gettext("Action");
gettext("Group Properties");
gettext("Name");
gettext("Expiry");
gettext("Max Data (Mb)");
gettext("Max Time (mins)");
gettext("Recur data limit");
gettext("Recur time limit");
gettext("BW Limit Down");
gettext("BW Limit Up");
gettext("Error");
gettext("An Error has occured. Please report the error to the administrator");
gettext("There may be more information available to the administrator in the logs");
gettext("Voucher Config");
gettext("Vouchers are disabled if nether Initial Voucher, or Topup Voucher are selected.");
gettext("Vouchers without a Time or Data limit do not inherit the default limits from the group, but any Recurring limits will apply.");
gettext("Voucher Name");
gettext("Price");
gettext("Group");
gettext("Data Limit");
gettext("Time Limit");
gettext("Initial Voucher");
gettext("Topup Voucher");
gettext("Description");
gettext("Name");
gettext("Price");
gettext("Name");
gettext("Price");
gettext("Save Settings");
gettext("Create Computer Account");
gettext("MAC Address");
gettext("The MAC address is the network hardware address of the computer. It needs to be of the format XX-XX-XX-XX-XX-XX where XX is a hex number, typed in all capitals");
gettext("Comment");
gettext("Identify the computer. i.e. \"Bob's computer\"");
gettext("When ether limit is reached, the user will be cut off. (i.e. after 1hour even if they still have data left)");
gettext("Computer accounts are intended to be used for computers that need internet access at all times. For example, an office computer. Computer accounts login automatically as soon as they access the network, this will normally occur at startup. If a limit is set, when the limit is reached the computer will revert to the normal login screen for internet access. Computer accounts can not be edited to add more data or time, only deleted.");
gettext("It is not recommended setting a time or data limit for computer accounts.");
gettext("Data Limit (MiB)");
gettext("OR");
gettext("Type your own Mb Limit");
gettext("Time Limit (Minutes)");
gettext("OR");
gettext("Type your own Time Limit");
gettext("Choose a Time Limit OR Type your own value");
gettext("Create New Computer Account");
gettext("Create New Computer Account");
gettext("Portal Customisation");
gettext("For each of the following items, if you need multiple values you can submit the form and it will append a blank input below the last valid value");
gettext("Save Settings");
gettext("Sold");
gettext("%1 of %2");
gettext("This Month Used");
gettext("%1 of %2");
gettext("Last Month Used");
gettext("%1 of %2");
gettext("Batch ID");
gettext("Date Created");
gettext("Created By");
gettext("Number of Tickets");
gettext("Comment");
gettext("When ether limit is reached, the user will be cut off. (i.e. after 1hour even if they still have data left)");
gettext("A limit of 0 does not mean unlimited, it will immediately lock the user out. To have an unlimited user, the user must be created without any limits.");
gettext("If a limit is not set here, but is defined for the group, then the group limit will apply");
