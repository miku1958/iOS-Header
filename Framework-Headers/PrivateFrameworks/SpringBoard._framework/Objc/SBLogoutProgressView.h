//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CNContact, NSArray, NSLayoutConstraint, SBAppStatusBarSettingsAssertion, UIActivityIndicatorView, UIImageView, UILabel, _UILegibilitySettings;

@interface SBLogoutProgressView : UIView
{
    CNContact *_userContact;
    NSArray *_pendingApplications;
    _UILegibilitySettings *_legibilitySettings;
    UIImageView *_userAvatarView;
    NSLayoutConstraint *_userAvatarVerticalConstraint;
    UILabel *_goodbyeLabel;
    NSLayoutConstraint *_goodbyeLabelConstraint;
    UIView *_savingDocumentsActivityAndLabelContainerView;
    UIActivityIndicatorView *_savingDocumentsActivityIndicator;
    UILabel *_savingDocumentsLabel;
    UILabel *_savingDocumentsMoreLabel;
    NSLayoutConstraint *_savingDocumentsMoreLabelConstraint;
    UIView *_blameContainerView;
    UIImageView *_blameAppIconView;
    UILabel *_blameAppNameLabel;
    SBAppStatusBarSettingsAssertion *_statusBarSettingsAssertion;
}

@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (copy, nonatomic) NSArray *pendingApplications; // @synthesize pendingApplications=_pendingApplications;
@property (nonatomic, getter=isProgressVisible) BOOL progressVisible; // @dynamic progressVisible;
@property (strong, nonatomic) CNContact *userContact; // @synthesize userContact=_userContact;

- (void).cxx_destruct;
- (double)_goodbyeLabelBaselineOffset;
- (double)_moreDocumentsLabelBaselineOffset;
- (void)_updateBlame;
- (void)_updateGoodbye;
- (void)_updateLegibility;
- (void)_updateUserAvatar;
- (void)_updateUserAvatarLegibility;
- (void)_updateViewData;
- (double)_userAvatarVerticalOffsetFromCenter;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
