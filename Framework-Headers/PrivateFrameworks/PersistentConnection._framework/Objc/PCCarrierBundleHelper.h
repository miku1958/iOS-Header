//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersistentConnection/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <PersistentConnection/CoreTelephonyClientDataDelegate-Protocol.h>

@class CTBundle, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSDictionary, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface PCCarrierBundleHelper : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientCarrierBundleDelegate>
{
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_queue;
    CTXPCServiceSubscriptionContext *_currentDataContext;
    NSHashTable *_delegates;
    CTBundle *_bundle;
    NSDictionary *_cachedPushSettings;
}

@property (copy, nonatomic) NSDictionary *cachedPushSettings; // @synthesize cachedPushSettings=_cachedPushSettings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)helper;
- (void).cxx_destruct;
- (void)_processCarrierBundleChange:(id)arg1;
- (void)_updateCurrentDataSimContext:(id)arg1;
- (void)addDelegate:(id)arg1;
- (BOOL)boolValueFromPushBundleForKey:(id)arg1 error:(id *)arg2;
- (id)copyValueForKey:(id)arg1 error:(id *)arg2;
- (id)copyValueFromPushBundleForKey:(id)arg1 error:(id *)arg2;
- (void)currentDataSimChanged:(id)arg1;
- (id)init;
- (void)operatorBundleChange:(id)arg1;
- (void)removeDelegate:(id)arg1;

@end

