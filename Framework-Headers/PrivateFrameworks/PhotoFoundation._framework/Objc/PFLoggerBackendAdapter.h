//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFLoggerBackend-Protocol.h>

@class NSString;
@protocol OS_os_transaction;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend>
{
    _Atomic unsigned long long _pendingTransactionCount;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _runningUnderDebugger;
}

@property (readonly, nonatomic) BOOL allowsConcurrentAccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL formatsMessage;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL outputsToDebuggerConsole;
@property BOOL runningUnderDebugger; // @synthesize runningUnderDebugger=_runningUnderDebugger;
@property (readonly) Class superclass;

+ (long long)allFileSizeMaxBytesFromString:(id)arg1;
+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (long long)fileSizeMaxBytesFromString:(id)arg1;
+ (long long)parseByteSizeValueForKey:(id)arg1 inString:(id)arg2;
+ (id)pathWithoutParametersFromString:(id)arg1;
- (void).cxx_destruct;
- (void)beginTransaction;
- (void)endTransaction;
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(struct __va_list_tag [1])arg7;

@end
