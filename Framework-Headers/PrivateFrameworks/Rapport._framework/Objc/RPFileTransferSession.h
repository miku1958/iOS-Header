//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>
#import <Rapport/RPMessageable-Protocol.h>

@class CUBonjourAdvertiser, CUBonjourBrowser, CUBonjourDevice, CUCoalescer, CUTCPServer, CUWiFiManager, NSData, NSMutableArray, NSString, NSURL, RPConnection, RPFileTransferProgress, RPIdentity;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RPFileTransferSession : NSObject <NSSecureCoding, RPMessageable>
{
    BOOL _activateCalled;
    CUBonjourAdvertiser *_bonjourAdvertiser;
    CUBonjourBrowser *_bonjourBrowser;
    CUCoalescer *_bonjourCoalescer;
    CUBonjourDevice *_bonjourDevice;
    unsigned int _cnxIDLast;
    struct NSMutableSet *_connections;
    RPConnection *_controlCnx;
    NSObject<OS_dispatch_source> *_controlRetryTimer;
    int _controlState;
    int _debugNotifyToken;
    BOOL _finishPending;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _lockedInterface;
    RPIdentity *_peerIdentity;
    BOOL _peerInfraWiFiDisabled;
    struct NSMutableDictionary *_registeredEvents;
    struct NSMutableDictionary *_registeredRequests;
    RPIdentity *_selfIdentity;
    CUTCPServer *_tcpServer;
    struct LogCategory *_ucat;
    CUWiFiManager *_wifiManager;
    struct NSMutableSet *_addedItems;
    BOOL _compressionEnabled;
    unsigned long long _fileIDLastReceive;
    unsigned long long _fileIDLastSend;
    NSMutableArray *_ioQueues;
    NSString *_receiveFileParentPath;
    unsigned long long _taskIDLast;
    struct NSMutableDictionary *_smallFilesReceiveTasks;
    struct NSMutableSet *_smallFilesSendTasks;
    struct NSMutableDictionary *_largeFileReceiveTasks;
    struct NSMutableSet *_largeFileSendTasks;
    unsigned int _fileWritesOutstanding;
    BOOL _prefCompress;
    unsigned int _prefLargeFileBufferBytes;
    int _prefLargeFileMaxOutstanding;
    unsigned int _prefLargeFileMaxTasks;
    unsigned int _prefSmallFilesMaxBytes;
    unsigned int _prefSmallFilesMaxTasks;
    unsigned long long _metricCompressedBytes;
    unsigned long long _metricUncompressedBytes;
    unsigned long long _metricCompressionErrors;
    unsigned long long _metricUncompressibleChunks;
    unsigned int _metricDisconnects;
    unsigned long long _metricRetries;
    unsigned long long _metricLastFileCompletionTicks;
    unsigned long long _metricFileSizeBuckets[8];
    unsigned int _metricLinkTypeCountAWDL;
    unsigned int _metricLinkTypeCountOther;
    unsigned int _metricLinkTypeCountUSB;
    unsigned long long _metricNotEnoughFiles;
    unsigned long long _metricPrematureSmallSets;
    unsigned long long _metricTCPRanDryCount;
    unsigned long long _metricTicksConnected;
    unsigned long long _metricTicksConnectStart;
    unsigned long long _metricTicksActivate;
    unsigned long long _metricTotalBytes;
    unsigned long long _metricTotalFiles;
    unsigned int _metricTotalIOQueues;
    unsigned int _flags;
    int _flowControlState;
    CDUnknownBlockType _completionHandler;
    unsigned long long _debugFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _flowControlChangedHandler;
    NSString *_label;
    NSData *_peerPublicKey;
    RPFileTransferProgress *_progressCurrent;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _receivedItemHandler;
    CDUnknownBlockType _receivedItemsHandler;
    NSData *_selfPublicKey;
    NSString *_targetID;
    NSURL *_temporaryDirectoryURL;
    NSData *_selfSecretKey;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) unsigned long long debugFlags; // @synthesize debugFlags=_debugFlags;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (copy, nonatomic) CDUnknownBlockType flowControlChangedHandler; // @synthesize flowControlChangedHandler=_flowControlChangedHandler;
