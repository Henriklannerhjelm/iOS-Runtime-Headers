/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <EAAccessoryDelegate>, NSArray, NSString, EAAccessoryInternal;

@interface EAAccessory : NSObject  {
    EAAccessoryInternal *_internal;
}

@property(getter=isConnected,readonly) BOOL connected;
@property(readonly) unsigned int connectionID;
@property(readonly) NSString * manufacturer;
@property(readonly) NSString * name;
@property(readonly) NSString * modelNumber;
@property(readonly) NSString * serialNumber;
@property(readonly) NSString * firmwareRevision;
@property(readonly) NSString * hardwareRevision;
@property(readonly) NSArray * protocolStrings;
@property <EAAccessoryDelegate> * delegate;


- (id)manufacturer;
- (void)setCfAccessory:(struct __CFAccessory { }*)arg1;
- (id)protocolStrings;
- (void)_setConnected:(BOOL)arg1;
- (id)internalDescription;
- (BOOL)supportsPublicIap;
- (id)valueForLegacyLingoProperty:(id)arg1;
- (BOOL)supportsLocation;
- (BOOL)accessoryHasNMEASentencesAvailable;
- (BOOL)getNMEASentence:(id*)arg1;
- (BOOL)setNMEASentencesToFilter:(id)arg1;
- (BOOL)getEphemerisURL:(id*)arg1;
- (BOOL)getEphemerisRecommendRefreshInterval:(double*)arg1;
- (BOOL)getEphemerisExpirationInterval:(double*)arg1;
- (BOOL)sendGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2;
- (BOOL)sendEphemerisPointDataGpsWeek:(unsigned int)arg1 gpsTOW:(double)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(unsigned short)arg5;
- (BOOL)sendEphemeris:(id)arg1;
- (BOOL)supportsAccessibility;
- (void)updateSystemProperty:(int)arg1 withValue:(id)arg2;
- (BOOL)supportsIPodOut;
- (id)firmwareRevision;
- (id)preferredApp;
- (unsigned int)eqIndex;
- (struct __CFAccessory { }*)cfAccessory;
- (int (*)())cfAccessoryPortPropertyCallback;
- (void*)cfAccessoryPortPropertyContext;
- (void)setCfAccessoryPortPropertyContext:(void*)arg1;
- (void)setCfAccessoryPortPropertyCallback:(int (*)())arg1;
- (int)iPodOutOptionsMask;
- (id)eqNames;
- (id)audioPorts;
- (int)classType;
- (id)hardwareRevision;
- (id)modelNumber;
- (id)_protocolIDForProtocolString:(id)arg1;
- (id)_shortDescription;
- (unsigned int)connectionID;
- (void)setEqNames:(id)arg1;
- (void)setEqIndex:(unsigned int)arg1;
- (void)setIPodOutOptionsMask:(int)arg1;
- (id)_initWithAccessory:(id)arg1;
- (void)_updateAccessoryInfo:(id)arg1;
- (id)name;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)isConnected;
- (id)serialNumber;

@end
