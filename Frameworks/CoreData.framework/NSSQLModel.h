/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSString, NSKnownKeysDictionary, NSMutableArray, NSManagedObjectModel;

@interface NSSQLModel : NSStoreMapping  {
    NSString *_configuration;
    NSManagedObjectModel *_mom;
    NSKnownKeysDictionary *_entitiesByName;
    NSMutableArray *_entities;
    unsigned int _brokenHashVersion;
    NSMutableDictionary *_cachedFabricatedEntities;
    BOOL _retainLeopardStyleDictionaries;
    BOOL _modelHasPrecomputedKeyOrder;
}


- (void)dealloc;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3 brokenHashVersion:(unsigned int)arg4;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2;
- (id)configurationName;
- (void)_generateModel:(id)arg1;
- (id)_entityMapping;
- (unsigned long)entityIDForName:(id)arg1;
- (id)entityForID:(unsigned long)arg1;
- (BOOL)_retainHashHack;
- (BOOL)_modelHasPrecomputedKeyOrder;
- (BOOL)_useLeopardStyleHashing;
- (BOOL)_useSnowLeopardStyleHashing;
- (id)_precomputedKeyOrderForEntity:(id)arg1;
- (void)_addIndexedEntity:(id)arg1;
- (id)entityNamed:(id)arg1;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned int)arg3;
- (id)entitiesByName;
- (id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(BOOL)arg3;
- (id)managedObjectModel;
- (id)entities;

@end
