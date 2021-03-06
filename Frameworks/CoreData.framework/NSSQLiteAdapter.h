/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter  {
    NSString *_dbpath;
}


- (id)type;
- (void)dealloc;
- (id)pathnameForDatabase;
- (id)typeStringForColumn:(id)arg1;
- (id)sqliteVersion;
- (id)initWithSQLCore:(id)arg1;
- (id)createConnection;
- (Class)statementClass;
- (BOOL)supportsCorrelatedSubqueries;

@end
