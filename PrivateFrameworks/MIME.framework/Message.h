/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, NSString, NSData, MessageStore;

@interface Message : NSObject  {
    MessageStore *_store;
    unsigned int _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned long long _generationNumber;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    NSData *_messageIDHeaderDigest;
    NSData *_inReplyToHeaderDigest;
    NSString *_summary;
    NSString *_conversationID;
    NSString *_externalID;
    unsigned int _calculatedAttachmentInfo : 1;
    unsigned short _numberOfAttachments;
}

+ (void)setMessageClassForStore:(id)arg1;
+ (void)initialize;

- (int)generationCompare:(id)arg1;
- (id)remoteID;
- (double)dateReceivedAsTimeIntervalSince1970;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (unsigned int)messageSize;
- (id)messageIDHeaderInFortyBytesOrLess;
- (id)cc;
- (unsigned long long)generationNumber;
- (id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (id)sendersIfCached;
- (id)toIfCached;
- (id)ccIfCached;
- (id)bccIfCached;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 conversationID:(id)arg10 summary:(id)arg11;
- (void)setContentType:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setConversationID:(id)arg1;
- (id)conversationID;
- (id)messageIDHeader;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (void)setMessageIDHeaderDigest:(id)arg1;
- (void)setInReplyToHeaderDigest:(id)arg1;
- (id)externalID;
- (id)dateReceived;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)dateSent;
- (void)setMessageStore:(id)arg1;
- (id)messageID;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (id)dataPathForMimePart:(id)arg1;
- (id)preferredEmailAddressToReplyWith;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMimePart:(id)arg1;
- (BOOL)canBeDeleted;
- (BOOL)isLibraryMessage;
- (id)senders;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (id)subject;
- (id)headersIfAvailable;
- (id)bodyData;
- (id)messageStore;
- (id)messageBodyIfAvailable;
- (id)messageData;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (double)dateSentAsTimeIntervalSince1970;
- (id)senderAddressComment;
- (BOOL)isMessageContentsLocallyAvailable;
- (unsigned long)preferredEncoding;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (BOOL)calculatedNumberOfAttachments;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (unsigned short)numberOfAttachments;
- (unsigned long)uid;
- (id)path;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)persistentID;
- (id)contentType;
- (void)setTo:(id)arg1;
- (id)to;
- (id)summary;
- (id)bestAlternativeInPart:(id)arg1;
- (id)defaultAlternativeInPart:(id)arg1;
- (id)additionalHeadersForReply;
- (id)additionalHeadersForForward;
- (id)headerData;
- (void)setSender:(id)arg1;
- (id)headers;
- (void)setSubject:(id)arg1;
- (id)messageBody;
- (id)messageIDHeaderDigest;
- (void)unlockedSetMessageIDHeaderDigest:(id)arg1;
- (id)_messageIDHeaderDigestIvar;
- (id)inReplyToHeaderDigest;
- (void)unlockedSetInReplyToHeaderDigest:(id)arg1;
- (id)_inReplyToHeaderDigestIvar;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (BOOL)needsDateReceived;
- (id)firstSender;
- (void)setBcc:(id)arg1;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (void)setMessageInfoFromMessage:(id)arg1;
- (id)bodyDataIsComplete:(BOOL*)arg1;
- (id)dataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (void)setNumberOfAttachments:(unsigned int)arg1;
- (id)cachedAttributes;
- (id)bcc;
- (void)setCc:(id)arg1;

@end
