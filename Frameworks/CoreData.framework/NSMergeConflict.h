/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObject, NSDictionary;

@interface NSMergeConflict : NSObject  {
    id _source;
    id _snapshot1;
    id _snapshot2;
    id _snapshot3;
    unsigned int _newVersion;
    unsigned int _oldVersion;
}

@property(readonly) unsigned int oldVersionNumber;
@property(readonly) unsigned int newVersionNumber;
@property(retain,readonly) NSDictionary * persistedSnapshot;
@property(retain,readonly) NSDictionary * cachedSnapshot;
@property(retain,readonly) NSDictionary * objectSnapshot;
@property(retain,readonly) NSManagedObject * sourceObject;


- (id)valueForKey:(id)arg1;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (id)description;
- (id)sourceObject;
- (id)objectSnapshot;
- (unsigned int)newVersionNumber;
- (id)initWithSource:(id)arg1 newVersion:(unsigned int)arg2 oldVersion:(unsigned int)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (unsigned int)oldVersionNumber;
- (id)persistedSnapshot;
- (id)cachedSnapshot;

@end
