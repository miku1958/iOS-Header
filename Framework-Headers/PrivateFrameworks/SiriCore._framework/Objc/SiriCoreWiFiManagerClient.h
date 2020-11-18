//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreWiFiManagerClient : NSObject
{
    long long _rssi;
    long long _snr;
}

- (void)acquireWiFiAssertion:(long long)arg1;
- (void)dealloc;
- (BOOL)hasAssociatedNetworkWithRSSI:(long long *)arg1 andSNR:(long long *)arg2 andPhyMode:(id *)arg3 andChannelInfo:(id *)arg4 isCaptive:(BOOL *)arg5;
- (id)init;
- (BOOL)isWifiEnabled;
- (void)registerOneShotEnabledHandler:(CDUnknownBlockType)arg1;
- (void)releaseWiFiAssertion;

@end
