/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSString, NSInputStream, NSOutputStream, EAAccessory;

@interface EASession : NSObject  {
    EAAccessory *_accessory;
    unsigned int _sessionID;
    NSString *_protocolString;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property(readonly) NSOutputStream * outputStream;
@property(readonly) NSInputStream * inputStream;
@property(readonly) NSString * protocolString;
@property(readonly) EAAccessory * accessory;


- (id)accessory;
- (id)outputStream;
- (id)initWithAccessory:(id)arg1 forProtocol:(id)arg2;
- (id)_shortDescription;
- (id)protocolString;
- (unsigned int)_sessionID;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)inputStream;

@end
