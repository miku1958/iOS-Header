//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialServer/TRITaskQueueControlling-Protocol.h>

@class TRIRunningXPCActivityDescriptor, TRITaskQueuingOptions;
@protocol TRITask;

@protocol TRITaskQueuing <TRITaskQueueControlling>
- (BOOL)addTask:(id<TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2;
- (BOOL)cancelTask:(id<TRITask>)arg1;
- (unsigned long long)count;
- (BOOL)resumeWithXPCActivityDescriptor:(TRIRunningXPCActivityDescriptor *)arg1 executeWhenSuspended:(void (^)(void))arg2;
@end

