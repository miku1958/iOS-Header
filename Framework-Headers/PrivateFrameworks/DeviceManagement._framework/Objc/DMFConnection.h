//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DeviceManagement/CATTaskClientDelegate-Protocol.h>

@class CATOperationQueue, CATTaskClient, NSString;

@interface DMFConnection : NSObject <CATTaskClientDelegate>
{
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    BOOL mConnected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConnection;
- (void).cxx_destruct;
- (void)client:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidInvalidate:(id)arg1;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (id)initWithTransport:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (void)invalidate;
- (void)operationDidFinish:(id)arg1 runLoop:(id)arg2;
- (void)operationDidProgress:(id)arg1 progressBlock:(id)arg2;
- (id)prepareOperationForRequest:(id)arg1;
- (id)progressForAllInflightRequests;
- (void)runRequest:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)runRequestSync:(id)arg1 error:(id *)arg2;

@end
