//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PlatterKit/BSUIDateLabelDelegate-Protocol.h>
#import <PlatterKit/MTVisualStylingRequiring-Protocol.h>
#import <PlatterKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIFontProvider, MTVisualStylingProvider, NSArray, NSDate, NSString, NSTimeZone, PLPlatterHeaderContentViewLayoutManager, UIButton, UIFont, UILabel;
@protocol BSUIDateLabel;

@interface PLPlatterHeaderContentView : UIView <BSUIDateLabelDelegate, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting>
{
    UILabel<BSUIDateLabel> *_dateLabel;
    NSArray *_iconButtons;
    UIButton *_utilityButton;
    PLPlatterHeaderContentViewLayoutManager *_layoutManager;
    BOOL _hasUpdatedContent;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _adjustsFontForContentSizeCategory;
    BOOL _dateAllDay;
    BOOL _heedsHorizontalLayoutMargins;
    BOOL _usesLargeTextLayout;
    NSString *_preferredContentSizeCategory;
    NSDate *_date;
    NSTimeZone *_timeZone;
    long long _dateFormatStyle;
    UIView *_utilityView;
    BSUIFontProvider *_fontProvider;
    UILabel *_titleLabel;
    double _utilityButtonHorizontalLayoutReference;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (readonly, nonatomic) double contentBaseline;
@property (copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay; // @synthesize dateAllDay=_dateAllDay;
@property (nonatomic) long long dateFormatStyle; // @synthesize dateFormatStyle=_dateFormatStyle;
@property (readonly, nonatomic, getter=_dateLabel) UILabel *dateLabel;
@property (readonly, nonatomic, getter=_dateLabelFont) UIFont *dateLabelFont;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider;
@property (strong, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL heedsHorizontalLayoutMargins; // @synthesize heedsHorizontalLayoutMargins=_heedsHorizontalLayoutMargins;
@property (readonly, nonatomic) NSArray *iconButtons; // @synthesize iconButtons=_iconButtons;
@property (readonly, nonatomic, getter=_iconDimension) double iconDimension;
@property (readonly, nonatomic, getter=_iconLeadingPadding) double iconLeadingPadding;
@property (readonly, nonatomic, getter=_iconTrailingPadding) double iconTrailingPadding;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=_titleLabel) UILabel *titleLabel;
@property (strong, nonatomic, getter=_titleLabel, setter=_setTitleLabel:) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic, getter=_titleLabelFont) UIFont *titleLabelFont;
@property (nonatomic, getter=_usesLargeTextLayout, setter=_setUsesLargeTextLayout:) BOOL usesLargeTextLayout;
@property (nonatomic, getter=_usesLargeTextLayout, setter=_setUsesLargeTextLayout:) BOOL usesLargeTextLayout; // @synthesize usesLargeTextLayout=_usesLargeTextLayout;
@property (readonly, nonatomic) UIButton *utilityButton;
@property (nonatomic, getter=_utilityButtonHorizontalLayoutReference, setter=_setUtilityButtonHorizontalLayoutReference:) double utilityButtonHorizontalLayoutReference;
@property (nonatomic, getter=_utilityButtonHorizontalLayoutReference, setter=_setUtilityButtonHorizontalLayoutReference:) double utilityButtonHorizontalLayoutReference; // @synthesize utilityButtonHorizontalLayoutReference=_utilityButtonHorizontalLayoutReference;
@property (strong, nonatomic) UIView *utilityView; // @synthesize utilityView=_utilityView;

+ (id)_titleLabelFontFromFontProvider:(id)arg1;
+ (double)contentBaselineToBoundsBottomWithWidth:(double)arg1 scale:(double)arg2;
- (void).cxx_destruct;
- (id)_attributedStringForTitle:(id)arg1;
- (void)_configureDateLabel;
- (void)_configureDateLabelIfNecessary;
- (void)_configureIconButton:(id)arg1 withIcon:(id)arg2;
- (void)_configureIconButtonsForIcons:(id)arg1;
- (void)_configureTitleLabel:(id)arg1;
- (void)_configureUtilityButton;
- (void)_configureUtilityButtonIfNecessary;
- (void)_darkerSystemColorsStatusDidChange:(id)arg1;
- (id)_dateLabelPreferredFont;
- (double)_headerHeightForWidth:(double)arg1;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutIconButtonsWithScale:(double)arg1;
- (id)_layoutManager;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (id)_lazyTitleLabel;
- (id)_newIconButton;
- (id)_newTitleLabel;
- (void)_recycleDateLabel;
- (void)_reduceTransparencyStatusDidChange:(id)arg1;
- (void)_tearDownDateLabel;
- (id)_titleLabelPreferredFont;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_updateTextAttributesForDateLabel;
- (void)_updateTextAttributesForTitleLabel:(id)arg1;
- (id)_updateTitleAttributesForAttributedString:(id)arg1;
- (void)_updateUtilityButtonFont;
- (void)_updateUtilityButtonVisualStyling;
- (id)_utilityButton;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)dateLabelDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)setVisualStylingProvider:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)visualStylingProvider;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
