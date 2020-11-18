//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TLFileLoggingController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialLoggingQueue;
}

@property (nonatomic, setter=_setSerialLoggingQueue:) NSObject<OS_dispatch_queue> *_serialLoggingQueue; // @synthesize _serialLoggingQueue;

+ (id)sharedFileLoggingController;
- (id)_loggingDirectory;
- (void)_registerLoggingConfiguration;
- (void)dealloc;
- (id)init;
- (void)logMessage:(id)arg1 fileName:(const char *)arg2 functionName:(const char *)arg3 lineNumber:(unsigned long long)arg4;

@end

