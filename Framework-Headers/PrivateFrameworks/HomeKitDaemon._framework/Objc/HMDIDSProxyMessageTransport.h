//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDIDSMessageTransport.h>

@class HMDCompanionManager, HMDWatchManager;

@interface HMDIDSProxyMessageTransport : HMDIDSMessageTransport
{
    HMDWatchManager *_watchManager;
    HMDCompanionManager *_companionManager;
}

@property (readonly, nonatomic) HMDCompanionManager *companionManager; // @synthesize companionManager=_companionManager;
@property (readonly, nonatomic) HMDWatchManager *watchManager; // @synthesize watchManager=_watchManager;

+ (id)logCategory;
+ (long long)priorityForMessage:(id)arg1;
+ (unsigned long long)restriction;
+ (BOOL)transportSupportsDevice:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canSendMessage:(id)arg1;
- (id)deviceForHandle:(id)arg1;
- (id)deviceForSenderContext:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1;
- (BOOL)isDeviceConnected:(id)arg1;
- (BOOL)isSecure;
- (long long)qualityOfService;
- (id)remoteMessageFromMessage:(id)arg1;
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 error:(id *)arg7;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;
- (int)transportType;
- (id)watchDeviceForDevice:(id)arg1;

@end

