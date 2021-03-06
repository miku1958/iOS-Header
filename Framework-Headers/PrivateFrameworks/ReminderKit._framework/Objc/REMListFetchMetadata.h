//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata
{
    NSDictionary *_incompleteReminderCounts;
    long long _scheduledCount;
}

@property (readonly, nonatomic) NSDictionary *incompleteReminderCounts; // @synthesize incompleteReminderCounts=_incompleteReminderCounts;
@property (readonly, nonatomic) long long scheduledCount; // @synthesize scheduledCount=_scheduledCount;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

