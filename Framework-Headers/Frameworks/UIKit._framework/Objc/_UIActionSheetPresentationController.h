//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPopoverPresentationController.h>

#import <UIKit/_UIActionSheetCompactPresentationControllerDelegate-Protocol.h>

@class NSString, _UIActionSheetCompactPresentationController;
@protocol UIActionSheetPresentationControllerDelegate;

@interface _UIActionSheetPresentationController : UIPopoverPresentationController <_UIActionSheetCompactPresentationControllerDelegate>
{
    BOOL _dismissActionUsesShorterHeightWhenCompactVertically;
    BOOL _avoidsKeyboardDisabled;
    NSString *_dismissActionTitle;
    id<UIActionSheetPresentationControllerDelegate> _actionSheetDelegate;
    _UIActionSheetCompactPresentationController *_compactPresentationController;
}

@property (weak, nonatomic) id<UIActionSheetPresentationControllerDelegate> actionSheetDelegate; // @synthesize actionSheetDelegate=_actionSheetDelegate;
@property (nonatomic) BOOL avoidsKeyboardDisabled; // @synthesize avoidsKeyboardDisabled=_avoidsKeyboardDisabled;
@property (strong, nonatomic) _UIActionSheetCompactPresentationController *compactPresentationController; // @synthesize compactPresentationController=_compactPresentationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dismissActionTitle; // @synthesize dismissActionTitle=_dismissActionTitle;
@property (nonatomic) BOOL dismissActionUsesShorterHeightWhenCompactVertically; // @synthesize dismissActionUsesShorterHeightWhenCompactVertically=_dismissActionUsesShorterHeightWhenCompactVertically;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_compactPresentationController;
- (id)_exceptionStringForNilSourceViewOrBarButtonItem;
- (long long)_presentationContextForViewController:(id)arg1;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
- (id)_visualStyleForTraitCollection:(id)arg1;
- (void)actionSheetCompactPresentationControllerDidDismiss:(id)arg1;
- (BOOL)actionSheetCompactPresentationControllerShouldPresentInCurrentContext:(id)arg1;
- (void)beginPseudoAlertPresentationMode;
- (void)dealloc;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)endPseudoAlertPresentationMode;

@end

