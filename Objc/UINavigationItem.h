//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UIImageView, UINavigationBar, UISearchController, UIView;
@protocol _UINavigationItemChangeObserver;

@interface UINavigationItem : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_synthesizedBackBarButtonItem;
    NSString *_prompt;
    long long _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    NSArray *_leftBarButtonItems;
    NSArray *_rightBarButtonItems;
    NSArray *_customLeftViews;
    NSArray *_customRightViews;
    BOOL _hidesBackButton;
    BOOL _leftItemsSupplementBackButton;
    UISearchController *_searchController;
    BOOL _alwaysShowsSearchBar;
    UIImageView *_frozenTitleView;
    NSArray *_abbreviatedBackButtonTitles;
    NSMutableDictionary *_minimumDesiredHeights;
    BOOL __alignLargeTitleAccessoryViewToBaseline;
    BOOL __supportsTwoLineLargeTitles;
    BOOL __backgroundHidden;
    double _fontScaleAdjustment;
    NSString *_pendingTitle;
    NSArray *_leftItemSpaceList;
    NSArray *_rightItemSpaceList;
    unsigned long long _leftFlexibleSpaceCount;
    unsigned long long _rightFlexibleSpaceCount;
    long long _largeTitleDisplayMode;
    id<_UINavigationItemChangeObserver> __changeObserver;
    double __titleViewWidthForAnimations;
    double __idealCustomTitleWidth;
    unsigned long long __largeTitleAccessoryViewHorizontalAlignment;
    UINavigationBar *__owningNavigationBar;
    UIView *__largeTitleAccessoryView;
    NSString *__weeTitle;
    UIView *__canvasView;
}

