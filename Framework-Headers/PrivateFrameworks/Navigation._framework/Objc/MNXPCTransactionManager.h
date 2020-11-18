//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MNXPCTransactionManager : NSObject
{
    NSObject<OS_os_transaction> *_xpcTransaction;
    NSHashTable *_requesters;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addHighMemoryThresholdRequest:(id)arg1;
- (void)removeHighMemoryThresholdRequest:(id)arg1 afterDelay:(double)arg2;

@end

