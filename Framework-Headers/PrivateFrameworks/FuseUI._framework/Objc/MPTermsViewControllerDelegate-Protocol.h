//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/NSObject-Protocol.h>

@class MPTermsViewController, SSTermsAndConditions;

@protocol MPTermsViewControllerDelegate <NSObject>
- (void)termsViewController:(MPTermsViewController *)arg1 acceptTermsAndConditions:(SSTermsAndConditions *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)termsViewController:(MPTermsViewController *)arg1 loadTermsAndConditionsWithCompletionHandler:(void (^)(SSTermsAndConditions *, NSError *))arg2;
- (void)termsViewControllerDidCancel:(MPTermsViewController *)arg1;
- (void)termsViewControllerShouldDismiss:(MPTermsViewController *)arg1;
@end

