/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKEventStore, NSString;

@interface EKSource : NSObject  {
    EKEventStore *_store;
    NSString *_sourceId;
    void *_object;
    int _type;
    NSString *_title;
    NSString *_externalId;
    unsigned int _loadFlags;
}

@property(readonly) int type;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * externalId;
@property(copy,readonly) NSString * sourceIdentifier;


- (int)type;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (void)dealloc;
- (id)description;
- (void)refresh;
- (void)_setStoreInternal:(id)arg1;
- (id)externalId;
- (void)_storeClosed;
- (void)reconnectToServer;
- (id)sourceIdentifier;
- (id)initWithStore:(id)arg1 object:(void*)arg2 sourceIdentifier:(id)arg3;

@end
