//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSDate, NSSet;

@interface PHAssetSceneAnalysisProperties : PHAssetPropertySet
{
    unsigned long long _sceneAnalysisVersion;
    NSDate *_sceneAnalysisTimestamp;
    NSData *_distanceIdentity;
}

@property (readonly, nonatomic) NSData *distanceIdentity; // @synthesize distanceIdentity=_distanceIdentity;
@property (readonly, nonatomic) NSDate *sceneAnalysisTimestamp; // @synthesize sceneAnalysisTimestamp=_sceneAnalysisTimestamp;
@property (readonly, nonatomic) unsigned long long sceneAnalysisVersion; // @synthesize sceneAnalysisVersion=_sceneAnalysisVersion;
@property (readonly, copy, nonatomic) NSSet *sceneClassifications;

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

