/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject  {
    NSManagedObjectID *_objectID;
    unsigned int __versionNumber;
    NSMutableDictionary *_propertyCache;
    void *_reserved1;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)valueForKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithObjectID:(id)arg1;
- (unsigned int)_versionNumber;
- (const id*)knownKeyValuesPointer;
- (id)propertyCache;
- (void)setPropertyCache:(id)arg1;
- (void)_setVersionNumber:(unsigned int)arg1;
- (id)objectID;

@end
