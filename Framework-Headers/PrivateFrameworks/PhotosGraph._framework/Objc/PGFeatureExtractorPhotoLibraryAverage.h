//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeatureExtractor.h>

@class MAFeatureExtractor, NSArray;

@interface PGFeatureExtractorPhotoLibraryAverage : PGFeatureExtractor
{
    MAFeatureExtractor *_assetFeatureExtractor;
    NSArray *_assetFetchOptionPropertySet;
    NSArray *_featureNames;
}

@property (readonly, nonatomic) MAFeatureExtractor *assetFeatureExtractor; // @synthesize assetFeatureExtractor=_assetFeatureExtractor;
@property (readonly, nonatomic) NSArray *assetFetchOptionPropertySet; // @synthesize assetFetchOptionPropertySet=_assetFetchOptionPropertySet;
@property (readonly, nonatomic) NSArray *featureNames; // @synthesize featureNames=_featureNames;

+ (BOOL)preCalculateFeatureVectorWithPhotoLibrary:(id)arg1 assetFeatureExtractor:(id)arg2 assetFetchOptionPropertySet:(id)arg3 error:(id *)arg4;
+ (id)preCalculatedFloatVector;
+ (void)resetPreCalculatedFeatureVector;
+ (void)setPreCalculatedFloatVector:(id)arg1;
- (void).cxx_destruct;
- (long long)featureLength;
- (id)floatVectorWithEntity:(id)arg1 error:(id *)arg2;
- (id)initWithAssetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2;
- (id)name;

@end

