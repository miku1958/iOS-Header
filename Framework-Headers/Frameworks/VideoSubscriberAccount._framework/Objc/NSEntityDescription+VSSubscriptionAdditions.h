//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSEntityDescription.h>

@class NSAttributeDescription;

@interface NSEntityDescription (VSSubscriptionAdditions)

@property (strong, nonatomic, getter=vs_referenceValueAttribute, setter=vs_setReferenceValueAttribute:) NSAttributeDescription *referenceValueAttribute;

+ (id)vs_subscriptionEntityForVersion:(long long)arg1;
- (void)vs_setUserInfoValue:(id)arg1 forKey:(id)arg2;
@end