@property (copy, nonatomic, setter=_setAbbreviatedBackButtonTitles:) NSArray *_abbreviatedBackButtonTitles;
@property (readonly, nonatomic) BOOL _alignLargeTitleAccessoryViewToBaseline; // @synthesize _alignLargeTitleAccessoryViewToBaseline=__alignLargeTitleAccessoryViewToBaseline;
@property (nonatomic, setter=_setBackgroundHidden:) BOOL _backgroundHidden; // @synthesize _backgroundHidden=__backgroundHidden;
@property (strong, nonatomic, setter=_setCanvasView:) UIView *_canvasView; // @synthesize _canvasView=__canvasView;
@property (weak, nonatomic, setter=_setChangeObserver:) id<_UINavigationItemChangeObserver> _changeObserver; // @synthesize _changeObserver=__changeObserver;
@property (nonatomic, setter=_setFontScaleAdjustment:) double _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
@property (nonatomic, setter=_setIdealCustomTitleWidth:) double _idealCustomTitleWidth; // @synthesize _idealCustomTitleWidth=__idealCustomTitleWidth;
@property (nonatomic, setter=_setIndependentBarStyle:) long long _independentBarStyle;
@property (strong, nonatomic, setter=_setLargeTitleAccessoryView:) UIView *_largeTitleAccessoryView; // @synthesize _largeTitleAccessoryView=__largeTitleAccessoryView;
@property (readonly, nonatomic) unsigned long long _largeTitleAccessoryViewHorizontalAlignment; // @synthesize _largeTitleAccessoryViewHorizontalAlignment=__largeTitleAccessoryViewHorizontalAlignment;
@property (nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned long long _leftFlexibleSpaceCount; // @synthesize _leftFlexibleSpaceCount;
@property (copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList; // @synthesize _leftItemSpaceList;
@property (weak, nonatomic, getter=_owningNavigationBar, setter=_setOwningNavigationBar:) UINavigationBar *_owningNavigationBar; // @synthesize _owningNavigationBar=__owningNavigationBar;
@property (copy, nonatomic, setter=_setPendingTitle:) NSString *_pendingTitle; // @synthesize _pendingTitle;
@property (nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned long long _rightFlexibleSpaceCount; // @synthesize _rightFlexibleSpaceCount;
@property (copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList; // @synthesize _rightItemSpaceList;
@property (nonatomic, setter=_setSupportsTwoLineLargeTitles:) BOOL _supportsTwoLineLargeTitles; // @synthesize _supportsTwoLineLargeTitles=__supportsTwoLineLargeTitles;
@property (nonatomic) double _titleViewWidthForAnimations; // @synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations;
@property (copy, nonatomic, setter=_setWeeTitle:) NSString *_weeTitle; // @synthesize _weeTitle=__weeTitle;
@property (strong, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (copy, nonatomic) NSString *backButtonTitle;
@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (strong, nonatomic) UIBarButtonItem *customLeftItem;
@property (strong, nonatomic) UIView *customLeftView;
@property (strong, nonatomic) UIBarButtonItem *customRightItem;
@property (strong, nonatomic) UIView *customRightView;
@property (strong, nonatomic) UIView *customTitleView;
@property (nonatomic) BOOL hidesBackButton;
@property (nonatomic) BOOL hidesSearchBarWhenScrolling;
@property (nonatomic) long long largeTitleDisplayMode; // @synthesize largeTitleDisplayMode=_largeTitleDisplayMode;
@property (strong, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (weak, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property (copy, nonatomic) NSString *prompt;
@property (strong, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (copy, nonatomic) NSArray *rightBarButtonItems;
@property (strong, nonatomic) UISearchController *searchController;
@property (nonatomic) long long tag; // @synthesize tag=_tag;
@property (copy, nonatomic) NSString *title;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;

+ (id)defaultFont;
- (void).cxx_destruct;
- (BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3;
- (void)_addDefaultTitleViewToNavigationBarIfNecessary;
- (id)_barButtonForBackButtonIndicator;
- (id)_buttonForBackButtonIndicator;
- (void)_cleanupFrozenTitleView;
- (id)_customLeftView;
- (id)_customLeftViewCreating:(BOOL)arg1;
- (id)_customLeftViews;
- (id)_customLeftViewsCreating:(BOOL)arg1;
- (id)_customRightView;
- (id)_customRightViewCreating:(BOOL)arg1;
- (id)_customRightViews;
- (id)_customRightViewsCreating:(BOOL)arg1;
- (id)_defaultTitleView;
- (double)_desiredHeightForBarMetrics:(long long)arg1 defaultHeightBlock:(CDUnknownBlockType)arg2;
- (id)_effectiveBackBarButtonItem;
- (id)_firstNonSpaceItemInList:(id)arg1;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceRightItem;
- (void)_freezeCurrentTitleView;
- (BOOL)_hasDefaultTitleView;
- (id)_independentBackgroundImageForBarMetrics:(long long)arg1;
- (id)_independentShadowImage;
- (id)_leftBarButtonItem;
- (id)_leftBarButtonItems;
- (BOOL)_leftItemsWantBackButton;
- (double)_minimumDesiredHeightForBarMetrics:(long long)arg1;
- (id)_minimumDesiredHeights;
- (BOOL)_needsSizeTransitionToItem:(id)arg1 barMetrics:(long long)arg2 defaultHeightBlock:(CDUnknownBlockType)arg3;
- (BOOL)_notifyObserver_navigationItemUpdatedTitleContentAnimated:(BOOL)arg1;
- (void)_removeBackButtonView;
- (void)_removeBarButtonItemViews;
- (void)_removeContentInView:(id)arg1;
- (void)_removeTitleAndButtonViews;
- (void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(BOOL)arg3;
- (id)_rightBarButtonItem;
- (id)_rightBarButtonItems;
- (void)_setBackButtonPressed:(BOOL)arg1;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2;
- (void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2;
- (void)_setCustomLeftView:(id)arg1;
- (void)_setCustomLeftViews:(id)arg1;
- (void)_setCustomRightView:(id)arg1;
- (void)_setCustomRightViews:(id)arg1;
- (void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(BOOL)arg2;
- (void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(BOOL)arg2 horizontalAlignment:(unsigned long long)arg3;
- (void)_setLargeTitleViewDataSource:(id)arg1;
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setMinimumDesiredHeight:(double)arg1 forBarMetrics:(long long)arg2;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3;
- (void)_setTitleViewDataSource:(id)arg1;
- (id)_titleView;
- (void)_updateBarItemOwnersTo:(id)arg1;
- (void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1;
- (BOOL)_wantsBackButtonIndicator;
- (id)backButtonView;
- (id)currentBackButtonTitle;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBackButtonView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)set_customLeftView:(id)arg1;
- (void)set_customLeftViews:(id)arg1;
- (void)set_customRightView:(id)arg1;
- (void)set_customRightViews:(id)arg1;
- (void)set_leftBarButtonItem:(id)arg1;
- (void)set_leftBarButtonItems:(id)arg1;
- (void)set_rightBarButtonItem:(id)arg1;
- (void)set_rightBarButtonItems:(id)arg1;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;

@end
