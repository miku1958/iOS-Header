//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class UIViewController;

@protocol CKDetailsControllerDelegate <NSObject>
- (UIViewController *)detailsControllerBusinessPrivacyInfoPresentingViewController:(UIViewController *)arg1;
- (void)detailsControllerDidDismiss:(UIViewController *)arg1;
- (void)detailsControllerWillDismiss:(UIViewController *)arg1;
- (void)dismissDetailsNavigationController;
- (BOOL)isDetailsNavigationControllerDetached;
@end

