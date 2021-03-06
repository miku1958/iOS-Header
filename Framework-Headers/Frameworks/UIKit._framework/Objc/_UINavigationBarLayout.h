//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILabel, UISearchBar, UIView, _UIBarBackground, _UIBarBackgroundLayout, _UIBarInsertLayoutData, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView, _UINavigationBarPalette, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant>
{
    _UIBarInsertLayoutData *_promptLayoutData;
    _UIBarInsertLayoutData *_contentLayoutData;
    _UIBarInsertLayoutData *_canvasViewLayoutData;
    _UIBarInsertLayoutData *_largeTitleLayoutData;
    _UIBarInsertLayoutData *_refreshControlLayoutData;
    _UIBarInsertLayoutData *_searchBarLayoutData;
    _UIBarInsertLayoutData *_scopeBarLayoutData;
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;
    NSMutableArray *_priorityOrderedLayout;
    NSMutableArray *_stackingOrderedLayout;
    NSArray *_restingHeights;
    BOOL _backgroundCoversContentOnly;
    BOOL _clientWantsBackgroundHidden;
    BOOL _useManualScrollEdgeAppearance;
    BOOL _clientWantsToPreserveSearchBarAcrossTransitions;
    BOOL _hidesSearchBarWhenScrolling;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    UIView *_animationContentClippingView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarContentViewLayout *_contentViewLayout;
    _UINavigationBarLargeTitleViewLayout *_largeTitleViewLayout;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_compactBackgroundViewLayout;
    _UIBarBackgroundLayout *_standardBackgroundViewLayout;
    double _backgroundExtension;
    double _requestedBackgroundViewAlpha;
    double _manualScrollEdgeAppearanceProgress;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
    UILabel *_weeTitleLabel;
    UIView *_canvasView;
    UISearchBar *_searchBar;
    long long _representedSearchLayoutState;
    _UINavigationBarPalette *_bottomPalette;
    double _largeTitleExposure;
    double _chromelessTransitionProgress;
    double _computedBackgroundViewAlpha;
    long long _apiVersion;
    struct CGSize _layoutSize;
    struct NSDirectionalEdgeInsets _largeTitleViewInsets;
}

