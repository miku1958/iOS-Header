//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureSet.h>

@class REFeature;

@interface _RESmallFeatureSet : REFeatureSet
{
    REFeature *_features[3];
}

- (void).cxx_destruct;
- (id)allFeatures;
- (BOOL)containsFeature:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)featureWithName:(id)arg1;
- (id)init;
- (id)initWithFeature:(id)arg1;
- (id)initWithFeatures:(id)arg1;

@end
