/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSClassicHashTable : NSHashTable  {
    struct { 
        int (*hash)(); 
        int (*isEqual)(); 
        int (*retain)(); 
        int (*release)(); 
        int (*describe)(); 
    } _callBacks;
    struct __CFBasicHash { } *_ht;
}


- (id)allObjects;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (id)copy;
- (void)dealloc;
- (id)description;
- (unsigned int)count;
- (void)addObject:(id)arg1;
- (void)removeAllItems;
- (void*)getItem:(const void*)arg1;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (void)removeItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned int*)arg2;

@end
