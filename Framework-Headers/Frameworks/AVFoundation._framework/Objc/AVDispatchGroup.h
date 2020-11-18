//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface AVDispatchGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSArray *_notifyBlocks;
    long long _outstandingOperations;
}

- (void)dealloc;
- (void)enter;
- (void)finalize;
- (id)init;
- (void)leave;
- (void)notifyUsingBlock:(CDUnknownBlockType)arg1;

@end
