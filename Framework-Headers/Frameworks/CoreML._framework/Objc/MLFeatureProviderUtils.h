//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLFeatureProviderUtils : NSObject
{
}

+ (id)_featureValuesForNames:(id)arg1 providedBy:(id)arg2 error:(id *)arg3;
+ (BOOL)_vectorizeWithoutSizeCheckFeatureValues:(id)arg1 intoDoubleVector:(double *)arg2 stride:(unsigned long long)arg3 error:(id *)arg4;
+ (long long)_vectorizedSizeOfFeatureValues:(id)arg1 error:(id *)arg2;
+ (BOOL)canVectorizeAllFeaturesWithDescriptions:(id)arg1;
+ (BOOL)canVectorizeFeatureWithDescription:(id)arg1;
+ (id)lazyProviderWithFeaturesProvidedBy:(id)arg1 addedToFeaturesProvidedBy:(id)arg2;
+ (id)providerWithSubsetOfFeaturesNamed:(id)arg1 providedBy:(id)arg2;
+ (id)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 error:(id *)arg3;
+ (BOOL)vectorizeFeaturesProvidedBy:(id)arg1 featureNames:(id)arg2 intoDoubleVector:(double *)arg3 length:(unsigned long long)arg4 stride:(unsigned long long)arg5 error:(id *)arg6;

@end
