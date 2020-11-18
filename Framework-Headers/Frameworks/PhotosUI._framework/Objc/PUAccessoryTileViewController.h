//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUAccessoryContentViewControllerDelegate-Protocol.h>

@class NSString, PUAssetReference, PUAssetViewModel, UIView, UIViewController;
@protocol PUAccessoryContentViewController, PUAccessoryTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryTileViewController : PUTileViewController <PUAccessoryContentViewControllerDelegate>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    struct {
        BOOL respondsToViewHostingGestureRecognizers;
        BOOL respondsToWillHideToolbarWhenShowingAccessoryView;
    } _delegateFlags;
    struct {
        BOOL contentViewController;
        BOOL loadedContentViewController;
        BOOL contentViewMetrics;
        BOOL contentBounds;
        BOOL masterContentOffset;
    } _needsUpdateFlags;
    BOOL __wasActiveOnLastMasterContentOffsetChange;
    id<PUAccessoryTileViewControllerDelegate> _delegate;
    PUAssetViewModel *_assetViewModel;
    PUAssetReference *_assetReference;
    UIViewController<PUAccessoryContentViewController> *__contentViewController;
    UIViewController<PUAccessoryContentViewController> *__loadedContentViewController;
    UIView *__contentView;
    long long __contentInsetsChangeReason;
    double __minimumVisibleHeight;
    double __editorHeightDelta;
    struct CGRect __contentBounds;
    struct CGRect __untransformedMasterContentFrame;
    struct UIEdgeInsets __contentInsets;
    struct CGRect __keyboardFrame;
}

@property (nonatomic, setter=_setContentBounds:) struct CGRect _contentBounds; // @synthesize _contentBounds=__contentBounds;
@property (nonatomic, setter=_setContentInsets:) struct UIEdgeInsets _contentInsets; // @synthesize _contentInsets=__contentInsets;
@property (nonatomic, setter=_setContentInsetsChangeReason:) long long _contentInsetsChangeReason; // @synthesize _contentInsetsChangeReason=__contentInsetsChangeReason;
@property (strong, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property (strong, nonatomic, setter=_setContentViewController:) UIViewController<PUAccessoryContentViewController> *_contentViewController; // @synthesize _contentViewController=__contentViewController;
@property (nonatomic, setter=_setEditorHeightDelta:) double _editorHeightDelta; // @synthesize _editorHeightDelta=__editorHeightDelta;
@property (nonatomic, setter=_setKeyboardFrame:) struct CGRect _keyboardFrame; // @synthesize _keyboardFrame=__keyboardFrame;
@property (strong, nonatomic, setter=_setLoadedContentViewController:) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController; // @synthesize _loadedContentViewController=__loadedContentViewController;
@property (nonatomic, setter=_setMinimumVisibleHeight:) double _minimumVisibleHeight; // @synthesize _minimumVisibleHeight=__minimumVisibleHeight;
@property (nonatomic, setter=_setUntransformedMasterContentFrame:) struct CGRect _untransformedMasterContentFrame; // @synthesize _untransformedMasterContentFrame=__untransformedMasterContentFrame;
@property (nonatomic, setter=_setWasActiveOnLastMasterContentOffsetChange:) BOOL _wasActiveOnLastMasterContentOffsetChange; // @synthesize _wasActiveOnLastMasterContentOffsetChange=__wasActiveOnLastMasterContentOffsetChange;
@property (strong, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property (strong, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUAccessoryTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleScheduledUpdate;
- (void)_invalidateContentBounds;
- (void)_invalidateContentViewController;
- (void)_invalidateContentViewMetrics;
- (void)_invalidateLoadedContentViewController;
- (void)_invalidateMasterContentOffset;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_setNeedsUpdate;
- (void)_updateContentBoundsIfNeeded;
- (void)_updateContentViewControllerIfNeeded;
- (void)_updateContentViewMetricsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLoadedContentViewControllerIfNeeded;
- (void)_updateMasterContentOffsetIfNeeded;
- (void)accessoryContentViewController:(id)arg1 editorHeightDidChange:(double)arg2;
- (void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1;
- (id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)becomeReusable;
- (void)dealloc;
- (void)didChangeActive;
- (id)initWithReuseIdentifier:(id)arg1;
- (BOOL)isLocationFromProviderInContentArea:(id)arg1;
- (void)viewDidLoad;

@end
