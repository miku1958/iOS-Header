//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIScreenshotDataConsumer, UIImage, UIViewController;

@protocol SKUISlideshowViewControllerDataSource <NSObject>
- (long long)numberOfItemsInSlideshowViewController:(UIViewController *)arg1;
- (SKUIScreenshotDataConsumer *)slideshowViewController:(UIViewController *)arg1 dataConsumerAtIndex:(long long)arg2;
- (NSURL *)slideshowViewController:(UIViewController *)arg1 imageURLAtIndex:(long long)arg2;
- (UIImage *)slideshowViewController:(UIViewController *)arg1 placeholderImageAtIndex:(long long)arg2;
@end

