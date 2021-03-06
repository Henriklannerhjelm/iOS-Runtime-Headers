/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection  {
}

@property(readonly) unsigned long long persistentID;
@property(readonly) NSString * name;
@property(readonly) int playlistAttributes;

+ (void)_createFilterableDictionary;
+ (BOOL)_isValidPlaylistProperty:(id)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;

- (int)mediaTypes;
- (id)valueForProperty:(id)arg1;
- (unsigned int)hash;
- (id)items;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)name;
- (id)initWithCoder:(id)arg1;
- (unsigned int)count;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (id)geniusMixArtworkForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)existsInLibrary;
- (int)playlistAttributes;
- (unsigned long long)persistentID;
- (id)representativeItem;

@end
