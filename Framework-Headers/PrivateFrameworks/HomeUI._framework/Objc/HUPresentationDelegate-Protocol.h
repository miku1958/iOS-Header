//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class NAFuture, UIViewController;
@protocol HUPresentationDelegateHost;

@protocol HUPresentationDelegate <NSObject>
- (NAFuture *)finishPresentation:(UIViewController<HUPresentationDelegateHost> *)arg1 animated:(BOOL)arg2;
@end
