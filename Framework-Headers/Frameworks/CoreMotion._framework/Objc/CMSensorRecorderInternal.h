//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CMSensorRecorderInternal : NSObject
{
    NSObject<OS_dispatch_queue> *fInternalQueue;
    NSObject<OS_dispatch_source> *fWatchdogTimer;
    struct CLConnectionClient *fLocationdConnection;
}

- (id)_newAccelMetaUsingMessage:(const char *)arg1 withIdentifier:(unsigned long long)arg2;
- (void)_startWatchdogCheckins;
- (void)_stopWatchdogCheckins;
- (void)dealloc;
- (id)init;
- (id)newAccelDataByID:(unsigned long long)arg1;
- (id)newAccelMetaByID:(unsigned long long)arg1;
- (id)newAccelMetaFrom:(double)arg1 to:(double)arg2;
- (id)newAccelMetaSinceID:(unsigned long long)arg1;

@end

