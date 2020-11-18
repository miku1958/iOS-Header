//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSString, SKUIRedeem, SKUIRedeemCameraViewController;

@protocol SKUIRedeemCameraViewControllerDelegate <NSObject>

@optional
- (void)overrideRedeemOperationWithCode:(NSString *)arg1 cameraRecognized:(BOOL)arg2 completion:(void (^)(SKUIRedeem *, NSError *))arg3;
- (void)redeemCameraViewController:(SKUIRedeemCameraViewController *)arg1 didFinishWithRedeem:(SKUIRedeem *)arg2;
@end

