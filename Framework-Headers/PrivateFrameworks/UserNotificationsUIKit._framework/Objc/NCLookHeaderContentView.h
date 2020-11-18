//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/SBDateLabelDelegate-Protocol.h>

@class NCLookViewFontProvider, NSDate, NSString, NSTimeZone, UIButton, UIImage, UILabel;
@protocol NCNotificationDateLabel;

@interface NCLookHeaderContentView : UIView <SBDateLabelDelegate, NCContentSizeCategoryAdjusting>
{
    NCLookViewFontProvider *_fontProvider;
    UILabel *_titleLabel;
    UILabel<NCNotificationDateLabel> *_dateLabel;
    UIButton *_iconButton;
    UIButton *_utilityButton;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _dateAllDay;
    BOOL _heedsHorizontalLayoutMargins;
    NSString *_preferredContentSizeCategory;
    long long _lookStyle;
    NSDate *_date;
    NSTimeZone *_timeZone;
    long long _dateFormatStyle;
    UIView *_utilityView;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay; // @synthesize dateAllDay=_dateAllDay;
@property (nonatomic) long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL heedsHorizontalLayoutMargins; // @synthesize heedsHorizontalLayoutMargins=_heedsHorizontalLayoutMargins;
@property (strong, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIButton *iconButton; // @synthesize iconButton=_iconButton;
@property (readonly, nonatomic) long long lookStyle; // @synthesize lookStyle=_lookStyle;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;
@property (strong, nonatomic) UIView *utilityView; // @synthesize utilityView=_utilityView;

+ (id)_xImage;
+ (double)titleInset;
- (void).cxx_destruct;
- (void)_configureDateLabelForShortLook;
- (void)_configureDateLabelIfNecessary;
- (void)_configureIconButtonForLongLook;
- (void)_configureIconButtonIfNecessary;
- (void)_configureTitleLabelForLongLook;
- (void)_configureTitleLabelForShortLook;
- (void)_configureTitleLabelForStyle:(long long)arg1;
- (void)_configureTitleLabelIfNecessary;
- (void)_configureUtilityButtonIfNecessary;
- (id)_dateLabel;
- (void)_fixTitleOverlapIfNecessary;
- (id)_fontProvider;
- (double)_headerHeight;
- (double)_headerHeightForStyle:(long long)arg1;
- (void)_layoutDateLabelForLongLookWithScale:(double)arg1;
- (void)_layoutDateLabelForShortLookWithScale:(double)arg1;
- (void)_layoutDateLabelForStyle:(long long)arg1 withScale:(double)arg2;
- (void)_layoutIconButtonForLongLookWithScale:(double)arg1;
- (void)_layoutIconButtonForShortLookWithScale:(double)arg1;
- (void)_layoutIconButtonForStyle:(long long)arg1 withScale:(double)arg2;
- (void)_layoutTitleLabelForLongLookWithScale:(double)arg1;
- (void)_layoutTitleLabelForShortLookWithScale:(double)arg1;
- (void)_layoutTitleLabelForStyle:(long long)arg1 withScale:(double)arg2;
- (void)_layoutUtilityButtonForStyle:(long long)arg1 withScale:(double)arg2;
- (void)_recycleDateLabel;
- (void)_setFontProvider:(id)arg1;
- (id)_titleLabel;
- (double)_titleLabelBaselineOffset;
- (void)_updateDateLabel;
- (void)_updateDateLabelFontForShortLook;
- (void)_updateTitleLabelFontForStyle:(long long)arg1;
- (void)_updateUtilityButtonFont;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)dateLabelDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
