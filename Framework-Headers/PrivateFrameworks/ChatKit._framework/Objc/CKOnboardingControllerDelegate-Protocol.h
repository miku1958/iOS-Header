//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKOnboardingController, UIViewController;

@protocol CKOnboardingControllerDelegate <NSObject>
- (void)onboardingControllerDidFinish:(CKOnboardingController *)arg1;
- (UIViewController *)presentingViewControllerForOnboardingController:(CKOnboardingController *)arg1;
@end
