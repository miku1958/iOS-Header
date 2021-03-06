//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SchoolTime/NSCopying-Protocol.h>
#import <SchoolTime/NSSecureCoding-Protocol.h>

@interface SCLState : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _scheduleEnabled;
    BOOL _inSchedule;
    unsigned long long _activeState;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) unsigned long long activeState; // @synthesize activeState=_activeState;
@property (readonly, nonatomic, getter=isInSchedule) BOOL inSchedule; // @synthesize inSchedule=_inSchedule;
@property (readonly, nonatomic, getter=isScheduleEnabled) BOOL scheduleEnabled; // @synthesize scheduleEnabled=_scheduleEnabled;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithActive:(BOOL)arg1 scheduleEnabled:(BOOL)arg2 inSchedule:(BOOL)arg3;
- (id)initWithActiveState:(unsigned long long)arg1 scheduleEnabled:(BOOL)arg2 inSchedule:(BOOL)arg3;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

