//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SwiftUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class UIPopoverPresentationController;

@protocol UIPopoverPresentationControllerDelegate <UIAdaptivePresentationControllerDelegate>

@optional
- (void)popoverPresentationController:(UIPopoverPresentationController *)arg1 willRepositionPopoverToRect:(struct CGRect *)arg2 inView:(id *)arg3;
- (void)popoverPresentationControllerDidDismissPopover:(UIPopoverPresentationController *)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(UIPopoverPresentationController *)arg1;
- (void)prepareForPopoverPresentation:(UIPopoverPresentationController *)arg1;
@end

