//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIAccessibilityHUDGestureHosting-Protocol.h>
#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, UIAccessibilityHUDGestureManager, UIColor, UIGestureRecognizer, _UIStatusBarAction, _UIStatusBarData, _UIStatusBarDataAggregator, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol _UIStatusBarVisualProvider;

@interface _UIStatusBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureHosting>
{
    long long _style;
    UIColor *_foregroundColor;
    long long _mode;
    _UIStatusBarData *_currentData;
    NSArray *_enabledPartIdentifiers;
    NSMutableDictionary *_items;
    NSMutableDictionary *_displayItemStates;
    CDUnknownBlockType _updateCompletionHandler;
    UIView *_foregroundView;
    _UIStatusBarRegion *_targetRegion;
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;
    id<_UIStatusBarVisualProvider> _visualProvider;
    NSDictionary *_regions;
    _UIStatusBarDataAggregator *_dataAggregator;
    _UIStatusBarData *_currentAggregatedData;
    _UIStatusBarStyleAttributes *_styleAttributes;
    _UIStatusBarAction *_action;
    UIGestureRecognizer *_actionGestureRecognizer;
}

@property (strong, nonatomic) UIAccessibilityHUDGestureManager *accessibilityHUDGestureManager; // @synthesize accessibilityHUDGestureManager=_accessibilityHUDGestureManager;
@property (strong, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
@property (readonly, nonatomic) UIGestureRecognizer *actionGestureRecognizer; // @synthesize actionGestureRecognizer=_actionGestureRecognizer;
@property (readonly, nonatomic) unsigned int animationContextId;
@property (readonly, nonatomic, getter=areAnimationsEnabled) BOOL animationsEnabled;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) _UIStatusBarData *currentAggregatedData; // @synthesize currentAggregatedData=_currentAggregatedData;
@property (readonly, nonatomic) _UIStatusBarData *currentData; // @synthesize currentData=_currentData;
@property (strong, nonatomic) _UIStatusBarDataAggregator *dataAggregator; // @synthesize dataAggregator=_dataAggregator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *displayItemStates; // @synthesize displayItemStates=_displayItemStates;
@property (copy, nonatomic) NSArray *enabledPartIdentifiers; // @synthesize enabledPartIdentifiers=_enabledPartIdentifiers;
@property (copy, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property (strong, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *items; // @synthesize items=_items;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (readonly, nonatomic) NSDictionary *regions; // @synthesize regions=_regions;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) _UIStatusBarStyleAttributes *styleAttributes; // @synthesize styleAttributes=_styleAttributes;
@property (readonly) Class superclass;
@property (weak, nonatomic) _UIStatusBarRegion *targetRegion; // @synthesize targetRegion=_targetRegion;
@property (copy, nonatomic) CDUnknownBlockType updateCompletionHandler; // @synthesize updateCompletionHandler=_updateCompletionHandler;
@property (strong, nonatomic) id<_UIStatusBarVisualProvider> visualProvider; // @synthesize visualProvider=_visualProvider;

+ (BOOL)forceSplit;
+ (double)heightForOrientation:(long long)arg1;
+ (void)initialize;
+ (void)setDefaultVisualProviderClass:(Class)arg1;
+ (void)setForceSplit:(BOOL)arg1;
- (void).cxx_destruct;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldTerminateHUDGestureForOtherGestureRecognizer:(id)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;
- (void)_delayUpdatesWithKeys:(id)arg1 fromAnimation:(id)arg2;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;
- (id)_displayItemsForPartWithIdentifier:(id)arg1;
- (void)_fixupDisplayItemAttributes;
- (BOOL)_forceLayoutEngineSolutionInRationalEdges;
- (BOOL)_gestureRecognizer:(id)arg1 isInsideRegion:(id)arg2;
- (void)_performAnimations:(id)arg1;
- (void)_performWithMatchingCAAnimations:(CDUnknownBlockType)arg1;
- (void)_prepareAnimations:(id)arg1;
- (void)_prepareVisualProviderIfNeeded;
- (void)_rearrangeOverflowedItems;
- (id)_regionsForPartWithIdentifier:(id)arg1;
- (id)_statusBarWindowForAccessibilityHUD;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_updateDisplayedItemsWithData:(id)arg1 styleAttributes:(id)arg2 extraAnimations:(id)arg3;
- (void)_updateRegionItems;
- (void)_updateWithAggregatedData:(id)arg1;
- (void)_updateWithData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)actionForPartWithIdentifier:(id)arg1;
- (id)dataEntryKeysForItemsWithIdentifiers:(id)arg1;
- (id)displayItemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (id)displayItemWithIdentifier:(id)arg1;
- (struct CGRect)frameForDisplayItemWithIdentifier:(id)arg1;
- (struct CGRect)frameForPartWithIdentifier:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)itemIdentifiersInRegionsWithIdentifiers:(id)arg1;
- (id)itemWithIdentifier:(id)arg1;
- (id)itemsDependingOnKeys:(id)arg1;
- (void)layoutSubviews;
- (id)regionWithIdentifier:(id)arg1;
- (void)resetVisualProvider;
- (void)setAction:(id)arg1 forPartWithIdentifier:(id)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (id)stateForDisplayItemWithIdentifier:(id)arg1;
- (void)statusBarGesture:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithAnimations:(id)arg1;
- (void)updateWithData:(id)arg1;

@end
