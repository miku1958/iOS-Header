//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SAGlance, SASiriSupport, SAStarkSupport;

@interface SAAppInfo : SADomainObject
{
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSDictionary *appNameMap;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *carPlayAlternativeDisplayName;
@property (copy, nonatomic) NSDictionary *carPlayAlternativeDisplayNameMap;
@property (copy, nonatomic) NSString *displayAppName;
@property (copy, nonatomic) NSDictionary *displayAppNameMap;
@property (strong, nonatomic) SAGlance *glance;
@property (copy, nonatomic) NSNumber *isNanoApp;
@property (copy, nonatomic) NSNumber *nowPlayingAppWithBrowsableContent;
@property (copy, nonatomic) NSString *providerName;
@property (strong, nonatomic) SASiriSupport *siriSupport;
@property (copy, nonatomic) NSString *spotlightName;
@property (copy, nonatomic) NSDictionary *spotlightNameMap;
@property (strong, nonatomic) SAStarkSupport *starkSupport;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSArray *supportedSchemes;

+ (id)appInfo;
+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

