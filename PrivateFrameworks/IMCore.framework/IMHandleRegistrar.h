/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface IMHandleRegistrar : NSObject  {
    NSMutableDictionary *_siblingsMap;
    NSMutableArray *_allIMHandles;
    NSMutableDictionary *_candidateNamesMap;
    NSMutableDictionary *_usedUniqueNames;
    NSMutableSet *_knownConflictingNames;
    int _nameStyle;
}

@property int nameStyle;

+ (id)sharedInstance;

- (oneway void)release;
- (id)init;
- (void)dealloc;
- (unsigned int)retainCount;
- (id)autorelease;
- (int)nameStyle;
- (void)_addressBookChanged;
- (void)setNameStyle:(int)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(BOOL)arg2;
- (void)clearNameReservationsForObject:(id)arg1;
- (id)allIMHandles;
- (id)candidateUniqueNamesForIMHandle:(id)arg1;
- (void)reassessIMHandleForUniqueName:(id)arg1 rebuild:(BOOL)arg2;
- (void)reassessIMHandleForUniqueName:(id)arg1;
- (void)_rebuildUniqueNameMapWithStyleChange:(BOOL)arg1;
- (void)rebuildUniqueNameMap;
- (void)imHandleInfoChanged:(id)arg1;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (id)siblingsForIMHandle:(id)arg1;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (void)registerIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;

@end
