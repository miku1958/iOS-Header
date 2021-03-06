//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CMMotionActivityManager : NSObject
{
    struct CLConnectionClient *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    CDUnknownBlockType fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (long long)authorizationStatus;
+ (BOOL)isActivityAvailable;
- (void)_handleQueryResponse:(shared_ptr_bdcc6d0f)arg1 onQueue:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)startActivityUpdatesToQueue:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)stopActivityUpdates;

@end

