/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, MailMessageLibrary;

@interface MFSqliteMessageIDStore : NSObject  {
    NSString *_url;
    int _mailboxRowid;
    MailMessageLibrary *_library;
}


- (id)initWithLibrary:(id)arg1 URLString:(id)arg2;
- (void)_loadMailboxRowidIfNecessary:(struct sqlite3 { }*)arg1;
- (id)knownMessageIDsFromSet:(id)arg1;
- (id)messageIDsAddedBeforeDate:(double)arg1;
- (void)deleteUIDsNotInArray:(id)arg1;
- (unsigned int)numberOfMessageIDs;
- (void)deleteAllUIDs;
- (unsigned long long)flagsForUID:(id)arg1;
- (void)dealloc;

@end
