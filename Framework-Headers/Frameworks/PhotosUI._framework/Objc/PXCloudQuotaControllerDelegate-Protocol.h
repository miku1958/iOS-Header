//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCloudQuotaController, UIView, UIViewController;

@protocol PXCloudQuotaControllerDelegate <NSObject>
- (void)cloudQuotaController:(PXCloudQuotaController *)arg1 informationBannerDidChange:(UIView *)arg2;
- (UIViewController *)presentingViewControllerForCloudQuotaController:(PXCloudQuotaController *)arg1;
@end

