/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class PTPWrappedBytes, PTPDeviceInfoDataset, NSMutableArray, PTPEventPacket, PTPTransport, NSString, PTPOperationResponsePacket, NSMutableDictionary;

@interface PTPInitiator : NSObject  {
    PTPTransport *_transport;
    PTPOperationResponsePacket *_response;
    PTPEventPacket *_event;
    unsigned int _transactionID;
    unsigned short _operationCode;
    BOOL _responseReceived;
    BOOL _requestPending;
    unsigned int _lastAddedObject;
    id _delegate;
    BOOL _sessionOpen;
    BOOL _needToReopenSession;
    NSMutableArray *_storages;
    PTPDeviceInfoDataset *_deviceInfo;
    NSMutableArray *_eventQueue;
    unsigned short _deviceVendorID;
    unsigned short _deviceProductID;
    NSString *_UUIDString;
    NSString *_deviceSerialNumberString;
    unsigned int _estimatedNumOfDownloadableObjects;
    unsigned int _numOfDownloadableObjectsPlusFolders;
    unsigned int _contentCatalogPercentCompleted;
    NSString *_userAssignedDeviceName;
    BOOL _appleDeviceHasNewFW;
    BOOL _deviceIsPairedWithThisHost;
    BOOL _deviceIsPasscodeLocked;
    BOOL _deviceIsDummyPTPDevice;
    NSMutableDictionary *_arrayOf64BitFileSizes;
    PTPWrappedBytes *_dataForTransaction;
    unsigned long long _excessReceivedDataSize;
    unsigned long long _totalFDFileSize;
    unsigned long long _totalFDReceivedSize;
    unsigned int _totalFDReportedProgress;
    double _currentFDNoteTime;
    char *_metadataBuffer;
    unsigned int _maxMetadataBufferSize;
}


- (void)handleDeviceRemoval;
- (unsigned short)deviceStatus;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (id)transport;
- (char *)metadataBuffer;
- (unsigned long)maxMetadataBufferSize;
- (unsigned short)deviceVendorID;
- (unsigned short)deviceProductID;
- (id)deviceSerialNumberString;
- (id)UUIDString;
- (BOOL)appleDeviceHasNewFW;
- (BOOL)deviceIsPairedWithThisHost;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsDummyPTPDevice;
- (unsigned long)numOfDownloadableObjectsPlusFolders;
- (void)setContentCatalogPercentCompleted:(unsigned long)arg1;
- (int)transportConnectionStatus;
- (id)userAssignedDeviceName;
- (void)handleStartData:(id)arg1;
- (void)appendDataBuffer:(void*)arg1 length:(unsigned long)arg2;
- (void)handleData:(id)arg1;
- (void)handleReroutedEvent:(id)arg1;
- (void)processUnhandledEvents;
- (BOOL)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2;
- (void)issueCancelEvent:(unsigned long)arg1;
- (void)issueCancelRequest:(unsigned long)arg1;
- (id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long*)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 andTransmitData:(id)arg2;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned long)arg3 excessReceivedDataSize:(unsigned long long*)arg4 timeout:(unsigned long)arg5 notifyProgressForFile:(id)arg6;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long*)arg3 timeout:(unsigned long)arg4;
- (void)sentData:(id)arg1 responseCode:(id)arg2 timeout:(unsigned long)arg3;
- (id)devicePropertyDescDatasetForProperty:(unsigned short)arg1;
- (id)devicePropertyValueForProperty:(unsigned short)arg1;
- (BOOL)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2;
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)arg1;
- (BOOL)closeSession;
- (id)storageIDs;
- (id)storageInfo:(unsigned long)arg1;
- (id)storageForStorageID:(unsigned long)arg1;
- (unsigned long)numObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectInfo:(unsigned long)arg1;
- (id)objectInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectInfosForObjectsInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (unsigned long long)objectInfo64BitSize:(unsigned long)arg1;
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)dataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4 notifyProgress:(BOOL)arg5;
- (id)partialDataFromFile:(id)arg1 fromOffset:(unsigned long)arg2 maxSize:(unsigned long)arg3 actualSize:(unsigned int*)arg4 useBuffer:(char *)arg5 notifyProgress:(BOOL)arg6;
- (id)thumbDataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 useBuffer:(char *)arg4;
- (BOOL)saveFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int*)arg3 fileDescriptor:(int)arg4 notifyProgress:(BOOL)arg5;
- (BOOL)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 maxSize:(unsigned long long)arg3 actualSize:(unsigned long long*)arg4 fileDescriptor:(int)arg5 notifyProgress:(BOOL)arg6;
- (BOOL)initiateCapture;
- (BOOL)deleteFile:(id)arg1;
- (id)deviceDateTime;
- (BOOL)setDeviceDateTime:(id)arg1;
- (void)transportActivated;
- (void)transportDeactivated;
- (void)deviceReset;
- (BOOL)requestPending;
- (BOOL)allowKeepAwake;
- (id)initWithHostLocationID:(unsigned long)arg1;
- (id)deviceInfo;
- (BOOL)openSession;
- (id)refreshAssignedDeviceName;
- (void)readStorages;
- (id)initiator;
- (BOOL)isAccessRestrictedAppleDevice;
- (BOOL)start;
- (void)cancel;
- (void)dealloc;
- (void)handleEvent:(id)arg1;
- (void)setDelegate:(id)arg1;
- (double)timeOffset;
- (unsigned long)contentCatalogPercentCompleted;
- (void)stop;
- (void)handleResponse:(id)arg1;

@end
