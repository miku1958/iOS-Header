//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString, PUAssetViewModel, PUBrowsingSession, PUChangeDirectionValueFilter, PXNumberAnimator, UIPanGestureRecognizer;
@protocol PUAccessoryVisibilityInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryVisibilityInteractionController : NSObject <PXChangeObserver, UIGestureRecognizerDelegate>
{
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    struct {
        BOOL contentOffset;
    } _needsUpdateFlags;
    struct {
        BOOL respondsToCanBeginAtLocationFromProvider;
        BOOL respondsToDidEnd;
        BOOL respondsToIsLocationFromProviderInAccessoryContent;
        BOOL respondsToSetAccessoryVisibleChangeReason;
    } _delegateFlags;
    id<PUAccessoryVisibilityInteractionControllerDelegate> _delegate;
    PUBrowsingSession *_browsingSession;
    UIPanGestureRecognizer *_panGestureRecognizer;
    PUAssetViewModel *__assetViewModel;
    PXNumberAnimator *__overridingContentOffsetY;
    PXNumberAnimator *__contentOffsetOverrideFactor;
    PUChangeDirectionValueFilter *__verticalDirectionValueFilter;
    PUChangeDirectionValueFilter *__swipeDirectionValueFilter;
    NSHashTable *__dependentScrollViews;
    struct CGPoint __initialContentOffset;
}

@property (strong, nonatomic, setter=_setAssetViewModel:) PUAssetViewModel *_assetViewModel; // @synthesize _assetViewModel=__assetViewModel;
@property (strong, nonatomic, setter=_setContentOffsetOverrideFactor:) PXNumberAnimator *_contentOffsetOverrideFactor; // @synthesize _contentOffsetOverrideFactor=__contentOffsetOverrideFactor;
@property (readonly, nonatomic) NSHashTable *_dependentScrollViews; // @synthesize _dependentScrollViews=__dependentScrollViews;
@property (nonatomic, setter=_setInitialContentOffset:) struct CGPoint _initialContentOffset; // @synthesize _initialContentOffset=__initialContentOffset;
@property (strong, nonatomic, setter=_setOverridingContentOffsetY:) PXNumberAnimator *_overridingContentOffsetY; // @synthesize _overridingContentOffsetY=__overridingContentOffsetY;
@property (strong, nonatomic, setter=_setSwipeDirectionValueFilter:) PUChangeDirectionValueFilter *_swipeDirectionValueFilter; // @synthesize _swipeDirectionValueFilter=__swipeDirectionValueFilter;
@property (strong, nonatomic, setter=_setVerticalDirectionValueFilter:) PUChangeDirectionValueFilter *_verticalDirectionValueFilter; // @synthesize _verticalDirectionValueFilter=__verticalDirectionValueFilter;
@property (strong, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUAccessoryVisibilityInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_currentAssetViewModel;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleScheduledUpdate;
- (void)_invalidateContentOffset;
- (BOOL)_needsUpdate;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)_setAccessoryVisible:(BOOL)arg1;
- (void)_setNeedsUpdate;
- (void)_updateContentOffsetIfNeeded;
- (void)_updateGestureRecognizers;
- (void)_updateIfNeeded;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end
