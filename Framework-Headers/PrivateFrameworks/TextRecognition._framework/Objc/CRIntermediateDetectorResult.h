//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CRIntermediateDetectorResult : NSObject
{
    NSMutableArray *_pyramidPreIntraScaleNMSTextFeatures;
    NSMutableArray *_pyramidPostIntraScaleNMSTextFeatures;
    NSMutableArray *_pyramidPostInterScaleNMSTextFeatures;
    NSMutableArray *_pyramidScaleSize;
}

@property (strong, nonatomic) NSMutableArray *pyramidPostInterScaleNMSTextFeatures; // @synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures;
@property (strong, nonatomic) NSMutableArray *pyramidPostIntraScaleNMSTextFeatures; // @synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures;
@property (strong, nonatomic) NSMutableArray *pyramidPreIntraScaleNMSTextFeatures; // @synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures;
@property (strong, nonatomic) NSMutableArray *pyramidScaleSize; // @synthesize pyramidScaleSize=_pyramidScaleSize;

- (void).cxx_destruct;
- (id)initWithNumberOfScales:(long long)arg1;

@end
