//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

@class NSDictionary;

@interface HMITask : HMFOperation
{
    int _taskID;
}

@property (readonly) NSDictionary *results;
@property (readonly) int taskID; // @synthesize taskID=_taskID;

- (id)initWithTaskID:(int)arg1;
- (id)initWithTaskID:(int)arg1 timeout:(double)arg2;

@end

