//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface REFrequencyFeatureTransformer : REFeatureTransformer
{
}

+ (id)frequencyTransformWithCount:(unsigned long long)arg1;
+ (id)frequencyTransformWithCount:(unsigned long long)arg1 minimumValidCount:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)increaseCountForFeatureValue:(id)arg1;

@end
