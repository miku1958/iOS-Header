//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIRemoteAlertServiceInterface-Protocol.h>
#import <SpringBoardUIServices/SBUIRemoteAlertServiceInterface_Internal-Protocol.h>

@interface SBUIRemoteAlertServiceViewController : UIViewController <SBUIRemoteAlertServiceInterface_Internal, SBUIRemoteAlertServiceInterface>
{
    BOOL _hasPreservedInputViews;
    BOOL _hasSentAnimationFence;
}

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
- (BOOL)_selectorIsOverriden:(SEL)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)didInvalidateForRemoteAlert;
- (void)handleButtonActions:(id)arg1;
- (void)handleDoubleHeightStatusBarTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)noteActivatedForActivityContinuationWithIdentifier:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sb_becomeFirstResponder;
- (void)sb_dismissForAlertAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sb_presentForAlertAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sb_preserveInputViewsAnimated:(BOOL)arg1;
- (void)sb_resignFirstResponder;
- (void)sb_restoreInputViewsAnimated:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)synchronizeAnimationsInActions:(CDUnknownBlockType)arg1;

@end
