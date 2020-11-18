//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCNewsRestrictions : NSObject
{
}

+ (id)currentCountryCode;
+ (id)currentNewsRestrictions;
+ (BOOL)isNewsAvailable;
+ (BOOL)isNewsAvailableForCountryCode:(id)arg1;
+ (id)newsAvailableCountryCodes;
+ (id)newsRestrictionsForCountryCode:(id)arg1;
+ (id)newsUnavailableRestrictions;
+ (id)setOfActiveRestrictionUUIDs;
+ (id)setOfActiveRestrictionUUIDsForCountryCode:(id)arg1;

@end

