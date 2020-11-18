//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFPhotosFaceUtilities : NSObject
{
}

+ (id)bestMergeCandidateFaceFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3;
+ (struct CGSize)faceTileSizeAdjustingForImageAspectRatio:(struct CGSize)arg1 imgWidth:(double)arg2 imgHeight:(double)arg3;
+ (BOOL)getCropRectForPortraitImage:(struct CGRect *)arg1 size:(double)arg2 imgWidth:(double)arg3 imgHeight:(double)arg4 centerX:(double)arg5 centerY:(double)arg6;
+ (long long)qualityMeasureForFace:(id)arg1 countOfFacesOnAsset:(unsigned long long)arg2;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3;
+ (id)selectRepresentativeFromFaces:(id)arg1 qualityMeasureByLocalIdentifier:(id)arg2 representativenessByCSN:(id)arg3 candidateFaces:(id)arg4;
+ (id)sortedViableMergeCandidateFacesFor:(id)arg1 from:(id)arg2 ignoreSourceAssetDimensions:(BOOL)arg3 matchScores:(id *)arg4;

@end