@property (readonly, nonatomic) int flowControlState; // @synthesize flowControlState=_flowControlState;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSData *peerPublicKey; // @synthesize peerPublicKey=_peerPublicKey;
@property (readonly, nonatomic) RPFileTransferProgress *progressCurrent; // @synthesize progressCurrent=_progressCurrent;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedItemHandler; // @synthesize receivedItemHandler=_receivedItemHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedItemsHandler; // @synthesize receivedItemsHandler=_receivedItemsHandler;
@property (copy, nonatomic) NSData *selfPublicKey; // @synthesize selfPublicKey=_selfPublicKey;
@property (copy, nonatomic) NSData *selfSecretKey; // @synthesize selfSecretKey=_selfSecretKey;
@property (copy, nonatomic) NSString *targetID; // @synthesize targetID=_targetID;
@property (copy, nonatomic) NSURL *temporaryDirectoryURL; // @synthesize temporaryDirectoryURL=_temporaryDirectoryURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_activateAndReturnError:(id *)arg1;
- (BOOL)_activateSourceAndReturnError:(id *)arg1;
- (BOOL)_activateTargetAndReturnError:(id *)arg1;
- (void)_completeItem:(id)arg1 error:(id)arg2;
- (void)_completeItemDirect:(id)arg1 error:(id)arg2;
- (id)_compressData:(id)arg1 error:(id *)arg2;
- (void)_controlCnxRetryIfNeeded;
- (void)_controlCnxStartIfNeeded;
- (void)_debugSetup;
- (void)_debugUpdate;
- (id)_decompressAndDecodeData:(id)arg1 originalSize:(unsigned long long)arg2 error:(id *)arg3;
- (id)_decompressData:(id)arg1 originalSize:(unsigned long long)arg2 error:(id *)arg3;
- (id)_encodeAndCompressObject:(id)arg1 originalSize:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_handleDeviceFound:(id)arg1;
- (void)_handleDeviceLost:(id)arg1;
- (void)_handleDevicesCoalesced;
- (void)_handleIncomingConnectionEnded:(id)arg1;
- (void)_handleIncomingConnectionStarted:(id)arg1;
- (void)_invalidate;
- (void)_invalidated;
- (id)_ioQueueDequeue;
- (void)_ioQueueEnqueue:(id)arg1;
- (void)_largeFileReceiveRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_largeFileReceiveTaskInvalidate:(id)arg1;
- (void)_largeFileReceiveTaskRespond:(id)arg1 error:(id)arg2 complete:(BOOL)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_largeFileReceiveTaskRun:(id)arg1 data:(id)arg2 sendFlags:(unsigned int)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)_largeFileSendTaskCreate;
- (void)_largeFileSendTaskEnd:(id)arg1 error:(id)arg2;
- (void)_largeFileSendTaskFailed:(id)arg1 error:(id)arg2;
- (void)_largeFileSendTaskNext:(id)arg1 xid:(unsigned int)arg2;
- (void)_largeFileSendTaskResponse:(id)arg1 error:(id)arg2 end:(BOOL)arg3 xid:(unsigned int)arg4;
- (void)_largeFileSendTaskSend:(id)arg1 data:(id)arg2 end:(BOOL)arg3 xid:(unsigned int)arg4;
- (void)_largeFileSendTaskStart:(id)arg1;
- (void)_metricAddFileSize:(long long)arg1;
- (int)_openReadPath:(const char *)arg1 error:(id *)arg2;
- (int)_openWriteFileItem:(id)arg1 size:(long long)arg2 error:(id *)arg3;
- (int)_openWritePath:(id)arg1 size:(long long)arg2 error:(id *)arg3;
- (void)_prefsChanged;
- (BOOL)_prepareItem:(id)arg1 error:(id *)arg2;
- (void)_processFinish;
- (void)_processReceivedItem:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_processReceivedItems:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (BOOL)_readFD:(int)arg1 buffer:(char *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (id)_readFD:(int)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (id)_readPath:(const char *)arg1 size:(unsigned long long)arg2 error:(id *)arg3;
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;
- (void)_receivedPeerUpdate:(id)arg1;
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (void)_reportCompletion:(id)arg1;
- (void)_reportProgressControlState;
- (void)_reportProgressType:(int)arg1;
- (void)_scheduleItems;
- (void)_smallFilesReceiveRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_smallFilesReceiveTaskComplete:(id)arg1 error:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (BOOL)_smallFilesReceiveTaskFileItem:(id)arg1 error:(id *)arg2;
- (void)_smallFilesReceiveTaskRun:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)_smallFilesSendTaskCreate;
- (void)_smallFilesSendTaskEnd:(id)arg1 error:(id)arg2;
- (id)_smallFilesSendTaskReadItem:(id)arg1 error:(id *)arg2;
- (void)_smallFilesSendTaskRun:(id)arg1;
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateWiFi;
- (BOOL)_writeFD:(int)arg1 buffer:(const char *)arg2 size:(unsigned long long)arg3 error:(id *)arg4;
- (void)activate;
- (void)addItem:(id)arg1;
- (void)addItems:(id)arg1;
- (void)dealloc;
- (void)deregisterEventID:(id)arg1;
- (void)deregisterRequestID:(id)arg1;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finish;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (BOOL)prepareTemplateAndReturnError:(id *)arg1;
- (void)registerEventID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerRequestID:(id)arg1 options:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;

@end
