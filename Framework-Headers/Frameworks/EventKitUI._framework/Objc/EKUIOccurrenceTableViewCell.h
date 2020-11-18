//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ColorBarView, EKCalendarDate, NSAttributedString, NSDate, NSDictionary, NSLayoutConstraint, NSString, NSTimer, UIColor, UIImageView, UILabel, UIView;

@interface EKUIOccurrenceTableViewCell : UITableViewCell
{
    UIView *_separatorViewForNonOpaqueTables;
    UILabel *_travelTextLabel;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel *_attendeesLabel;
    UILabel *_travelDepartureTimeLabel;
    UILabel *_topTimeLabel;
    UILabel *_bottomTimeLabel;
    UILabel *_countdownLabel;
    ColorBarView *_colorBarView;
    ColorBarView *_travelTimeColorBarView;
    UIImageView *_angleStripeBackgroundView;
    UIImageView *_accessoryImageView;
    UIView *_fadingBackgroundView;
    NSLayoutConstraint *_contentTop_to_travelTextBaseline_Constraint;
    NSLayoutConstraint *_contentTop_to_primaryTextBaseline_Constraint;
    NSLayoutConstraint *_attendeesTextBaseline_to_contentBottom_Constraint;
    NSLayoutConstraint *_secondaryTextBaseline_to_attendeesTextBaseline_Constraint;
    NSLayoutConstraint *_attendeesTextBaseline_to_primaryTextBaseline_Constraint;
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
    NSLayoutConstraint *_accessoryImageViewToColorBarHorizontalConstraint;
    NSLayoutConstraint *_accessoryImageViewToPrimaryLabelVerticalConstraint;
    NSLayoutConstraint *_accessoryImageViewToPrimaryLabelHorizontalConstraint;
    NSLayoutConstraint *_colorBarViewToPrimaryLabelHorizontalConstraint;
    double _travelTime;
    UIColor *_eventCalendarColor;
    UIColor *_selectedBackGroundColor;
    NSDate *_eventStartDateIncludingTravelTime;
    EKCalendarDate *_eventStartDate;
    EKCalendarDate *_eventEndDate;
    NSAttributedString *_eventTitleAttrString;
    NSString *_eventTitle;
    NSString *_eventLocation;
    NSString *_topTimeString;
    NSString *_bottomTimeString;
    NSString *_countdownLabelString;
    NSString *_attendeesDescription;
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
    BOOL _isFacebook;
    BOOL _tentative;
    BOOL _declined;
    BOOL _needsReply;
    BOOL _cancelled;
    BOOL _opaque;
    NSTimer *_countdownLabelUpdateTimer;
    BOOL _drawsOwnRowSeparators;
    BOOL _usesVibrantSeparatorOverlayDrawing;
    BOOL _usesInsetMargin;
}

@property (nonatomic) BOOL drawsOwnRowSeparators; // @synthesize drawsOwnRowSeparators=_drawsOwnRowSeparators;
@property (nonatomic) BOOL usesInsetMargin; // @synthesize usesInsetMargin=_usesInsetMargin;
@property (nonatomic) BOOL usesVibrantSeparatorOverlayDrawing; // @synthesize usesVibrantSeparatorOverlayDrawing=_usesVibrantSeparatorOverlayDrawing;

+ (id)_birthdayIcon;
+ (void)_clearCaches;
+ (id)_facebookIcon;
+ (id)_needsReplyAngledStripeBackground;
+ (id)_needsReplyDot;
+ (double)_rightImageSpacing;
+ (id)_tentativeAngledStripeBackground;
+ (id)cancelledDeclinedColorBarColor;
+ (double)cellHeightForWidth:(double)arg1;
+ (void)clearFontCaches;
+ (id)constrainedPrimaryTextLabelFont;
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
+ (id)reuseIdentifier;
+ (id)scalablePrimaryTextLabelFont;
+ (id)secondaryTextLabelFont;
+ (id)strikethroughPrimaryTextColor;
+ (id)strikethroughSecondaryTextColor;
+ (id)strikethroughTimeTextColor;
+ (id)tentativeBackgroundColor;
+ (double)tentativeStripeBackgroundAlpha;
+ (id)tentativeStripeColor;
+ (id)timeLabelsFont;
- (void).cxx_destruct;
- (void)_countdownTimerFired:(id)arg1;
- (void)_countdownTimerKill;
- (void)_countdownTimerStart;
- (void)_createViews;
- (BOOL)_eventIsNow;
- (double)_leftMarginForTimeViewsFromTimeWidth:(double)arg1;
- (double)_rightMarginForTimeViewsFromTimeWidth:(double)arg1;
- (id)_selectedBackgroundViewWithColor:(id)arg1;
- (void)_setMarginExtendsToFullWidth:(BOOL)arg1;
- (void)_setUpConstraints;
- (id)_sharedNumberFormatter;
- (id)_textForBottomTimeLabel;
- (id)_textForCountdownLabel;
- (id)_textForDepartureTimeLabel;
- (id)_textForTopTimeLabel;
- (void)_updateAccessoryImage;
- (void)_updateAngleBackgroundColor;
- (void)_updateAttendeesTextLabel;
- (void)_updateBottomTimeLabel;
- (void)_updateColorBarColor;
- (void)_updateContentForSizeCategoryChange:(id)arg1;
- (void)_updateCountdownLabel;
- (void)_updateFadingBackgroundColor;
- (void)_updatePrimaryTextLabel;
- (void)_updateSecondaryTextLabel;
- (void)_updateTopTimeLabel;
- (void)_updateTravelDepartureTimeLabel;
- (void)_updateTravelTimeLabel;
- (double)_verticalSpacingBetweenBaselinesForSecondaryFontLabels;
- (double)_verticalSpacingBottomToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForBottomLabel;
- (double)_verticalSpacingTopToBaselineForTopLabel;
- (double)_widthForTimeViews;
- (id)accessoryImage;
- (void)contentCategorySizeChanged;
- (void)dealloc;
- (void)forceUpdateOfAllElements;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isAllDay;
- (BOOL)isBirthday;
- (BOOL)isCancelled;
- (BOOL)isDeclined;
- (BOOL)isFacebook;
- (BOOL)isPast;
- (BOOL)isTentative;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
- (BOOL)needsReply;
- (id)primaryTextLabelFont;
- (id)reuseIdentifier;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateWithEvent:(id)arg1 calendar:(id)arg2 placedUnderDayWithStartDate:(id)arg3 opaque:(BOOL)arg4 drawsDimmedForPast:(BOOL)arg5;

@end
