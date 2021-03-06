//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject
{
    NSMutableDictionary *_confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
    NSMutableDictionary *_confidenceThresholdByBlacklistedSceneIdentifierByROILabel;
}

+ (id)beachSceneNames;
+ (id)blacklistedSceneNamesByROILabel;
+ (id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)arg1 blacklisted:(BOOL)arg2;
+ (id)mountainSceneNames;
+ (id)natureSceneNames;
+ (id)nonNatureSceneNames;
+ (id)nonWaterSceneNames;
+ (id)sharedROISceneMatcher;
+ (id)urbanSceneNames;
+ (id)waterSceneNames;
+ (id)whitelistedSceneNamesByROILabel;
- (void).cxx_destruct;
- (id)confidenceThresholdByBlacklistedSceneIdentifierForROILabel:(id)arg1;
- (id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)arg1;

@end

