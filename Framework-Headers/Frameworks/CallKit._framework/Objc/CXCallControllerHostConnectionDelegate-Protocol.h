//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXCallControllerHostConnection, CXTransaction;

@protocol CXCallControllerHostConnectionDelegate <NSObject>
- (void)callControllerHostConnection:(CXCallControllerHostConnection *)arg1 requestCalls:(void (^)(NSArray *))arg2;
- (void)callControllerHostConnection:(CXCallControllerHostConnection *)arg1 requestTransaction:(CXTransaction *)arg2 completion:(void (^)(NSError *))arg3;
- (void)callControllerHostConnectionInvalidated:(CXCallControllerHostConnection *)arg1;
@end

