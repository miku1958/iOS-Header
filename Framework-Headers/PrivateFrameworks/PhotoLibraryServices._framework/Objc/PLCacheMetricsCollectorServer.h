//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLCacheMetricsCollectorServer : NSObject
{
    unsigned long long _bufferSize;
    void *_sharedRegion;
}

- (void)dealloc;
- (CDStruct_f4d52fe1)getSharedImageRequestCacheMetrics;
- (id)initWithXPCObject:(id)arg1;

@end

