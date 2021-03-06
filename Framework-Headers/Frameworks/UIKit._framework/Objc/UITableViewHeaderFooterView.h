//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UITableConstantsHeaderFooterProviding-Protocol.h>
#import <UIKitCore/UITableViewSubviewReusing-Protocol.h>

@class NSString, UIBackgroundConfiguration, UIImage, UILabel, UITableView, UIViewConfigurationState, _UIBackgroundViewConfiguration, _UISystemBackgroundView, _UITableViewHeaderFooterViewLabel;
@protocol UIContentConfiguration, UITable, UITableConstants, _UIContentViewConfiguration, _UIContentViewInternal;

@interface UITableViewHeaderFooterView : UIView <UITableConstantsHeaderFooterProviding, UITableViewSubviewReusing>
{
    long long _tableViewStyle;
    UIImage *_backgroundImage;
    struct CGRect _frame;
    long long _textAlignment;
    double _maxTitleWidth;
    NSString *_reuseIdentifier;
    UIView *_backgroundView;
    _UITableViewHeaderFooterViewLabel *_label;
    _UITableViewHeaderFooterViewLabel *_detailLabel;
    UIView *_contentView;
    double _leadingMarginWidth;
    double _trailingMarginWidth;
    NSString *_contentViewConfigurationIdentifier;
    id<_UIContentViewInternal> _viewForContentConfiguration;
    CDUnknownBlockType _contentViewConfigurationProvider;
    _UISystemBackgroundView *_systemBackgroundView;
    CDUnknownBlockType _backgroundViewConfigurationProvider;
    id<UITableConstants> _constants;
    struct {
        unsigned int isHeader:1;
        unsigned int labelBackgroundColorNeedsUpdate:1;
        unsigned int detailLabelBackgroundColorNeedsUpdate:1;
        unsigned int floating:1;
        unsigned int stripPadding:1;
        unsigned int isTopHeader:1;
        unsigned int didSetSectionHeader:1;
        unsigned int didSetupDefaults:1;
        unsigned int insetsContentViewsToSafeArea:1;
        unsigned int tableViewHasBeenExplicitlySet:1;
        unsigned int hasCustomBackgroundView:1;
        unsigned int hasCustomBackgroundViewConfigurationProvider:1;
        unsigned int hasCustomBackgroundViewConfiguration:1;
        unsigned int needsConfigurationStateUpdate:1;
        unsigned int automaticallyUpdatesContentViewConfiguration:1;
        unsigned int automaticallyUpdatesBackgroundViewConfiguration:1;
    } _headerFooterFlags;
    id<UITable> _table;
}

