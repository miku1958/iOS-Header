//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskMetrics.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskMetrics : NSURLSessionTaskMetrics <NSSecureCoding>
{
    NSArray *_transactionMetrics;
    NSDateInterval *_taskInterval;
    unsigned long long _redirectCount;
}

+ (BOOL)supportsSecureCoding;
- (id)_initWithTask:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)redirectCount;
- (void)setRedirectCount:(unsigned long long)arg1;
- (void)setTaskInterval:(id)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (id)taskInterval;
- (id)transactionMetrics;

@end

