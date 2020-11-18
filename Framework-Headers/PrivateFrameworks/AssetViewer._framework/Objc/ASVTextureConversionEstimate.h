//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetViewer/ASVTextureDescription.h>

@interface ASVTextureConversionEstimate : ASVTextureDescription
{
    long long _converterType;
    CDStruct_ba838cea _estimatedMemoryDelta;
}

@property (nonatomic) long long converterType; // @synthesize converterType=_converterType;
@property (nonatomic) CDStruct_ba838cea estimatedMemoryDelta; // @synthesize estimatedMemoryDelta=_estimatedMemoryDelta;
@property (readonly, nonatomic) unsigned long long weight;

+ (id)conversionEstimatesFromTextureDescriptions:(id)arg1 toFitAvailableMemory:(unsigned long long)arg2 withConverters:(id)arg3 preferredMaxTextureSize:(long long *)arg4 outcome: /* Error: Ran out of types for this method. */;
+ (id)conversionEstimatesSortedByPeakMemoryUsage:(id)arg1;
+ (id)heaviestConversionEstimate:(id)arg1 withMinimumDestinationSize: /* Error: Ran out of types for this method. */;
+ (unsigned long long)peakMemoryForConversionEstimates:(id)arg1;
+ (id)textureDescription:(id)arg1 downsampledToTryAndFitDestinationWithinSize: /* Error: Ran out of types for this method. */;
- (id)debugDescription;
- (id)initWithTextureDescription:(id)arg1 converter:(id)arg2;
- (unsigned long long)peakMemoryUsage;
- (void)updateFromConverter:(id)arg1;

@end
