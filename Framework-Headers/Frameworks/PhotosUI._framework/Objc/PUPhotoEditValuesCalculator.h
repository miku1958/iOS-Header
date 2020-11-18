//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CIImage, PLPhotoEditModel, PUPhotoEditImageValues;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUPhotoEditValuesCalculator : NSObject
{
    PUPhotoEditImageValues *_currentImageValues;
    PUPhotoEditImageValues *_initialImageValues;
    PLPhotoEditModel *_photoEditModelForCurrentValues;
    NSObject<OS_dispatch_queue> *_computationQueue;
    NSObject<OS_dispatch_group> *_computingValuesGroup;
    CIImage *_baseImage;
    PLPhotoEditModel *_photoEditModel;
}

@property (strong, nonatomic) CIImage *baseImage; // @synthesize baseImage=_baseImage;
@property (strong, nonatomic) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;

- (void).cxx_destruct;
- (void)_ensureCurrentImageValuesAreComputed;
- (void)_ensureInitialImageValuesAreComputed;
- (BOOL)_imageCurrentValuesCacheIsValid;
- (void)computeAutoEnhanceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)precomputeImageValues;
- (id)smartBlackAndWhiteStatisticsWithAccuracy:(long long)arg1;
- (double)smartColorAutoSuggestion;
- (id)smartColorStatisticsWithAccuracy:(long long)arg1;
- (double)smartToneAutoSuggestion;
- (id)smartToneStatisticsWithAccuracy:(long long)arg1;

@end
