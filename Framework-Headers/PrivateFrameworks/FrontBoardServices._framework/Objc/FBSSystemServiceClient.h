//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSBaseXPCClient.h>

#import <FrontBoardServices/FBSSystemServiceClient-Protocol.h>

@class NSObject, NSString;
@protocol FBSSystemServiceClientDelegate, OS_dispatch_queue;

@interface FBSSystemServiceClient : BSBaseXPCClient <FBSSystemServiceClient>
{
    id<FBSSystemServiceClientDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _connectionDenied;
    BOOL _invalidated;
}

@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<FBSSystemServiceClientDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithCalloutQueue:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)queue_clientWasInvalidated;
- (void)queue_connectionWasCreated;
- (void)queue_handleError:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(CDUnknownBlockType)arg3 waitForReply:(BOOL)arg4 timeout:(double)arg5;

@end

