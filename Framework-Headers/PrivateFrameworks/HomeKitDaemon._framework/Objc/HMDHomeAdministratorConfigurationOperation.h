//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHome, HMFMessage, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAdministratorConfigurationOperation : HMFOperation <HMFLogging>
{
    BOOL _shouldSuspendSyncing;
    HMFMessage *_message;
    HMDHome *_home;
    CDUnknownBlockType _sendCompletionBlock;
    CDUnknownBlockType _responseHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak) HMDHome *home; // @synthesize home=_home;
@property (readonly) HMFMessage *message; // @synthesize message=_message;
@property (copy) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (copy) CDUnknownBlockType sendCompletionBlock; // @synthesize sendCompletionBlock=_sendCompletionBlock;
@property BOOL shouldSuspendSyncing; // @synthesize shouldSuspendSyncing=_shouldSuspendSyncing;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (double)timeout;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 home:(id)arg2;
- (id)logIdentifier;
- (void)main;
- (id)messageDispatcher;

@end
