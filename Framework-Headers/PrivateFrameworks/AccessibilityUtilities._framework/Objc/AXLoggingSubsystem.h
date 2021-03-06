//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXLoggingSubsystem : NSObject
{
    BOOL _ignoreLogging;
}

@property (nonatomic) BOOL ignoreLogging;

+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (int)defaultLogLevel;
+ (id)errorWithDescription:(id)arg1;
+ (id)identifier;
+ (void)initialize;
+ (void)initializeSubsytem;
+ (id)sharedInstance;
+ (BOOL)shouldIncludeBacktraceInLogs;
+ (BOOL)shouldIncludeFileLineAndFunctionInLogs;
+ (BOOL)shouldProcessMessageForLogs;
+ (id)subsystems;
+ (double)threshold;
+ (BOOL)willLog;
+ (BOOL)willLogDebug;
+ (BOOL)willLogInfo;
+ (id)wrapError:(id)arg1 description:(id)arg2;

@end

