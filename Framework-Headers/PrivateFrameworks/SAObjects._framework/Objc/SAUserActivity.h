//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAUserActivity : SADomainObject
{
}

@property (copy, nonatomic) NSString *internalGUID;
@property (nonatomic) BOOL isEligibleForReminders;

+ (id)userActivity;
+ (id)userActivityWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

