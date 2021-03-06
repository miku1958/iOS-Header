//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSString, TSKPopoverBasedViewController, UIView;

@protocol TSKPopoverBasedViewControllerDelegate <NSObject>

@optional
- (double)paddingAboveHalfHeightAtTopOfScreen;
- (void)popoverController:(TSKPopoverBasedViewController *)arg1 learnMoreAPDIDTapped:(NSString *)arg2;
- (BOOL)popoverController:(TSKPopoverBasedViewController *)arg1 shouldReceiveOutsideTouchAtLocation:(struct CGPoint)arg2 inView:(UIView *)arg3;
- (void)popoverControllerDidDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillShowPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (BOOL)wantsCloseArrowForPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
@end

