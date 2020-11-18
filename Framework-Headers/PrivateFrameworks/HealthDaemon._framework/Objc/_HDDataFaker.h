//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/_HDDemoDataModuleDelegate-Protocol.h>

@class HKQuantity, NSArray, NSOperationQueue, NSString;

@interface _HDDataFaker : NSObject <_HDDemoDataModuleDelegate>
{
    long long _activityType;
    HKQuantity *_speed;
    CDUnknownBlockType _objectHandler;
    NSOperationQueue *_operationQueue;
    NSArray *_modules;
}

@property (readonly, nonatomic) long long activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKQuantity *speed;
@property (readonly) Class superclass;

+ (BOOL)_isSupportedActivityType:(long long)arg1;
- (void).cxx_destruct;
- (id)_generateSamplesForPeriodIncludeLessFrequentSamples:(BOOL)arg1;
- (void)demoDataModule:(id)arg1 didProduceDataObject:(id)arg2;
- (void)generateDataForMinutes:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithActivityType:(long long)arg1 speed:(id)arg2 objectHandler:(CDUnknownBlockType)arg3;
- (void)start;
- (void)stop;

@end
