//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDRequest;
@protocol ASDRequestDelegate;

@protocol ASDRequestService
- (void)cancelAllRequestsWithErrorHandler:(void (^)(NSError *))arg1;
- (void)submitRequest:(ASDRequest *)arg1 delegate:(id<ASDRequestDelegate>)arg2 withReplyHandler:(void (^)(id<ASDRequestProxy>, NSError *))arg3;
@end
