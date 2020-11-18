//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface SFAnalyticsSampler : NSObject
{
    double _samplingInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_name;
    CDUnknownBlockType _block;
    int _notificationToken;
    Class _clientClass;
    BOOL _oncePerReport;
    BOOL _activeTimer;
}

@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) double samplingInterval; // @synthesize samplingInterval=_samplingInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 interval:(double)arg2 block:(CDUnknownBlockType)arg3 clientClass:(Class)arg4;
- (void)newTimer;
- (void)pauseSampling;
- (void)resumeSampling;
- (id)sampleNow;
- (void)setupOnceTimer;
- (void)setupPeriodicTimer;

@end

