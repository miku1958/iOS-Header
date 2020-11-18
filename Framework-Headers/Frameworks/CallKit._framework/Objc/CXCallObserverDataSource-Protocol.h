//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction, NSDictionary, NSObject, NSString;
@protocol CXCallObserverDataSourceDelegate, OS_dispatch_queue;

@protocol CXCallObserverDataSource <NSObject>

@property (readonly, copy, nonatomic) NSDictionary *callUUIDToCallMap;
@property (weak, nonatomic) id<CXCallObserverDataSourceDelegate> delegate;

- (id)initWithConcurrentQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)invalidate;
- (void)requestTransaction:(CXTransaction *)arg1 forExtensionIdentifier:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
