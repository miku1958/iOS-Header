//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class UIViewController;

@protocol SKUIStatusOverlayProvider <NSObject>

@optional
- (UIViewController *)overlayViewControllerWithBackgroundStyle:(long long)arg1;
- (BOOL)shouldShowStatusOverlayForViewController:(UIViewController *)arg1;
@end