@property (strong, nonatomic) UIView *animationContentClippingView; // @synthesize animationContentClippingView=_animationContentClippingView;
@property (nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property (nonatomic) BOOL backgroundCoversContentOnly; // @synthesize backgroundCoversContentOnly=_backgroundCoversContentOnly;
@property (nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property (strong, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, nonatomic) struct CGRect backgroundViewLayoutFrame;
@property (strong, nonatomic) _UINavigationBarPalette *bottomPalette; // @synthesize bottomPalette=_bottomPalette;
@property (readonly, nonatomic) struct CGRect bottomPaletteLayoutFrame;
@property (strong, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property (readonly, nonatomic) struct CGRect canvasViewLayoutFrame;
@property (readonly, nonatomic) double chromelessTransitionProgress; // @synthesize chromelessTransitionProgress=_chromelessTransitionProgress;
@property (nonatomic) BOOL clientWantsBackgroundHidden; // @synthesize clientWantsBackgroundHidden=_clientWantsBackgroundHidden;
@property (nonatomic) BOOL clientWantsToPreserveSearchBarAcrossTransitions; // @synthesize clientWantsToPreserveSearchBarAcrossTransitions=_clientWantsToPreserveSearchBarAcrossTransitions;
@property (strong, nonatomic) _UIBarBackgroundLayout *compactBackgroundViewLayout; // @synthesize compactBackgroundViewLayout=_compactBackgroundViewLayout;
@property (readonly, nonatomic) double computedBackgroundViewAlpha; // @synthesize computedBackgroundViewAlpha=_computedBackgroundViewAlpha;
@property (strong, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) _UINavigationBarContentViewLayout *contentViewLayout; // @synthesize contentViewLayout=_contentViewLayout;
@property (readonly, nonatomic) struct CGRect contentViewLayoutFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesSearchBarWhenScrolling; // @synthesize hidesSearchBarWhenScrolling=_hidesSearchBarWhenScrolling;
@property (readonly, nonatomic) double largeTitleExposure; // @synthesize largeTitleExposure=_largeTitleExposure;
@property (strong, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property (nonatomic) struct NSDirectionalEdgeInsets largeTitleViewInsets; // @synthesize largeTitleViewInsets=_largeTitleViewInsets;
@property (strong, nonatomic) _UINavigationBarLargeTitleViewLayout *largeTitleViewLayout; // @synthesize largeTitleViewLayout=_largeTitleViewLayout;
@property (readonly, nonatomic) struct CGRect largeTitleViewLayoutFrame;
@property (readonly, nonatomic) CDStruct_39925896 layoutHeights;
@property (nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property (nonatomic) double manualScrollEdgeAppearanceProgress; // @synthesize manualScrollEdgeAppearanceProgress=_manualScrollEdgeAppearanceProgress;
@property (strong, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
@property (readonly, nonatomic) struct CGRect promptViewLayoutFrame;
@property (strong, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property (readonly, nonatomic) struct CGRect refreshControlLayoutFrame;
@property (nonatomic) long long representedSearchLayoutState; // @synthesize representedSearchLayoutState=_representedSearchLayoutState;
@property (nonatomic) double requestedBackgroundViewAlpha; // @synthesize requestedBackgroundViewAlpha=_requestedBackgroundViewAlpha;
@property (readonly, copy, nonatomic) NSArray *restingHeights;
@property (strong, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (readonly, nonatomic) struct CGRect searchBarLayoutFrame;
@property (strong, nonatomic) _UIBarBackgroundLayout *standardBackgroundViewLayout; // @synthesize standardBackgroundViewLayout=_standardBackgroundViewLayout;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useManualScrollEdgeAppearance; // @synthesize useManualScrollEdgeAppearance=_useManualScrollEdgeAppearance;
@property (readonly, nonatomic, getter=isVariableHeight) BOOL variableHeight;
@property (strong, nonatomic) UILabel *weeTitleLabel; // @synthesize weeTitleLabel=_weeTitleLabel;
@property (readonly, nonatomic) struct CGRect weeTitleLabelLayoutFrame;

- (void).cxx_destruct;
- (void)_addLayoutItem:(id)arg1;
- (struct CGRect)_backgroundViewLayoutFrameWithRelevantMaxY:(double)arg1;
- (struct CGRect)_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)arg1;
- (struct CGRect)_canvasViewLayoutFrameWithPromptMaxY:(double)arg1;
- (struct CGRect)_contentViewLayoutFrameWithPromptMaxY:(double)arg1;
- (struct CGRect)_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)arg1;
- (struct CGRect)_refreshControlLayoutFrameWithContentOrCanvasMaxY:(double)arg1;
- (void)_removeLayoutItem:(id)arg1;
- (void)_reprioritizeLayoutItem:(id)arg1 toPriority:(long long)arg2;
- (void)_resolveContentAndCanvasLayouts;
- (struct CGRect)_searchBarLayoutFrameWithLargeTitleMaxY:(double)arg1;
- (void)_updateLargeTitleViewLayoutItem;
- (void)_updateLayoutOutputs;
- (void)_updateLayoutParametersForWidth:(double)arg1;
- (void)_updateRefreshControlLayoutData;
- (struct CGRect)backgroundViewLayoutFrameForcingExpandedHeight:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)finalizeStateFromTransition:(id)arg1;
- (id)init;
- (id)initWithLayout:(id)arg1;
- (void)installViewsInNavigationBar:(id)arg1;
- (void)interleaveViewsWithLayout:(id)arg1 inNavigationBar:(id)arg2;
- (id)layoutForMeasuringWidth:(double)arg1;
- (void)layoutViews;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordFromStateForTransition:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)removeAllViews;
- (void)removeViewsNotInLayout:(id)arg1;
- (void)updateLayout;

@end

