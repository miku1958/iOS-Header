//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class PKPeerPaymentActionController, UIViewController;

@protocol PKPeerPaymentActionControllerDelegate <NSObject>
- (void)peerPaymentActionController:(PKPeerPaymentActionController *)arg1 hasChangedState:(unsigned long long)arg2;
- (void)peerPaymentActionController:(PKPeerPaymentActionController *)arg1 requestPresentViewController:(UIViewController *)arg2;
- (void)peerPaymentActionController:(PKPeerPaymentActionController *)arg1 requestPresentViewController:(UIViewController *)arg2 withTransition:(int)arg3;
@end

