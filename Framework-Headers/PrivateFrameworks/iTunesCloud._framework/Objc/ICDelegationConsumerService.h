//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerService : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableArray *_activeSessions;
}

- (void).cxx_destruct;
- (id)init;
- (void)performRequest:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2;

@end

