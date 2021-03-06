//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

@class NSString;

@interface EKSuggestedEventInfo : EKObject
{
}

@property (nonatomic) unsigned long long changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;
@property (copy, nonatomic) NSString *opaqueKey;
@property (nonatomic) double timestamp;
@property (copy, nonatomic) NSString *uniqueKey;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownSingleValueKeysForComparison;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3;
- (id)initWithEventStore:(id)arg1 opaqueKey:(id)arg2 uniqueKey:(id)arg3 extractionGroupIdentifier:(id)arg4;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2;
- (id)initWithOpaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3;
- (id)relatedEvent;
- (id)semanticIdentifier;
- (void)setTimestampAsDate:(id)arg1;
- (id)timestampAsDate;

@end

