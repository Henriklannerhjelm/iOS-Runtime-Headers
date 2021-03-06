/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, NSArray, GKPlayer;

@interface GKGetGamesPlayedDataRequest : GKDataRequest  {
    GKPlayer *_player;
    GKGame *_lookupGame;
    NSArray *_gamesPlayed;
    NSArray *_games;
}

@property(retain) GKGame * lookupGame;
@property(retain) NSArray * gamesPlayed;
@property(readonly) NSArray * games;
@property(retain) GKPlayer * player;


- (id)lookupGame;
- (id)gamesPlayed;
- (int)cachePriority;
- (int)cacheType;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)games;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)setGamesPlayed:(id)arg1;
- (void)setLookupGame:(id)arg1;
- (id)cacheKey;
- (id)key;
- (id)request;
- (void)dealloc;

@end
