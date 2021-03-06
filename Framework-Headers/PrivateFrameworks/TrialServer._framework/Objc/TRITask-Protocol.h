//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialServer/NSObject-Protocol.h>
#import <TrialServer/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, TRIServerContext, TRITaskRunResult;
@protocol TRITaskQueueControlling, TRITaskQueueStateProviding;

@protocol TRITask <NSObject, NSSecureCoding>

@property (readonly, nonatomic) NSArray *dependencies;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;

+ (id)parseFromData:(NSData *)arg1;
- (unsigned long long)requiredCapabilities;
- (void)runDequeueHandlerUsingContext:(TRIServerContext *)arg1;
- (void)runEnqueueHandlerUsingContext:(TRIServerContext *)arg1;
- (TRITaskRunResult *)runUsingContext:(TRIServerContext *)arg1 withTaskQueue:(id<TRITaskQueueControlling>)arg2;
- (NSData *)serialize;
@end

