//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionReusableView.h>

@class UIView, _UIBackgroundViewConfiguration, _UISystemBackgroundView;
@protocol UITableConstants, _UIContentViewConfiguration;

@interface _UICollectionViewListHeaderFooter : UICollectionReusableView
{
    struct {
        unsigned int style:3;
        unsigned int needsConfigurationStateUpdate:1;
        unsigned int hasCustomBackgroundColor:1;
        unsigned int hasCustomBackgroundViewConfigurationProvider:1;
        unsigned int hasCustomBackgroundViewConfiguration:1;
        unsigned int automaticallyUpdatesBackgroundViewConfiguration:1;
        unsigned int automaticallyUpdatesContentViewConfiguration:1;
    } _headerFooterFlags;
    Class _contentViewConfigurationClass;
    CDUnknownBlockType _contentViewConfigurationProvider;
    _UISystemBackgroundView *_systemBackgroundView;
    CDUnknownBlockType _backgroundViewConfigurationProvider;
    UIView *_contentView;
    id<UITableConstants> _constants;
    struct UIEdgeInsets _contentViewInsets;
}

@property (nonatomic, getter=_automaticallyUpdatesBackgroundViewConfiguration, setter=_setAutomaticallyUpdatesBackgroundViewConfiguration:) BOOL _automaticallyUpdatesBackgroundViewConfiguration;
@property (nonatomic, getter=_automaticallyUpdatesContentViewConfiguration, setter=_setAutomaticallyUpdatesContentViewConfiguration:) BOOL _automaticallyUpdatesContentViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfiguration, setter=_setBackgroundViewConfiguration:) _UIBackgroundViewConfiguration *_backgroundViewConfiguration;
@property (copy, nonatomic, getter=_backgroundViewConfigurationProvider, setter=_setBackgroundViewConfigurationProvider:) CDUnknownBlockType _backgroundViewConfigurationProvider;
@property (copy, nonatomic, getter=_contentViewConfiguration, setter=_setContentViewConfiguration:) id<_UIContentViewConfiguration> _contentViewConfiguration;
@property (copy, nonatomic, getter=_contentViewConfigurationProvider, setter=_setContentViewConfigurationProvider:) CDUnknownBlockType _contentViewConfigurationProvider;
@property (readonly, nonatomic) unsigned long long _viewConfigurationState;
@property (readonly, nonatomic, getter=_constants) id<UITableConstants> constants; // @synthesize constants=_constants;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic, getter=_contentViewInsets) struct UIEdgeInsets contentViewInsets; // @synthesize contentViewInsets=_contentViewInsets;

+ (Class)_contentViewClass;
- (void).cxx_destruct;
- (void)_applyBackgroundViewConfiguration:(id)arg1;
- (struct CGSize)_contentTargetSizeForTargetSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 forUseWithSizeThatFits:(BOOL)arg4;
- (CDUnknownBlockType)_defaultBackgroundViewConfigurationProvider;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)_layoutContentView;
- (void)_layoutSystemBackgroundView;
- (void)_performConfigurationStateUpdate;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_resetBackgroundColor;
- (void)_resetBackgroundViewConfiguration;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_setNeedsConfigurationStateUpdate;
- (long long)_styleFromLayoutAttributes:(id)arg1;
- (void)_updateBackgroundViewConfigurationForState:(unsigned long long)arg1;
- (void)_updateConstants;
- (void)_updateContentViewConfigurationForState:(unsigned long long)arg1;
- (void)_updateDefaultBackgroundAppearance;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)traitCollectionDidChange:(id)arg1;

@end

