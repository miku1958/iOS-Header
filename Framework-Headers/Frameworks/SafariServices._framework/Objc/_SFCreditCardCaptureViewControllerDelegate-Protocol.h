//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/UINavigationControllerDelegate-Protocol.h>

@class WBSCreditCardData, _SFCreditCardCaptureViewController;

@protocol _SFCreditCardCaptureViewControllerDelegate <UINavigationControllerDelegate>

@optional
- (void)creditCardCaptureViewController:(_SFCreditCardCaptureViewController *)arg1 didCaptureCreditCard:(WBSCreditCardData *)arg2;
- (void)creditCardCaptureViewControllerDidCancel:(_SFCreditCardCaptureViewController *)arg1;
@end

