//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSObject, PHMomentShare, PXAssetsDataSource, PXCMMContext, PXCMMSendBackSuggestion;
@protocol OS_dispatch_queue;

@interface PXCMMSendBackSuggestionSource : PXObservable
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    unsigned long long _sourceType;
    BOOL _hasInitiatedFetchRequest;
    BOOL _shouldShowBanner;
    PXAssetsDataSource *_assetsDataSource;
    PHMomentShare *_originatingMomentShare;
    PXCMMSendBackSuggestion *_suggestion;
    PXCMMContext *_sendBackContext;
}

@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property (readonly, nonatomic) PHMomentShare *originatingMomentShare; // @synthesize originatingMomentShare=_originatingMomentShare;
@property (readonly, nonatomic) PXCMMContext *sendBackContext; // @synthesize sendBackContext=_sendBackContext;
@property (readonly, nonatomic) BOOL shouldShowBanner; // @synthesize shouldShowBanner=_shouldShowBanner;
@property (readonly, nonatomic) PXCMMSendBackSuggestion *suggestion; // @synthesize suggestion=_suggestion;

+ (id)_assetsInDateRanges:(id)arg1;
+ (id)_filterAssets:(id)arg1 byLocations:(id)arg2 maxDistanceMeters:(double)arg3;
+ (id)_sendBackFetchResultUsingOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2;
+ (id)_sendBackFetchResultUsingTimeLocationMatching:(id)arg1;
+ (id)new;
+ (id)sendBackContextOverlappingTimeFromStartDate:(id)arg1 endDate:(id)arg2 sourceType:(unsigned long long)arg3;
+ (id)sendBackContextTimeLocationMatching:(id)arg1 sourceType:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)_allMetadataAssets;
- (id)_createSendBackContext;
- (BOOL)_existingOverlappingMomentSharesFromOwnerForAssetCollection:(id)arg1;
- (void)_fetchQueue_fetchSuggestedSendBackContext;
- (id)_fetchSuggestedParticipantsForAssetCollection:(id)arg1;
- (void)_fetchSuggestedSendBackContext;
- (id)_sendBackFetchResultUsingPhotosGraph;
- (id)init;
- (id)initWithAssetsDataSource:(id)arg1 sourceType:(unsigned long long)arg2 originatingMomentShare:(id)arg3;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)sendBackContextPhotosGraphBasedWithSourceType:(unsigned long long)arg1;
- (void)setSendBackContext:(id)arg1;
- (void)setShouldShowBanner:(BOOL)arg1;
- (void)setSuggestion:(id)arg1;
- (void)startLoading;

@end

