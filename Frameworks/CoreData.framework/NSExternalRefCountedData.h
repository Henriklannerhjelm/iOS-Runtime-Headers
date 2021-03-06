/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSExternalRefCountedData : NSObject  {
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st { 
        unsigned int _shouldNotRefresh : 1; 
        unsigned int _shouldNotPersist : 1; 
        unsigned int _reservedFlags : 11; 
        unsigned int _invalidToOnes : 1; 
        unsigned int _hasTemporaryID : 1; 
        unsigned int _backgroundDealloc : 1; 
        unsigned int _reservedFlags2 : 16; 
    } _externalRefFlags;
    double _birth;
    id _toManyMap;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (unsigned int)options;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)release;
- (id)retain;
- (void)dealloc;
- (unsigned int)retainCount;
- (void)setRelationshipCaches:(id)arg1;
- (int)externalReferenceCount;
- (void)incrementRefCount;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;
- (BOOL)shouldRefresh;
- (BOOL)shouldPersist;
- (int)decrementRefCount;
- (void)incrementExternalReferenceCount:(int)arg1;
- (id)relationshipCaches;
- (unsigned int)optionsForKey:(id)arg1;
- (id)relatedIDsForKey:(id)arg1;
- (double)timestampForKey:(id)arg1;
- (void)setRelatedIDs:(id)arg1 forKey:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;

@end
