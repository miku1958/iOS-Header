//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimeZone, NSUUID;

@interface OSActivityEvent : NSObject
{
    BOOL _persisted;
    int _processID;
    unsigned long long _processUniqueID;
    NSUUID *_processImageUUID;
    NSString *_processImagePath;
    unsigned long long _eventType;
    unsigned long long _parentActivityID;
    unsigned long long _activityID;
    unsigned long long _traceID;
    unsigned long long _threadID;
    unsigned long long _machTimestamp;
    NSDate *_timestamp;
    NSTimeZone *_timezone;
    NSUUID *_senderImageUUID;
    NSString *_senderImagePath;
    NSString *_eventMessage;
    struct timezone _tz;
    NSString *_timezoneName;
    struct timeval _timeGMT;
}

@property (readonly, nonatomic) unsigned long long activityID; // @synthesize activityID=_activityID;
@property (copy, nonatomic) NSString *eventMessage; // @synthesize eventMessage=_eventMessage;
@property (readonly, nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property (readonly, nonatomic) unsigned long long machTimestamp; // @synthesize machTimestamp=_machTimestamp;
@property (readonly, nonatomic) unsigned long long parentActivityID; // @synthesize parentActivityID=_parentActivityID;
@property (readonly, nonatomic) BOOL persisted; // @synthesize persisted=_persisted;
@property (readonly, copy, nonatomic) NSString *process;
@property (readonly, nonatomic) int processID; // @synthesize processID=_processID;
@property (readonly, copy, nonatomic) NSString *processImagePath; // @synthesize processImagePath=_processImagePath;
@property (readonly, copy, nonatomic) NSUUID *processImageUUID; // @synthesize processImageUUID=_processImageUUID;
@property (readonly, nonatomic) unsigned long long processUniqueID; // @synthesize processUniqueID=_processUniqueID;
@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSString *senderImagePath; // @synthesize senderImagePath=_senderImagePath;
@property (readonly, copy, nonatomic) NSUUID *senderImageUUID; // @synthesize senderImageUUID=_senderImageUUID;
@property (readonly, nonatomic) unsigned long long threadID; // @synthesize threadID=_threadID;
@property (readonly, nonatomic) struct timeval timeGMT; // @synthesize timeGMT=_timeGMT;
@property (readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (readonly, copy, nonatomic) NSTimeZone *timezone; // @synthesize timezone=_timezone;
@property (strong, nonatomic) NSString *timezoneName; // @synthesize timezoneName=_timezoneName;
@property (readonly, nonatomic) unsigned long long traceID; // @synthesize traceID=_traceID;
@property (readonly, nonatomic) struct timezone tz; // @synthesize tz=_tz;

+ (id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s *)arg1;
- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (void)_initWithProperties:(id)arg1;
- (id)description;
- (void)fillFromStreamEntry:(struct os_activity_stream_entry_s *)arg1 eventMessage:(const char *)arg2 persisted:(BOOL)arg3;
- (id)properties;
- (id)timeZone;

@end

