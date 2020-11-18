//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, UIBarButtonItem, UIImageView, UINavigationBar, UIView;

@interface UINavigationItem : NSObject <NSCoding>
{
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
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
    UIImageView *_frozenTitleView;
    NSArray *_abbreviatedBackButtonTitles;
    BOOL _barStyleIndependent;
    double _fontScaleAdjustment;
    NSString *_pendingTitle;
    long long _independentBarStyle;
    NSArray *_leftItemSpaceList;
    NSArray *_rightItemSpaceList;
    unsigned long long _leftFlexibleSpaceCount;
    unsigned long long _rightFlexibleSpaceCount;
    NSMutableDictionary *_backgroundImages;
    double __titleViewWidthForAnimations;
    double __idealCustomTitleWidth;
    UINavigationBar *__owningNavigationBar;
}

@property (copy, nonatomic, setter=_setAbbreviatedBackButtonTitles:) NSArray *_abbreviatedBackButtonTitles;
@property (readonly, nonatomic) NSMutableDictionary *_backgroundImages; // @synthesize _backgroundImages;
@property (nonatomic, getter=_isBarStyleIndependent, setter=_setBarStyleIndependent:) BOOL _barStyleIndependent; // @synthesize _barStyleIndependent;
@property (nonatomic, setter=_setFontScaleAdjustment:) double _fontScaleAdjustment; // @synthesize _fontScaleAdjustment;
@property (nonatomic, setter=_setIdealCustomTitleWidth:) double _idealCustomTitleWidth; // @synthesize _idealCustomTitleWidth=__idealCustomTitleWidth;
@property (nonatomic, setter=_setIndependentBarStyle:) long long _independentBarStyle; // @synthesize _independentBarStyle;
@property (nonatomic, setter=_setLeftFlexibleSpaceCount:) unsigned long long _leftFlexibleSpaceCount; // @synthesize _leftFlexibleSpaceCount;
@property (copy, nonatomic, setter=_setLeftItemSpaceList:) NSArray *_leftItemSpaceList; // @synthesize _leftItemSpaceList;
@property (nonatomic, getter=_owningNavigationBar, setter=_setOwningNavigationBar:) UINavigationBar *_owningNavigationBar; // @synthesize _owningNavigationBar=__owningNavigationBar;
@property (copy, nonatomic, setter=_setPendingTitle:) NSString *_pendingTitle; // @synthesize _pendingTitle;
@property (nonatomic, setter=_setRightFlexibleSpaceCount:) unsigned long long _rightFlexibleSpaceCount; // @synthesize _rightFlexibleSpaceCount;
@property (copy, nonatomic, setter=_setRightItemSpaceList:) NSArray *_rightItemSpaceList; // @synthesize _rightItemSpaceList;
@property (nonatomic) double _titleViewWidthForAnimations; // @synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations;
@property (strong, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (nonatomic) BOOL hidesBackButton;
@property (strong, nonatomic) UIBarButtonItem *leftBarButtonItem;
@property (copy, nonatomic) NSArray *leftBarButtonItems;
@property (nonatomic) BOOL leftItemsSupplementBackButton;
@property (copy, nonatomic) NSString *prompt;
@property (strong, nonatomic) UIBarButtonItem *rightBarButtonItem;
@property (copy, nonatomic) NSArray *rightBarButtonItems;
@property (copy, nonatomic) NSString *title;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;

+ (id)defaultFont;
- (void).cxx_destruct;
- (BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3;
- (void)_addDefaultTitleViewToNavigationBarIfNecessary;
- (id)_automationID;
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
- (id)_firstNonSpaceItemInList:(id)arg1;
- (id)_firstNonSpaceLeftItem;
- (id)_firstNonSpaceRightItem;
- (void)_freezeCurrentTitleView;
- (id)_independentBackgroundImageForBarMetrics:(long long)arg1;
- (id)_independentShadowImage;
- (id)_leftBarButtonItem;
- (id)_leftBarButtonItems;
- (BOOL)_leftItemsWantBackButton;
- (void)_removeBackButtonView;
- (void)_removeBarButtonItemViews;
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
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (id)_titleView;
- (void)_updateBarItemOwnersTo:(id)arg1;
- (void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
- (void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1;
- (BOOL)_wantsBackButtonIndicator;
- (id)backButtonTitle;
- (id)backButtonView;
- (id)currentBackButtonTitle;
- (id)customLeftItem;
- (id)customLeftView;
- (id)customRightItem;
- (id)customRightView;
- (id)customTitleView;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)existingBackButtonView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)navigationBar;
- (void)setBackButtonTitle:(id)arg1;
- (void)setCustomLeftItem:(id)arg1;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomLeftView:(id)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightItem:(id)arg1;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightView:(id)arg1;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomTitleView:(id)arg1;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2;
- (void)setNavigationBar:(id)arg1;
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

