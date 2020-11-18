//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSThread;
@protocol OS_dispatch_queue;

@interface XCTWaiterManager : NSObject
{
    NSMutableArray *_waiterStack;
    NSThread *_thread;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property NSThread *thread; // @synthesize thread=_thread;
@property (strong) NSMutableArray *waiterStack; // @synthesize waiterStack=_waiterStack;

+ (id)threadLocalManager;
- (void)dealloc;
- (id)init;
- (void)waiterDidFinishWaiting:(id)arg1;
- (void)waiterTimedOutWhileWaiting:(id)arg1;
- (void)waiterWillBeginWaiting:(id)arg1;

@end

