//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBAppId, _INPBBuildId, _INPBIntentSupport, _INPBLocalizedProject, _INPBPlatformSupport;

@protocol _INPBAppBundleInfo <NSObject>

@property (strong, nonatomic) _INPBAppId *appId;
@property (strong, nonatomic) _INPBBuildId *buildId;
@property (readonly, nonatomic) BOOL hasAppId;
@property (readonly, nonatomic) BOOL hasBuildId;
@property (copy, nonatomic) NSArray *intentSupports;
@property (readonly, nonatomic) unsigned long long intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects;
@property (readonly, nonatomic) unsigned long long localizedProjectsCount;
@property (copy, nonatomic) NSArray *supportedPlatforms;
@property (readonly, nonatomic) unsigned long long supportedPlatformsCount;

+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;
- (void)addIntentSupport:(_INPBIntentSupport *)arg1;
- (void)addLocalizedProjects:(_INPBLocalizedProject *)arg1;
- (void)addSupportedPlatforms:(_INPBPlatformSupport *)arg1;
- (void)clearIntentSupports;
- (void)clearLocalizedProjects;
- (void)clearSupportedPlatforms;
- (_INPBIntentSupport *)intentSupportAtIndex:(unsigned long long)arg1;
- (_INPBLocalizedProject *)localizedProjectsAtIndex:(unsigned long long)arg1;
- (_INPBPlatformSupport *)supportedPlatformsAtIndex:(unsigned long long)arg1;
@end
