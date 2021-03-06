/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@class NSMutableDictionary;

@interface GKVoiceChatDictionary : NSObject  {
    NSMutableDictionary *actualDictionary;
    unsigned int type;
    int orignalCallID;
}

@property int callID;
@property(readonly) int originalCallID;
@property int nonce;

+ (id)dictionaryFromData:(id)arg1;
+ (id)inviteDictionaryToParticipantID:(id)arg1 fromParticipantID:(id)arg2 connectionData:(id)arg3 callID:(int)arg4 focus:(BOOL)arg5;
+ (BOOL)validateDictionary:(id)arg1;
+ (BOOL)validateInvite:(id)arg1;
+ (BOOL)validateReply:(id)arg1;
+ (BOOL)validateCancel:(id)arg1;
+ (BOOL)validateFocus:(id)arg1;

- (id)cancelDictionary;
- (id)createBlob;
- (BOOL)isReplyDictionary;
- (id)focusDictionary:(BOOL)arg1;
- (int)originalCallID;
- (void)setCallID:(int)arg1;
- (id)replyDictionary:(unsigned int)arg1 connectionData:(id)arg2 callID:(int)arg3 focus:(BOOL)arg4;
- (BOOL)isInviteDictionary;
- (BOOL)isCancelDictionary;
- (BOOL)isFocusDictionary;
- (BOOL)matchesResponse:(id)arg1;
- (void)setFromParticipantID:(id)arg1;
- (void)setNonce:(int)arg1;
- (BOOL)matchesNonce:(int)arg1;
- (void)setFocus:(BOOL)arg1;
- (id)setLocalVCPartyID:(id)arg1;
- (id)setRemoteVCPartyID:(id)arg1;
- (id)connectionData;
- (id)fromParticipantID;
- (id)participantID;
- (BOOL)isFocus;
- (int)callID;
- (id)localVCPartyID;
- (id)remoteVCPartyID;
- (int)nonce;
- (id)version;
- (unsigned int)response;
- (unsigned int)type;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end
