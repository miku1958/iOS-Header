//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _SYXpcTransactionManager : NSObject
{
    NSMutableDictionary *_table;
    NSObject<OS_dispatch_queue> *_syncQ;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)beginTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4;
- (void)dealloc;
- (void)endTransactionWithName:(id)arg1 file:(id)arg2 line:(int)arg3 andFunction:(id)arg4;
- (id)init;
- (void)logOpenTransactions;

@end

