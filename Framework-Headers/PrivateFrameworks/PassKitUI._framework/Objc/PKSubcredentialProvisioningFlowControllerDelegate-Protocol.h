//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSError, PKPaymentPass;
@protocol PKSubcredentialProvisioningFlowController;

@protocol PKSubcredentialProvisioningFlowControllerDelegate <NSObject>
- (void)subcredentialProvisioningFlowController:(id<PKSubcredentialProvisioningFlowController>)arg1 didFinishWithPass:(PKPaymentPass *)arg2 error:(NSError *)arg3;
- (void)userCanceledPairingWithSubcredentialProvisioningFlowController:(id<PKSubcredentialProvisioningFlowController>)arg1;
@end

