//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NCCarPlayBannerPresentableViewController, NSString;

@protocol NCCarPlayBannerPresentableViewControllerDelegate <NSObject>
- (void)didCancelBannerOfPresentableViewController:(NCCarPlayBannerPresentableViewController *)arg1 reason:(NSString *)arg2;
- (void)didSelectBannerOfPresentableViewController:(NCCarPlayBannerPresentableViewController *)arg1;
- (BOOL)presentableViewControllerClosesByDefault:(NCCarPlayBannerPresentableViewController *)arg1;
@end
