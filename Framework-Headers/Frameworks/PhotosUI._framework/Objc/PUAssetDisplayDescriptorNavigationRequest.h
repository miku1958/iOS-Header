//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSDate, NSString, NSTimer, PUAssetReference, PUBrowsingViewModel;

__attribute__((visibility("hidden")))
@interface PUAssetDisplayDescriptorNavigationRequest : NSObject <PUBrowsingViewModelChangeObserver>
{
    NSTimer *_timeOutTimer;
    BOOL _hasSeenContentChange;
    BOOL __isPerformingChanges;
    BOOL __isUpdating;
    BOOL __needsUpdateFoundTargetAssetReference;
    BOOL __needsUpdateArrived;
    BOOL __needsUpdateDone;
    BOOL __seeked;
    BOOL __arrived;
    BOOL __timedOut;
    PUBrowsingViewModel *_viewModel;
    PUAssetReference *_targetAssetReference;
    NSDate *_targetModificationDate;
    double _timeOut;
    CDUnknownBlockType _completionHandler;
    PUAssetReference *__foundTargetAssetReference;
    CDStruct_1b6d18a9 _targetSeekTime;
}

@property (nonatomic, setter=_setArrived:) BOOL _arrived; // @synthesize _arrived=__arrived;
@property (strong, nonatomic, setter=_setFoundTargetAssetReference:) PUAssetReference *_foundTargetAssetReference; // @synthesize _foundTargetAssetReference=__foundTargetAssetReference;
@property (nonatomic, setter=_setPerformingChanges:) BOOL _isPerformingChanges; // @synthesize _isPerformingChanges=__isPerformingChanges;
@property (nonatomic, setter=_setUpdating:) BOOL _isUpdating; // @synthesize _isUpdating=__isUpdating;
@property (nonatomic, setter=_setNeedsUpdateArrived:) BOOL _needsUpdateArrived; // @synthesize _needsUpdateArrived=__needsUpdateArrived;
@property (nonatomic, setter=_setNeedsUpdateDone:) BOOL _needsUpdateDone; // @synthesize _needsUpdateDone=__needsUpdateDone;
@property (nonatomic, setter=_setNeedsUpdateFoundTargetAssetReference:) BOOL _needsUpdateFoundTargetAssetReference; // @synthesize _needsUpdateFoundTargetAssetReference=__needsUpdateFoundTargetAssetReference;
@property (nonatomic, setter=_setSeeked:) BOOL _seeked; // @synthesize _seeked=__seeked;
@property (nonatomic, setter=_setTimedOut:) BOOL _timedOut; // @synthesize _timedOut=__timedOut;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUAssetReference *targetAssetReference; // @synthesize targetAssetReference=_targetAssetReference;
@property (strong, nonatomic) NSDate *targetModificationDate; // @synthesize targetModificationDate=_targetModificationDate;
@property (nonatomic) CDStruct_1b6d18a9 targetSeekTime; // @synthesize targetSeekTime=_targetSeekTime;
@property (nonatomic) double timeOut; // @synthesize timeOut=_timeOut;
@property (strong, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_assertInsideChangeBlock;
- (void)_assertInsideUpdate;
- (void)_cleanUpWhenDone;
- (void)_finishRequest;
- (id)_infoMessage;
- (void)_invalidateArrived;
- (void)_invalidateDone;
- (void)_invalidateFoundTargetAssetReference;
- (id)_navigationRequestError;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)_updateArrivedIfNeeded;
- (void)_updateCurrentAssetReference;
- (void)_updateDoneIfNeeded;
- (void)_updateFoundTargetAssetReferenceIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateSeeking;
- (void)dealloc;
- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end
