//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGFeatureTransformersForFeatureExtractors : NSObject
{
    NSMutableDictionary *featureTransformersForFeatureExtractors;
}

@property (strong, nonatomic) NSMutableDictionary *featureTransformersForFeatureExtractors; // @synthesize featureTransformersForFeatureExtractors;

- (void).cxx_destruct;
- (void)addFeatureTransformers:(id)arg1 forFeatureExtractorName:(id)arg2;
- (id)featureTransformersForFeatureExtractorName:(id)arg1;
- (id)init;

@end
