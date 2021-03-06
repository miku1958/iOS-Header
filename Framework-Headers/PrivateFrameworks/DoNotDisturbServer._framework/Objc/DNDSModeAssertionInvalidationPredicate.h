//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate
{
}

@property (readonly, nonatomic) unsigned long long predicateType; // @dynamic predicateType;

+ (id)predicateForAnyAssertion;
+ (id)predicateForAssertionClientIdentifiers:(id)arg1;
+ (id)predicateForAssertionUUIDs:(id)arg1;
+ (id)predicateForAssertionsTakenBeforeDate:(id)arg1;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;

@end

