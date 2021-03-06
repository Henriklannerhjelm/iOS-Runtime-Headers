/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;

@interface GKGetTopGamesListDataRequest : GKDataRequest  {
    NSDictionary *_topGamesList;
}

@property(retain) NSDictionary * topGamesList;


- (int)cachePriority;
- (id)topGamesList;
- (void)setTopGamesList:(id)arg1;
- (int)cacheType;
- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)cacheKey;
- (id)key;
- (void)dealloc;

@end
