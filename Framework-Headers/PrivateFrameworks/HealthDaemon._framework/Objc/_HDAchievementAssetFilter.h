//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/_HKAchievementDefinitionLoaderFilter-Protocol.h>

@class NSSet;

@interface _HDAchievementAssetFilter : NSObject <_HKAchievementDefinitionLoaderFilter>
{
    NSSet *_allEarnedDefinitionIdentifiers;
}

- (void).cxx_destruct;
- (BOOL)_isAchievementDefinitionExpired:(id)arg1;
- (BOOL)_wasAchievementDefinitionEverEarned:(id)arg1;
- (BOOL)areAssetsNeededForAchievementDefinition:(id)arg1;
- (BOOL)areStickersNeededAtAll;
- (BOOL)areStickersNeededForAchievementDefinition:(id)arg1;
- (id)initWithAllEarnedDefinitionIdentifiers:(id)arg1;

@end

