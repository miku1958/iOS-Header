//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <NSSecureCoding>
{
    NSDateComponents *_dateComponents;
}

@property (copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;

+ (id)cdEntityName;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_deepCopy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateComponents:(id)arg1;
- (id)initWithObjectID:(id)arg1 dateComponents:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporal;

@end

