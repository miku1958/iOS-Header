//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CKTimeLogger : NSObject <NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_childLoggers;
    NSMutableDictionary *_logs;
    CKTimeLogger *_parentLogger;
    NSString *_relationMessage;
    double _relationTime;
    NSString *_observedObjectClassName;
    NSString *_observedObjectDescription;
    NSMutableDictionary *_currentSessions;
    NSString *_parentLoggerDescription;
}

@property (readonly) NSArray *childLoggers;
@property (strong) NSMutableDictionary *currentSessions; // @synthesize currentSessions=_currentSessions;
@property (readonly) NSDictionary *logs;
@property (strong, nonatomic) NSString *observedObjectClassName; // @synthesize observedObjectClassName=_observedObjectClassName;
@property (strong, nonatomic) NSString *observedObjectDescription; // @synthesize observedObjectDescription=_observedObjectDescription;
@property (weak, nonatomic) CKTimeLogger *parentLogger; // @synthesize parentLogger=_parentLogger;
@property (strong, nonatomic) NSString *parentLoggerDescription; // @synthesize parentLoggerDescription=_parentLoggerDescription;
@property (strong, nonatomic) NSString *relationMessage; // @synthesize relationMessage=_relationMessage;
@property (nonatomic) double relationTime; // @synthesize relationTime=_relationTime;

+ (id)loggerForObject:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)addChildLogger:(id)arg1;
- (void)addCustomLogOfType:(id)arg1 message:(id)arg2 from:(double)arg3 to:(double)arg4;
- (void)addLog:(id)arg1 forType:(id)arg2;
- (void)appendBriefStatusReportToString:(id)arg1;
- (void)appendStatusReportForType:(id)arg1 toString:(id)arg2 withIndent:(unsigned long long)arg3 showingPointers:(BOOL)arg4;
- (void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(BOOL)arg3;
- (void)beginLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)dumpLogs;
- (void)dumpLogsForType:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (id)init;
- (id)initForObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)intervalLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (id)logsForType:(id)arg1;
- (void)relateAsChildToParent:(id)arg1 message:(id)arg2;
- (void)removeChildLogger:(id)arg1;
- (void)setObservedObject:(id)arg1;
- (void)togglePauseLoggingSessionOfType:(id)arg1 message:(id)arg2;
- (void)treeTraversalWithBlock:(CDUnknownBlockType)arg1;

@end

