//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKUITableViewCellWithPrimaryAndSecondaryFonts.h>

@class ColorBarView, EKCalendarDate, EKUIOccurrenceTableViewCellLabel, NSArray, NSDate, NSDictionary, NSLayoutConstraint, NSObject, NSString, UIColor, UIImageView, UIVisualEffect, UIVisualEffectView;
@protocol OS_dispatch_source;

@interface EKUIOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts
{
    EKUIOccurrenceTableViewCellLabel *_travelTextLabel;
    EKUIOccurrenceTableViewCellLabel *_primaryLabel;
    EKUIOccurrenceTableViewCellLabel *_secondaryLabel;
    EKUIOccurrenceTableViewCellLabel *_travelDepartureTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_topTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_bottomTimeLabel;
    EKUIOccurrenceTableViewCellLabel *_countdownLabel;
    ColorBarView *_colorBarView;
    ColorBarView *_travelTimeColorBarView;
    UIImageView *_angleStripeBackgroundView;
    UIImageView *_accessoryImageView;
    NSArray *_ekUIOccurrenceTableViewCellConstraints;
    BOOL _areCurrentCellConstraintsForLargeText;
    UIVisualEffectView *_primaryVisualEffectParentView;
    UIVisualEffectView *_secondaryVisualEffectParentView;
    BOOL _travelTimeTemplate;
    BOOL _invitationTemplate;
    NSLayoutConstraint *_contentTop_to_travelTextBaseline_Constraint;
    NSLayoutConstraint *_contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint *_contentBottom_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_primaryTextBaseline_to_secondaryTextBaseline_Constraint;
    NSLayoutConstraint *_travelTextBaseline_to_primaryTextBaseLine_Constraint;
    NSLayoutConstraint *_horizontalDividerBarBottom_to_colorBarTop_Constraint;
    NSLayoutConstraint *_contentTop_to_colorBarTop_Constraint;
    NSLayoutConstraint *_timeTextWidthConstraint;
    NSLayoutConstraint *_timeTextLeftMarginConstraint;
    NSLayoutConstraint *_timeTextRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelRightMarginConstraint;
    NSLayoutConstraint *_countdownLabelBaseling_to_contentBottom_Constraint;
    double _travelTime;
    UIColor *_eventCalendarColor;
    UIColor *_selectedBackGroundColor;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventStartDate;
    EKCalendarDate *_eventEndDate;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_countdownLabelString;
    NSString *_travelTextLabelString;
    NSString *_travelAddressString;
    NSString *_travelDepartureTimeString;
    NSDictionary *_secondaryStringDrawingAttributes;
    NSDictionary *_topTimeStringDrawingAttributes;
    NSDictionary *_bottomTimeStringDrawingAttributes;
    NSDictionary *_travelTextLabelStringDrawingAttributes;
    NSDictionary *_travelAddressStringDrawingAttributes;
    NSDictionary *_travelDepartureTimeStringDrawingAttributes;
    BOOL _isPast;
    BOOL _isAllDay;
    BOOL _isRecurring;
    BOOL _isBirthday;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _cancelled;
    BOOL _opaque;
    NSObject<OS_dispatch_source> *_countdownLabelUpdateTimer;
    BOOL _doesNotUseTemplate;
    BOOL _isTemplateCell;
    BOOL _isFakeInvitation;
    UIVisualEffect *_primaryVisualEffect;
    UIVisualEffect *_secondaryVisualEffect;
}

@property (nonatomic) BOOL doesNotUseTemplate; // @synthesize doesNotUseTemplate=_doesNotUseTemplate;
@property (nonatomic) BOOL isFakeInvitation; // @synthesize isFakeInvitation=_isFakeInvitation;
@property (nonatomic) BOOL isTemplateCell; // @synthesize isTemplateCell=_isTemplateCell;
@property (strong, nonatomic) UIVisualEffect *primaryVisualEffect; // @synthesize primaryVisualEffect=_primaryVisualEffect;
@property (strong, nonatomic) UIVisualEffect *secondaryVisualEffect; // @synthesize secondaryVisualEffect=_secondaryVisualEffect;

+ (id)_allDayLocalizedString;
+ (void)_clearCaches;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (id)_nowLocalizedString;
+ (double)_rightImageSpacing;
+ (id)_tentativeAngledStripeBackground;
+ (id)allReuseIdentifiers;
+ (id)cancelledDeclinedColorBarColor;
+ (double)cellHeightForWidth:(double)arg1;
+ (void)initialize;
+ (id)invitationPrimaryTextColor;
+ (id)needsReplyBackgroundColor;
+ (double)needsReplyStripeBackgroundAlpha;
+ (id)needsReplyStripeColor;
+ (id)normalBackgroundColor;
+ (id)normalBottomTimeTextColor;
+ (id)normalPrimaryTextColor;
+ (id)normalSecondaryTextColor;
+ (id)normalTopTimeTextColor;
+ (id)prefixPrimaryTextColor;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)reuseIdentifierForEvent:(id)arg1;
+ (id)reuseIdentifierForTemplate;
+ (id)reuseIdentifierForTemplateInvitation;
+ (id)reuseIdentifierForTemplateWithTravelTime;
+ (id)strikethroughPrimaryTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)strikethroughTimeTextColor;
+ (id)tentativeBackgroundColor;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (BOOL)vibrant;
- (void).cxx_destruct;
- (id)_birthdayIcon;
- (void)_countdownTimerFired;
- (id)_createParentVisualEffectViewWithVisualEffect:(id)arg1;
- (void)_createViewsForReuseIdentifier:(id)arg1;
- (BOOL)_eventIsNow;
- (void)_installCountdownTimerWithFireDate:(id)arg1;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (void)_resetCountdownTimerBasedOnCurrentDateForStringGeneration:(id)arg1;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (id)_selectedBackgroundViewWithColor:(id)arg1;
- (void)_setUpConstraints;
- (id)_setUpLargeTextConstraints;
- (id)_setUpStandardConstraints;
- (id)_sharedNumberFormatter;
- (id)_textForBottomTimeLabel;
- (id)_textForCountdownLabelWithCurrentDate:(id)arg1;
- (id)_textForDepartureTimeLabel;
- (id)_textForTopTimeLabel;
- (void)_uninstallCountdownTimer;
- (void)_updateAccessoryImage;
- (void)_updateAngleBackgroundColor;
- (void)_updateBottomTimeLabel;
- (void)_updateColorBarColor;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)_updateCountdownLabel;
- (void)_updateNumberOfLinesForLabel:(id)arg1 isRightAlignedInStandardLayout:(BOOL)arg2;
- (void)_updatePrimaryTextLabel;
- (void)_updateSecondaryTextLabel;
- (void)_updateTopTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateTravelTimeLabel;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingPrimaryLabelToTimeLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_verticalSpacingTopToTopForNonPrimaryLabel;
- (double)_widthForTimeViews;
- (id)accessoryImage;
- (void)contentCategorySizeChanged;
- (void)dealloc;
- (id)detailTextLabel;
- (void)forceUpdateOfAllElements;
- (id)imageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isAllDay;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isDeclined;
- (BOOL)isPast;
- (BOOL)isTentative;
- (BOOL)needsReply;
- (id)reuseIdentifier;
- (void)setCalendarColor:(id)arg1;
- (void)setColorBarLayerFilter:(id)arg1;
- (id)textLabel;
- (void)updateConstraints;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 includingTravelTime:(BOOL)arg6;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5 includingTravelTime:(BOOL)arg6 includingCountdown:(BOOL)arg7;

@end

