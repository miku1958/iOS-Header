//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface VMOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
}

@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

- (void).cxx_destruct;
- (void)configureProgressWithUnitCount:(long long)arg1;
- (id)init;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;

@end

