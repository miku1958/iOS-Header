//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SAAppsGetRestrictedApps : SABaseClientBoundCommand
{
}

@property (copy, nonatomic) NSArray *appIds;
@property (copy, nonatomic) NSString *executionEnvironment;

+ (id)getRestrictedApps;
+ (id)getRestrictedAppsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;

@end
