//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatusServer/NSObject-Protocol.h>

@class STTelephonyStateProvider;

@protocol STTelephonyStateObserver <NSObject>

@optional
- (void)carrierBundleInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)mobileEquipmentInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
- (void)subscriptionInfoDidChangeForStateProvider:(STTelephonyStateProvider *)arg1 slot:(long long)arg2;
@end
