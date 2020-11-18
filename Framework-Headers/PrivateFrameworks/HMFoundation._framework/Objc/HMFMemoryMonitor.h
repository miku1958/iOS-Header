//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject;
@protocol HMFMemoryMonitorDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMFMemoryMonitor : HMFObject
{
    BOOL _monitoring;
    long long _memoryState;
    id<HMFMemoryMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSObject<OS_dispatch_source> *_memoryPressure;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (weak) id<HMFMemoryMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryPressure; // @synthesize memoryPressure=_memoryPressure;
@property (readonly, nonatomic) long long memoryState; // @synthesize memoryState=_memoryState;
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;

- (void).cxx_destruct;
- (void)_handleMemoryStateChange:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)setMemoryState:(long long)arg1;
- (void)start;
- (void)stop;

@end
