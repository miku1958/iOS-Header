//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject
{
    NSMutableArray *_sinks;
}

+ (id)instance;
- (void).cxx_destruct;
- (void)addSink:(id)arg1 withBehavior:(id)arg2;
- (id)init;
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;

@end

