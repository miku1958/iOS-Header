//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeatureTransformer-Protocol.h>

@class NSArray;
@protocol PGFeatureAugmenter;

@protocol PGFeatureAugmenter <PGFeatureTransformer>
+ (id<PGFeatureAugmenter>)instanceWithParameters:(NSArray *)arg1 error:(id *)arg2;
- (NSArray *)floatVectorsWithFloatVectors:(NSArray *)arg1 error:(id *)arg2;
@end

