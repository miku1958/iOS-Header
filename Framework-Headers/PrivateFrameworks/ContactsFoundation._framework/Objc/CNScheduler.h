//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNScheduler : NSObject
{
}

+ (id)globalAsyncScheduler;
+ (id)immediateScheduler;
+ (id)mainThreadScheduler;
+ (id)operationQueueSchedulerWithMaxConcurrentOperationCount:(long long)arg1;
+ (id)serialDispatchQueueSchedulerWithName:(id)arg1;
+ (id)synchronousSerialDispatchQueueWithName:(id)arg1;

@end

