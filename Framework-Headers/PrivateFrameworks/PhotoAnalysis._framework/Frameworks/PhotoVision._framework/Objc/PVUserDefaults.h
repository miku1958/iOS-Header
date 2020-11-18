//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PVUserDefaults : NSObject
{
}

+ (BOOL)_boolValueForKey:(id)arg1 defaultValue:(BOOL)arg2;
+ (double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (BOOL)faceAutonamingEnabled;
+ (float)faceAutonamingThreshold;
+ (long long)faceClusteringDelay;
+ (BOOL)faceClusteringLogEnabled;
+ (BOOL)faceClusteringPerfLogEnabled;
+ (float)faceClusteringThreshold;
+ (long long)faceCountToEnableFacesNamingFlow;
+ (long long)faceGroupCountToEnableFacesNamingFlow;
+ (float)faceMergeFaceOverlapThreshold;
+ (float)faceMergeFaceprintDistanceThreshold;
+ (float)facePrimarySuggestionsThreshold;
+ (float)faceRecallThreshold;
+ (void)initialize;
+ (long long)maxFaceCountForClustering;
+ (long long)minFaceCountToTriggerClustering;

@end

