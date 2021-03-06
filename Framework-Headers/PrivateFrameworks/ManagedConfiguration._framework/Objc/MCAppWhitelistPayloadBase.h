//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSArray;

@interface MCAppWhitelistPayloadBase : MCPayload
{
    BOOL _allowAccessWithoutPasscode;
    BOOL _forceAllowSupervisorAccess;
    NSArray *_whitelistedAppsAndOptions;
}

@property (nonatomic) BOOL allowAccessWithoutPasscode; // @synthesize allowAccessWithoutPasscode=_allowAccessWithoutPasscode;
@property (nonatomic) BOOL forceAllowSupervisorAccess; // @synthesize forceAllowSupervisorAccess=_forceAllowSupervisorAccess;
@property (strong, nonatomic) NSArray *whitelistedAppsAndOptions; // @synthesize whitelistedAppsAndOptions=_whitelistedAppsAndOptions;

+ (id)knownOptionsKeys;
+ (id)knownUserEnabledOptionKeys;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)restrictions;
- (id)stubDictionary;
- (id)verboseDescription;

@end

