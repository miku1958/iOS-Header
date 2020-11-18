//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSObject, PICompositionController, PLEditSource, PUPhotoEditImageValues;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PUPhotoEditValuesCalculator : PXObservable
{
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_currentGeometricValues;
    PUPhotoEditImageValues *_initialImageValues;
    PUPhotoEditImageValues *_initialGeometricValues;
    PICompositionController *_compositionControllerForCurrentValues;
    NSObject<OS_dispatch_queue> *_imageValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingImageValuesGroup;
    NSObject<OS_dispatch_queue> *_geometricValuesComputationQueue;
    NSObject<OS_dispatch_group> *_computingGeometricValuesGroup;
    long long _currentSourceSelection;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PICompositionController *_compositionController;
    CDStruct_1b6d18a9 _videoFrameTime;
}

@property (strong, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property (strong, nonatomic) PLEditSource *editSource; // @synthesize editSource=_editSource;
@property (readonly, nonatomic) BOOL hasImageValues;
@property (strong, nonatomic) PLEditSource *overcaptureEditSource; // @synthesize overcaptureEditSource=_overcaptureEditSource;
@property (nonatomic) CDStruct_1b6d18a9 videoFrameTime; // @synthesize videoFrameTime=_videoFrameTime;

+ (BOOL)shouldRunGeometricAutoCalculatorForSource:(id)arg1;
- (void).cxx_destruct;
- (void)_ensureCurrentGeometricValuesAreComputed;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialGeometricValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (BOOL)_geometricCurrentValuesCacheIsValid;
- (BOOL)_imageCurrentValuesCacheIsValid;
- (id)apertureValuesWithAccuracy:(long long)arg1;
- (id)autoCropValuesWithAccuracy:(long long)arg1;
- (id)autoPerspectiveValuesWithAccuracy:(long long)arg1;
- (void)computeAutoEnhanceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)currentEditSource;
- (id)init;
- (void)invalidate;
- (id)mutableChangeObject;
- (id)overcaptureSmartToneStatisticsWithAccuracy:(long long)arg1;
- (id)portraitValuesWithAccuracy:(long long)arg1;
- (void)precomputeGeometricValues;
- (void)precomputeImageValues;
- (void)precomputeImageValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)precomputeImageValuesWithOptionalCompletion:(CDUnknownBlockType)arg1;
- (id)primarySmartToneStatisticsWithAccuracy:(long long)arg1;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;
- (void)updateAdjustmentSmartToneStatistics:(id)arg1 withAccuracy:(long long)arg2;

@end