@property (nonatomic, getter=_automaticallyUpdatesBackgroundViewConfiguration, setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:) BOOL _automaticallyUpdatesBackgroundViewConfiguration;
@property (nonatomic, getter=_automaticallyUpdatesContentViewConfiguration, setter=_setAutomaticallyUpdatesContentViewConfiguration:) BOOL _automaticallyUpdatesContentViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfiguration, setter=_setBackgroundViewConfiguration:) _UIBackgroundViewConfiguration *_backgroundViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfigurationProvider, setter=_setBackgroundViewConfigurationProvider:) CDUnknownBlockType _backgroundViewConfigurationProvider;
@property (copy, nonatomic, getter=_contentViewConfiguration, setter=_setContentViewConfiguration:) id<_UIContentViewConfiguration> _contentViewConfiguration;
@property (copy, nonatomic, getter=_contentViewConfigurationProvider, setter=_setContentViewConfigurationProvider:) CDUnknownBlockType _contentViewConfigurationProvider;
@property (readonly, nonatomic) unsigned long long _viewConfigurationState;
@property (nonatomic) BOOL automaticallyUpdatesBackgroundConfiguration;
@property (nonatomic) BOOL automaticallyUpdatesContentConfiguration;
@property (copy, nonatomic) UIBackgroundConfiguration *backgroundConfiguration;
@property (strong, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property (strong, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIViewConfigurationState *configurationState;
@property (strong, nonatomic, getter=_constants, setter=_setConstants:) id<UITableConstants> constants;
@property (copy, nonatomic) id<UIContentConfiguration> contentConfiguration;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailTextLabel;
@property (readonly, nonatomic, getter=_effectiveSafeAreaInsets) struct UIEdgeInsets effectiveSafeAreaInsets;
@property (nonatomic) BOOL floating;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=_insetsContentViewsToSafeArea, setter=_setInsetsContentViewsToSafeArea:) BOOL insetsContentViewsToSafeArea;
@property (nonatomic, getter=_marginWidth, setter=_setMarginWidth:) double marginWidth;
@property (nonatomic) double maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property (copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property (nonatomic, getter=_rightMarginWidth, setter=_setRightMarginWidth:) double rightMarginWidth;
@property (nonatomic) BOOL sectionHeader;
@property (nonatomic, getter=_stripPadding, setter=_setStripPadding:) BOOL stripPadding;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<UITable> table; // @synthesize table=_table;
@property (weak, nonatomic) UITableView *tableView;
@property (nonatomic) long long tableViewStyle;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic, getter=_isTopHeader, setter=_setTopHeader:) BOOL topHeader;

+ (id)_defaultFontForHeaderFooterView:(id)arg1;
+ (id)_defaultFontForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2;
+ (id)_defaultPlainHeaderFooterFont;
+ (id)_defaultTextColorForTableViewStyle:(long long)arg1 isSectionHeader:(BOOL)arg2;
+ (double)defaultFooterHeightForStyle:(long long)arg1;
+ (double)defaultHeaderHeightForStyle:(long long)arg1;
- (void).cxx_destruct;
- (void)_applyBackgroundViewConfiguration:(id)arg1 withState:(id)arg2;
- (void)_applyContentViewConfiguration:(id)arg1 withState:(id)arg2 usingSPI:(BOOL)arg3;
- (struct CGRect)_backgroundRect;
- (struct CGRect)_backgroundRectForWidth:(double)arg1;
- (id)_configurationState;
- (struct CGRect)_contentRect;
- (struct CGRect)_contentRectForWidth:(double)arg1;
- (id)_customViewForDefaultBackgroundAppearance;
- (id)_defaultBackgroundConfiguration;
- (id)_defaultTextColor;
- (struct CGRect)_detailLabelFrame;
- (struct CGSize)_detailTextSizeForWidth:(double)arg1;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
- (struct UIEdgeInsets)_insetsToBounds;
- (struct UIEdgeInsets)_insetsToContentRect;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (BOOL)_isFloating;
- (BOOL)_isSourceListOrMacIdiom;
- (BOOL)_isTransparentFocusRegion;
- (id)_label:(BOOL)arg1;
- (struct CGRect)_labelFrame;
- (void)_layoutSystemBackgroundView;
- (void)_performConfigurationStateUpdate;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetBackgroundViewConfiguration;
- (void)_resetBackgroundViewsAndColor;
- (void)_resetContentViews;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (void)_setContentView:(id)arg1 insertAtBack:(BOOL)arg2;
- (void)_setNeedsConfigurationStateUpdate;
- (void)_setTableViewStyle:(long long)arg1 updateFrame:(BOOL)arg2;
- (void)_setupBackgroundView;
- (void)_setupDefaultsIfNecessary;
- (void)_setupLabelAppearance;
- (void)_setupLabelForSourceList:(id)arg1;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3;
- (id)_table;
- (void)_tableViewDidUpdateMarginWidth;
- (struct CGSize)_textSizeForWidth:(double)arg1;
- (BOOL)_tintColorAffectsBackgroundColor;
- (void)_updateBackgroundImage;
- (void)_updateBackgroundView;
- (void)_updateBackgroundViewConfigurationForState:(id)arg1;
- (void)_updateContentAndBackgroundView;
- (void)_updateContentViewConfigurationForState:(id)arg1;
- (void)_updateDefaultBackgroundAppearance;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (struct CGRect)_updatedContentViewFrameForTargetWidth:(double)arg1;
- (BOOL)_useDetailText;
- (BOOL)_usingBackgroundConfigurationOrDefaultBackgroundConfiguration;
- (BOOL)_usingBackgroundViewConfiguration;
- (id)defaultContentConfiguration;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsUpdateConfiguration;
- (void)setNeedsUpdateConstraints;
- (void)setTintColor:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end

