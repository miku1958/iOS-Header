//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class UIImageView, UIViewController;

@protocol SKUISlideshowViewControllerDelegate <NSObject>

@optional
- (UIImageView *)slideshowViewController:(UIViewController *)arg1 poppedImageViewAtIndex:(long long)arg2;
- (void)slideshowViewController:(UIViewController *)arg1 scrollToImageAtIndex:(long long)arg2;
- (void)slideshowViewControllerDidFinish:(UIViewController *)arg1;
@end
