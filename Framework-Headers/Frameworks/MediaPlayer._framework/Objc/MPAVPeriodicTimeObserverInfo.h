//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface MPAVPeriodicTimeObserverInfo : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_1b6d18a9 _interval;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (readonly, nonatomic) CDStruct_1b6d18a9 interval; // @synthesize interval=_interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (id)initWithInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;

@end
