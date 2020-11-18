//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMessageFilterChain : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_messageFilters;
}

@property (readonly, copy, nonatomic) NSArray *filters;
@property (strong, nonatomic) NSMutableArray *messageFilters; // @synthesize messageFilters=_messageFilters;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addMessageFilter:(id)arg1;
- (void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (void)removeMessageFilter:(id)arg1;
- (void)resetConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldCloudSyncData;

@end
