//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
{
}

- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getStingrayDisableEligibilityWithCompletion:(CDUnknownBlockType)arg1;
- (void)getStringrayStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleURLActionWithInfo:(id)arg1;
- (void)handleURLActionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)preflightStingrayDisableWithCompletion:(CDUnknownBlockType)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)setStingrayState:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldPerformRepair:(id *)arg1;

@end

