//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSNumber;

@interface SANPSkipTimeInterval : SADomainCommand
{
}

@property (copy, nonatomic) NSNumber *adjustmentInMilliseconds;

+ (id)skipTimeInterval;
+ (id)skipTimeIntervalWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
