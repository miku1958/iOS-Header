//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NSString, SBUILegibilityLabel, _UILegibilitySettings;

@interface NCNotificationListSectionRevealHintView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting>
{
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _forceRevealed;
    double _revealPercentage;
    SBUILegibilityLabel *_revealHintTitle;
    double _hintingAlpha;
    _UILegibilitySettings *_legibilitySettings;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed; // @synthesize forceRevealed=_forceRevealed;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hintingAlpha; // @synthesize hintingAlpha=_hintingAlpha;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (strong, nonatomic) SBUILegibilityLabel *revealHintTitle; // @synthesize revealHintTitle=_revealHintTitle;
@property (nonatomic) double revealPercentage; // @synthesize revealPercentage=_revealPercentage;
@property (readonly) Class superclass;

+ (double)minimumViewHeight;
- (void).cxx_destruct;
- (double)_alphaValueBasedOnRevealPercentage;
- (void)_configureRevealHintTitleIfNecessary;
- (double)_hintTitleDisplacementForRevealPercentage:(double)arg1;
- (id)_labelFont;
- (void)_layoutRevealHintTitle;
- (void)_updateAlpha;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
