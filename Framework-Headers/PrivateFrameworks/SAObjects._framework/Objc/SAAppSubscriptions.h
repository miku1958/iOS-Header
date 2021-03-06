//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

#import <SAObjects/SABackgroundContextObject-Protocol.h>

@class NSArray, NSString;

@interface SAAppSubscriptions : SADomainObject <SABackgroundContextObject>
{
}

@property (copy, nonatomic) NSArray *activeSubscriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)appSubscriptions;
+ (id)appSubscriptionsWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

