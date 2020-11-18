//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>

@class HMFMessageDispatcher, HMXpcClient, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMClientConnection : NSObject <HMFMessageReceiver>
{
    NSObject<OS_dispatch_queue> *_clientQueue;
    HMXpcClient *_xpcClient;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uuid;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) HMXpcClient *xpcClient; // @synthesize xpcClient=_xpcClient;

+ (BOOL)areAnyAccessoriesConfigured;
+ (BOOL)areAnySpeakersConfigured;
+ (BOOL)areHomesConfigured;
+ (id)siriHomeIdentifier;
- (void).cxx_destruct;
- (void)_registerToDaemon;
- (void)_reportResultsTohandler:(CDUnknownBlockType)arg1;
- (void)_start;
- (void)dealloc;
- (id)init;
- (id)initWithNoValidation;
- (void)requestSiriSyncDataWithValidity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendSiriCommand:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

