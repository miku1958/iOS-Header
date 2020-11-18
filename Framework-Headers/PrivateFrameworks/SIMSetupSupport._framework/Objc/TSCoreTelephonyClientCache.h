//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject
{
    CoreTelephonyClient *_client;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)bootstrapPlanTransferUsingMessageSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)getTransferCapability:(unsigned long long)arg1;
- (void)hideTransferPlan:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)installPendingPlan:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installPendingPlanList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)pendingInstallItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setDataFallbackEnabled:(BOOL)arg1 forIccid:(id)arg2;
- (void)transferPlanListWithCompletion:(CDUnknownBlockType)arg1;
- (void)transferPlanWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transferPlansWithIdentifier:(id)arg1 fromDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
