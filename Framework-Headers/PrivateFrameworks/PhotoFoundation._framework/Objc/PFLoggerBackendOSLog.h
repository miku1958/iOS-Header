//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSMutableDictionary, NSString;

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter
{
    NSMutableDictionary *_osLogs;
    NSString *_sender;
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
- (void).cxx_destruct;
- (void)_logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 type:(unsigned int)arg3 message:(const char *)arg4;
- (BOOL)allowsConcurrentAccess;
- (BOOL)formatsMessage;
- (id)initWithSender:(id)arg1;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;
- (BOOL)outputsToDebuggerConsole;

@end

