//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol CAMCVCStillImageResultCoordinatorDelegate;

@interface CAMCVCStillImageResultCoordinator : NSObject
{
    BOOL _expectingPairedVideo;
    BOOL _allowMultipleCaptures;
    BOOL _shouldReturnFilteredPhotosAsSingleAsset;
    BOOL __didReceiveForceRemainingDispatchesIfPossible;
    id<CAMCVCStillImageResultCoordinatorDelegate> _delegate;
    NSString *_identifier;
    NSSet *_allExpectedResultSpecifiers;
    NSMutableSet *__receivedPhotos;
    NSMutableSet *__receivedVideos;
    NSMutableSet *__photoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet *__videoResultSpecifiersDelayingForcedDispatch;
    NSMutableSet *__handledResultSpecifiers;
    NSMutableSet *__dispatchedResultSpecifiers;
    NSMutableDictionary *__pendingPhotoProperties;
    NSMutableDictionary *__pendingVideoProperties;
    NSMutableDictionary *__pendingAssetAdjustments;
}

@property (readonly, nonatomic, getter=_isDelayingForcedDispatch) BOOL _delayingForcedDispatch;
@property (nonatomic, setter=_setDidReceiveForceRemainingDispatchesIfPossible:) BOOL _didReceiveForceRemainingDispatchesIfPossible; // @synthesize _didReceiveForceRemainingDispatchesIfPossible=__didReceiveForceRemainingDispatchesIfPossible;
@property (readonly, nonatomic) NSMutableSet *_dispatchedResultSpecifiers; // @synthesize _dispatchedResultSpecifiers=__dispatchedResultSpecifiers;
@property (readonly, nonatomic) NSMutableSet *_handledResultSpecifiers; // @synthesize _handledResultSpecifiers=__handledResultSpecifiers;
@property (readonly, nonatomic) NSMutableDictionary *_pendingAssetAdjustments; // @synthesize _pendingAssetAdjustments=__pendingAssetAdjustments;
@property (readonly, nonatomic) NSMutableDictionary *_pendingPhotoProperties; // @synthesize _pendingPhotoProperties=__pendingPhotoProperties;
@property (readonly, nonatomic) NSMutableDictionary *_pendingVideoProperties; // @synthesize _pendingVideoProperties=__pendingVideoProperties;
@property (readonly, nonatomic) NSMutableSet *_photoResultSpecifiersDelayingForcedDispatch; // @synthesize _photoResultSpecifiersDelayingForcedDispatch=__photoResultSpecifiersDelayingForcedDispatch;
@property (readonly, nonatomic) NSMutableSet *_receivedPhotos; // @synthesize _receivedPhotos=__receivedPhotos;
@property (readonly, nonatomic) NSMutableSet *_receivedVideos; // @synthesize _receivedVideos=__receivedVideos;
@property (readonly, nonatomic) NSMutableSet *_videoResultSpecifiersDelayingForcedDispatch; // @synthesize _videoResultSpecifiersDelayingForcedDispatch=__videoResultSpecifiersDelayingForcedDispatch;
@property (readonly, nonatomic) NSSet *allExpectedResultSpecifiers; // @synthesize allExpectedResultSpecifiers=_allExpectedResultSpecifiers;
@property (readonly, nonatomic) BOOL allowMultipleCaptures; // @synthesize allowMultipleCaptures=_allowMultipleCaptures;
@property (readonly, weak, nonatomic) id<CAMCVCStillImageResultCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL shouldReturnFilteredPhotosAsSingleAsset; // @synthesize shouldReturnFilteredPhotosAsSingleAsset=_shouldReturnFilteredPhotosAsSingleAsset;

- (void).cxx_destruct;
- (BOOL)_attemptDispatchForPairWithFilteredResultSpecifiers:(unsigned long long)arg1 unfilteredResultSpecifiers:(unsigned long long)arg2 forceRemainingDispatches:(BOOL)arg3;
- (BOOL)_attemptDispatchForResultSpecifiers:(unsigned long long)arg1 forceRemainingDispatches:(BOOL)arg2;
- (void)_dispatchPendingPropertiesForced:(BOOL)arg1;
- (id)_errorForResultSpecifiers:(unsigned long long)arg1 allowMissingVideo:(BOOL)arg2;
- (id)_errorWithDescription:(id)arg1 code:(long long)arg2;
- (BOOL)_isWaitingOnResultSpecifiers:(unsigned long long)arg1;
- (void)delayForcedDispatchForPhotoResultSpecifiers:(unsigned long long)arg1;
- (void)delayForcedDispatchForVideoResultSpecifiers:(unsigned long long)arg1;
- (void)forceRemainingDispatchesIfPossible;
- (id)initWithDelegate:(id)arg1 identifier:(id)arg2 allExpectedResultSpecifiers:(id)arg3 isExpectingPairedVideo:(BOOL)arg4 allowMultipleCaptures:(BOOL)arg5 shouldReturnFilteredPhotosAsSingleAsset:(BOOL)arg6;
- (void)updatePhotoProperties:(id)arg1 assetAdjustments:(id)arg2 forResultSpecifiers:(unsigned long long)arg3;
- (void)updateVideoProperties:(id)arg1 forResultSpecifiers:(unsigned long long)arg2;

@end

