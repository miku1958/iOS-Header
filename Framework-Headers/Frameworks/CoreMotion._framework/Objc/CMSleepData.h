//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface CMSleepData : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long fRecordId;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    NSDate *fEventTime;
    long long fEventType;
}

@property (readonly, nonatomic) NSDate *eventTime;
@property (readonly, nonatomic) long long eventType;
@property (readonly, nonatomic) unsigned long long recordId;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;

+ (id)eventTypeName:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void)convertToSpringTrackerEntry:(struct CLSpringTrackerEntry *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 sourceId:(id)arg2 sessionId:(id)arg3 eventTime:(id)arg4 eventType:(long long)arg5;
- (id)initWithSessionId:(id)arg1;
- (id)initWithSpringEntry:(const struct CLSpringTrackerEntry *)arg1;

@end

