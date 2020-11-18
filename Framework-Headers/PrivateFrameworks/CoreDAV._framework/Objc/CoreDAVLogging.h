//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface CoreDAVLogging : NSObject
{
    struct __CFDictionary *_logDelegates;
    NSObject<OS_dispatch_queue> *_delegateMuckingQueue;
}

+ (id)sharedLogging;
- (id)_delegatesToLogForProvider:(id)arg1;
- (BOOL)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;
- (void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (void)dealloc;
- (id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1;
- (id)init;
- (void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(struct __va_list_tag [1])arg4;
- (void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2;
- (BOOL)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2;

@end
