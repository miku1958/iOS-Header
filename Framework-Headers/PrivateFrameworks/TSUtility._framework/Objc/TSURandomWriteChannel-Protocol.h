//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSUtility/TSUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data, OS_dispatch_queue;

@protocol TSURandomWriteChannel <TSUIOChannel>
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 offset:(long long)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg4;
@end

