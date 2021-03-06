//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class NSObject;
@protocol FCOperationCanceling, OS_dispatch_queue;

@protocol FCStreaming <NSObject>

@property (readonly, nonatomic, getter=isFinished) BOOL finished;

- (id<FCOperationCanceling>)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
@end

