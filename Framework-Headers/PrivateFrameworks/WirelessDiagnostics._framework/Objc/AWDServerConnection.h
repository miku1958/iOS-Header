//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AWDServerConnection : NSObject
{
    struct AWDServerConnection *fServerConnection;
}

- (void)dealloc;
- (void)flushToQueue:(struct dispatch_queue_s *)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)getAWDTimestamp;
- (id)initWithComponentId:(unsigned int)arg1;
- (id)initWithComponentId:(unsigned int)arg1 andBlockOnConfiguration:(BOOL)arg2;
- (id)newMetricContainerWithIdentifier:(unsigned int)arg1;
- (BOOL)registerConfigChangeCallback:(CDUnknownBlockType)arg1;
- (BOOL)registerQueriableMetric:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (BOOL)registerQueriableMetricCallback:(CDUnknownBlockType)arg1 forIdentifier:(unsigned int)arg2;
- (BOOL)submitMetric:(id)arg1;

@end

