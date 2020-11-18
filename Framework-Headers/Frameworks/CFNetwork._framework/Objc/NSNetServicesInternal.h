//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_tcp_listener;

__attribute__((visibility("hidden")))
@interface NSNetServicesInternal : NSObject
{
    NSMutableArray *_monitors;
    NSObject<OS_tcp_listener> *_listener;
    struct __CFRunLoop *_scheduledRunLoop;
    struct __CFString *_scheduledMode;
}

@property (strong) NSMutableArray *monitors; // @synthesize monitors=_monitors;

- (void)copyScheduledRunLoop:(struct __CFRunLoop **)arg1 andMode:(const struct __CFString **)arg2;
- (void)dealloc;
- (void)finalize;
- (id)listener;
- (void)setListener:(id)arg1;
- (void)setScheduledRunLoop:(struct __CFRunLoop *)arg1 andMode:(struct __CFString *)arg2;

@end

