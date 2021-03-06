//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol OS_dispatch_group;

@interface NURenderTransaction : NSObject
{
    long long _nestingLevel;
    NSMutableArray *_requests;
    NSObject<OS_dispatch_group> *_group;
}

@property (readonly) NSArray *pendingRequests;

+ (void)_commit:(id)arg1;
+ (id)assertCurrentTransaction;
+ (void)begin;
+ (void)commit;
+ (void)commitAndNotifyOnQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)currentTransaction;
+ (id)ensureCurrentTransaction;
+ (void)group:(CDUnknownBlockType)arg1;
+ (void)setCurrentTransaction:(id)arg1;
+ (void)withCurrentTransaction:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (BOOL)begin;
- (BOOL)commit;
- (void)flush;
- (id)init;
- (void)notifyCompletion:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)resetPendingRequests;
- (void)submitPendingRequests;
- (void)submitRequest:(id)arg1;

@end

