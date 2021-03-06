//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@interface FCNetworkOperation : FCOperation
{
}

@property (readonly, nonatomic) double preferredTimeoutIntervalForRequest;

- (BOOL)_canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (BOOL)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
- (BOOL)shouldStartThrottlingWithError:(id)arg1 retryAfter:(double *)arg2;

@end

