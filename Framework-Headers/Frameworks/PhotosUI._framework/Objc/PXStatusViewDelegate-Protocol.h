//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXStatusView, UIViewController;

@protocol PXStatusViewDelegate <NSObject>
- (void)statusView:(PXStatusView *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)statusView:(PXStatusView *)arg1 presentViewController:(UIViewController *)arg2;
@end
