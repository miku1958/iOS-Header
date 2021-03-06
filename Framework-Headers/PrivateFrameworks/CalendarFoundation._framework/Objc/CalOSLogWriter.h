//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarFoundation/CalLogWriter.h>

@class NSObject;
@protocol OS_os_log;

@interface CalOSLogWriter : CalLogWriter
{
    NSObject<OS_os_log> *CalOSLogClient;
}

+ (id)autoLogNamespaces;
- (void).cxx_destruct;
- (void)_configureAutoLogNamespaces;
- (void)_configureOSLogClient;
- (unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char *)arg2;
- (void)_logStringInChunks:(id)arg1;
- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;

@end

