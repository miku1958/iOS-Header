//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface _SFSecIdentityPreferencesController : NSObject
{
    NSMutableSet *_domainsAndPortsToUseOnlyAvailableIdentityWithoutPrompting;
}

+ (id)ephemeralSecIdentityPreferencesController;
+ (id)sharedPersistentSecIdentityPreferencesController;
- (void).cxx_destruct;
- (id)_initUsingEphemeralStorage:(BOOL)arg1;
- (void)saveShouldUseOnlyAvailableIdentityWithoutPrompting:(BOOL)arg1 forDomainAndPort:(id)arg2;
- (BOOL)shouldUseOnlyAvailableIdentityWithoutPromptingForDomainAndPort:(id)arg1;

@end
