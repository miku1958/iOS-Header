//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveEventTracker/PETLoggingOutlet-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PET2LoggingOutlet : NSObject <PETLoggingOutlet>
{
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;

@end
