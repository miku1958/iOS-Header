//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MaterialKit/MTTitledPlatterView.h>

@class NSString, UIButton, UIView, WGWidgetHostingViewController, WGWidgetListItemViewController;

@interface WGWidgetPlatterView : MTTitledPlatterView
{
    UIView *_compatibilityDarkeningView;
    NSString *_longerTitle;
    BOOL _showingMoreContent;
    WGWidgetHostingViewController *_widgetHost;
    WGWidgetListItemViewController *_listItem;
    long long _buttonMode;
}

@property (readonly, nonatomic) UIButton *addWidgetButton;
@property (nonatomic, getter=isAddWidgetButtonVisible) BOOL addWidgetButtonVisible;
@property (nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property (weak, nonatomic) WGWidgetListItemViewController *listItem; // @synthesize listItem=_listItem;
@property (readonly, nonatomic) UIButton *showMoreButton;
@property (nonatomic, getter=isShowMoreButtonVisible) BOOL showMoreButtonVisible;
@property (nonatomic, getter=isShowingMoreContent) BOOL showingMoreContent; // @synthesize showingMoreContent=_showingMoreContent;
@property (weak, nonatomic) WGWidgetHostingViewController *widgetHost; // @synthesize widgetHost=_widgetHost;

- (void).cxx_destruct;
- (void)_configureHeaderContentView;
- (void)_handleAddWidget:(id)arg1;
- (void)_handleIconButton:(id)arg1;
- (BOOL)_isUtilityButtonVisible;
- (void)_setUtilityButtonVisible:(BOOL)arg1;
- (void)_toggleShowMore:(id)arg1;
- (void)_updateCompatibilityDarkeningViewIfNecessary;
- (void)_updateUtilityButtonForMode:(long long)arg1;
- (void)_updateUtilityButtonForMoreContentState:(BOOL)arg1;
- (void)_willRemoveCustomContent:(id)arg1;
- (void)iconDidInvalidate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andCornerRadius:(double)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setBackgroundBlurred:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
