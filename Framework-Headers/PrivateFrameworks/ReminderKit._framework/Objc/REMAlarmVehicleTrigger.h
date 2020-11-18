//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMAlarmTrigger.h>

@interface REMAlarmVehicleTrigger : REMAlarmTrigger
{
    long long _event;
}

@property (nonatomic) long long event; // @synthesize event=_event;

+ (id)cdEntityName;
+ (BOOL)supportsSecureCoding;
- (id)_deepCopy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1;
- (id)initWithObjectID:(id)arg1 event:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporal;

@end
