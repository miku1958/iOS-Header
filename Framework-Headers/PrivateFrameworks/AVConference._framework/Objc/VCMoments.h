//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCMomentsMessenger-Protocol.h>

@class NSMutableSet, NSString, VCMomentsHistory, VideoAttributes;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMoments : NSObject <VCMomentsMessenger>
{
    id _delegate;
    id _transportDelegate;
    unsigned int _streamToken;
    VCMomentsHistory *_momentsHistory;
    unsigned int _capabilities;
    unsigned char _mode;
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;
    int _currentActiveRequestsCount;
    BOOL _isActive;
    BOOL _enableLocalVideoRecording;
    BOOL _isClientRegistered;
    VideoAttributes *_remoteScreenAttributes;
    NSMutableSet *_requests;
    BOOL _lastRequest;
    unsigned int _currentTimestamp;
}

@property (nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int imageType;
@property (readonly, nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
@property (strong, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property (readonly) Class superclass;
@property (nonatomic) int videoCodec;

+ (unsigned long long)countForRequestType:(int)arg1;
+ (unsigned long long)deviceFreeDiskSpace;
+ (BOOL)deviceHasSufficientFreeSpace;
+ (unsigned long long)fileSize:(id)arg1;
+ (int)typeForRequest:(id)arg1;
- (void)_generateRequest:(unsigned char)arg1 requestState:(unsigned char)arg2 transactionID:(id)arg3 timestamp:(unsigned int)arg4;
- (void)addLocalAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)addLocalVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (void)addRemoteAudioSample:(struct opaqueVCAudioBufferList *)arg1 timestamp:(unsigned int)arg2;
- (void)cleanupActiveRequests;
- (void)clearHistoryBuffer;
- (void)dealloc;
- (void)deregisterClient;
- (unsigned long long)directorySize:(id)arg1;
- (void)getInitialRemoteScreenAttributes:(id)arg1;
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2;
- (BOOL)isHistorySupported;
- (id)momentsDelegate;
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 fileSize:(long long)arg3;
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2;
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 fileSize:(long long)arg3;
- (BOOL)processClientRequest:(id)arg1 error:(id *)arg2;
- (void)processRemoteLivePhotoRequest:(id)arg1;
- (void)processRemotePhotoRequest:(id)arg1;
- (void)processRemoteRequest:(id)arg1 withMediaType:(unsigned char)arg2;
- (void)processRequest:(id)arg1 isRemote:(BOOL)arg2;
- (void)registerClient;
- (void)setFrameRate:(float)arg1;
- (void)setMomentsDelegate:(id)arg1;
- (void)setTransportDelegate:(id)arg1;
- (id)transportDelegate;
- (void)updateActiveStatus;
- (void)updateRemoteScreenAttributes:(id)arg1;
- (void)updateVCMomentsMode;
- (BOOL)validateIncomingRequest:(id)arg1 isRemote:(BOOL)arg2;
- (BOOL)validateNumberOfRequestsWithError:(id *)arg1;

@end
