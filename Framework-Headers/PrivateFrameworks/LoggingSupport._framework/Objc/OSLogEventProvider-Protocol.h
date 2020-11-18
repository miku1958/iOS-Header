//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDate, NSString, NSTimeZone, NSUUID, OSLogEventDecomposedMessage;

@protocol OSLogEventProvider

@property (readonly, nonatomic) unsigned long long activityIdentifier;
@property (readonly, nonatomic) NSUUID *bootUUID;
@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *composedMessage;
@property (readonly, nonatomic) unsigned long long continuousNanosecondsSinceBoot;
@property (readonly, nonatomic) unsigned long long creatorActivityIdentifier;
@property (readonly, nonatomic) unsigned long long creatorProcessUniqueIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) OSLogEventDecomposedMessage *decomposedMessage;
@property (readonly, nonatomic) NSString *formatString;
@property (readonly, nonatomic) unsigned long long logType;
@property (readonly, nonatomic) unsigned long long machContinuousTimestamp;
@property (readonly, nonatomic) unsigned long long parentActivityIdentifier;
@property (readonly, nonatomic) NSString *process;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, nonatomic) NSString *processImagePath;
@property (readonly, nonatomic) NSUUID *processImageUUID;
@property (readonly, nonatomic) const char *processImageUUIDBytes;
@property (readonly, nonatomic) NSString *sender;
@property (readonly, nonatomic) unsigned long long senderImageOffset;
@property (readonly, nonatomic) NSString *senderImagePath;
@property (readonly, nonatomic) NSUUID *senderImageUUID;
@property (readonly, nonatomic) const char *senderImageUUIDBytes;
@property (readonly, nonatomic) unsigned long long signpostIdentifier;
@property (readonly, nonatomic) unsigned long long signpostScope;
@property (readonly, nonatomic) unsigned long long signpostType;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSString *subsystem;
@property (readonly, nonatomic) unsigned long long threadIdentifier;
@property (readonly, nonatomic) unsigned long long timeToLive;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) unsigned long long traceIdentifier;
@property (readonly, nonatomic) unsigned long long transitionActivityIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) struct timeval *unixDate;
@property (readonly, nonatomic) struct timezone *unixTimeZone;

@end
