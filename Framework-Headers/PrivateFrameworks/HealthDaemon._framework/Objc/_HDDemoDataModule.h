//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSOperationQueue;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

__attribute__((visibility("hidden")))
@interface _HDDemoDataModule : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    id<_HDDemoDataModuleDelegate> _delegate;
    NSDate *_lastFireDate;
}

@property (weak, nonatomic) id<_HDDemoDataModuleDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSDate *lastFireDate; // @synthesize lastFireDate=_lastFireDate;
@property (readonly, nonatomic) double nextFireInterval;

- (void).cxx_destruct;
- (void)handleDataObject:(id)arg1;
- (id)initWithOperationQueue:(id)arg1;
- (void)scheduleNextFire;
- (void)scheduleNextFireWithInterval:(double)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFireWithInterval:(double)arg1;

@end

