//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookUtility/BUIOChannel-Protocol.h>

@class NSObject;
@protocol OS_dispatch_data;

@protocol BURandomWriteChannel <BUIOChannel>
- (void)flushWithCompletion:(void (^)(NSError *))arg1;
- (void)truncateToLength:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)writeData:(NSObject<OS_dispatch_data> *)arg1 offset:(long long)arg2 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

