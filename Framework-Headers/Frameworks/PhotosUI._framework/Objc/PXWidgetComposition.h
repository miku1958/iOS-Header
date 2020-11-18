//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXTilingControllerComposition.h>

#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionElementDelegate-Protocol.h>
#import <PhotosUICore/PXWidgetCompositionElementObserver-Protocol.h>

@class NSArray, NSString, PXScrollViewController, PXTilingController, PXWidgetCompositionSpec;
@protocol PXWidgetCompositionDelegate;

@interface PXWidgetComposition : PXTilingControllerComposition <PXWidgetCompositionElementObserver, PXWidgetCompositionElementDelegate, PXScrollViewControllerObserver>
{
    struct {
        BOOL respondsToHasContentAbove;
        BOOL respondsToShouldUseEdgeToEdgeLayoutForWidget;
        BOOL respondsToLoadingPriorityForWidget;
        BOOL respondsToWidgetTransitionToViewControllerWithTransitionType;
        BOOL respondsToRequestViewControllerDismissalAnimated;
        BOOL respondsToDidUpdateCompositionWithDefaultAnimationOptions;
    } _delegateFlags;
    BOOL _isPerformingWidgetLoadingChange;
    struct {
        BOOL elementsToLoad;
    } _needsUpdateFlags;
    BOOL _shouldLoadVisibleWidgets;
    BOOL _shouldLoadAllWidgets;
    BOOL _shouldUnloadAllWidgets;
    BOOL __didLayoutWidgets;
    NSArray *__elements;
    PXScrollViewController *_scrollViewController;
    id<PXWidgetCompositionDelegate> _delegate;
    NSArray *_widgets;
    PXWidgetCompositionSpec *_spec;
    long long _minimumWidgetLoadingPriority;
    PXTilingController *__focusedTilingController;
    struct CGPoint __lastContentAdjustmentOffset;
}

@property (nonatomic, setter=_setDidLayoutWidgets:) BOOL _didLayoutWidgets; // @synthesize _didLayoutWidgets=__didLayoutWidgets;
@property (copy, nonatomic, setter=_setElements:) NSArray *_elements; // @synthesize _elements=__elements;
@property (strong, nonatomic, setter=_setFocusedTilingController:) PXTilingController *_focusedTilingController; // @synthesize _focusedTilingController=__focusedTilingController;
@property (nonatomic, setter=_setLastContentAdjustmentOffset:) struct CGPoint _lastContentAdjustmentOffset; // @synthesize _lastContentAdjustmentOffset=__lastContentAdjustmentOffset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXWidgetCompositionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long minimumWidgetLoadingPriority; // @synthesize minimumWidgetLoadingPriority=_minimumWidgetLoadingPriority;
@property (readonly, weak, nonatomic) PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property (nonatomic) BOOL shouldLoadAllWidgets; // @synthesize shouldLoadAllWidgets=_shouldLoadAllWidgets;
@property (nonatomic) BOOL shouldLoadVisibleWidgets; // @synthesize shouldLoadVisibleWidgets=_shouldLoadVisibleWidgets;
@property (nonatomic) BOOL shouldUnloadAllWidgets; // @synthesize shouldUnloadAllWidgets=_shouldUnloadAllWidgets;
@property (strong, nonatomic) PXWidgetCompositionSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *widgets; // @synthesize widgets=_widgets;

- (void).cxx_destruct;
- (void)_invalidateElements;
- (void)_invalidateElementsSpec;
- (void)_invalidateElementsToLoad;
- (long long)_loadingPriorityForElement:(id)arg1;
- (void)_setNeedsUpdateWidgetLoading;
- (BOOL)_shouldFocusOnTilingController:(id)arg1;
- (BOOL)_shouldUseEdgeToEdgeLayoutForWidget:(id)arg1;
- (void)_updateElements;
- (void)_updateElementsSpec;
- (void)_updateElementsToLoadIfNeeded;
- (void)_updateFocusedTilingController;
- (void)_updateWidgetLoadingIfNeeded;
- (BOOL)element:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;
- (BOOL)element:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(long long)arg3;
- (void)elementHasLoadedContentDataDidChange:(id)arg1;
- (void)elementNeedsLayout:(id)arg1 preferredAnimationOptions:(id)arg2 originatingTilingController:(id)arg3;
- (id)elementViewController:(id)arg1;
- (id)footerTilingControllerForWidget:(id)arg1;
- (struct CGRect)frameForWidget:(id)arg1;
- (id)headerTilingControllerForWidget:(id)arg1;
- (id)init;
- (id)initWithScrollViewController:(id)arg1;
- (void)invalidateFocusedTilingController;
- (void)performWidgetLoadingChange:(CDUnknownBlockType)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (id)tilingControllers;
- (void)updateComposition;
- (id)widgetAtLocation:(struct CGPoint)arg1;

@end
