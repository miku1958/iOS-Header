//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSDateInterval, __CFN_TaskMetrics;

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding>
{
    __CFN_TaskMetrics *__metrics;
}

@property (readonly) unsigned long long redirectCount;
@property (readonly, copy) NSDateInterval *taskInterval;
@property (readonly, copy) NSArray *transactionMetrics;

+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

