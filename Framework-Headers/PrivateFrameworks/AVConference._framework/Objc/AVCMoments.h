//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol AVCMomentsDelegate, OS_dispatch_queue;

@interface AVCMoments : NSObject
{
    AVConferenceXPCClient *_connection;
    long long _streamToken;
    id _delegate;
    unsigned int _capabilities;
    NSString *_deviceID;
    NSMutableDictionary *_requests;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    int _currentActiveRequestsCount;
    int _currentPendingRequestsCount;
}

@property (readonly, nonatomic) int activeRequestCount; // @synthesize activeRequestCount=_currentActiveRequestsCount;
@property (readonly, nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
@property (readonly, nonatomic) id<AVCMomentsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (readonly, nonatomic) int pendingRequestCount; // @synthesize pendingRequestCount=_currentPendingRequestsCount;
@property (readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;

- (BOOL)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)connect;
- (void)dealloc;
- (void)deregisterBlocksForNotifications;
- (id)description;
- (void)didEndProcessingRequestHelperWithResult:(id)arg1;
- (void)didFinishRequestHelperWithResult:(id)arg1;
- (void)didStartProcessingRequestHelperWithResult:(id)arg1;
- (void)disconnect;
- (id)initWithStreamToken:(long long)arg1 deviceID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4;
- (id)newRequestWithMediaType:(unsigned char)arg1;
- (void)registerBlocksForNotifications;

@end

