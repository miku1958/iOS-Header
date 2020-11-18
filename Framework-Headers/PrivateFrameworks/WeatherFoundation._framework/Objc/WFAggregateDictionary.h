//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface WFAggregateDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    unsigned long long _requestFailures;
    unsigned long long _requestSuccesses;
}

@property (copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) unsigned long long requestFailures; // @synthesize requestFailures=_requestFailures;
@property (nonatomic) unsigned long long requestSuccesses; // @synthesize requestSuccesses=_requestSuccesses;

+ (id)defaultAggregateDictionary;
- (void).cxx_destruct;
- (void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2;
- (void)_queue_pushValue:(double)arg1 forKey:(id)arg2;
- (id)init;
- (void)logLocationAccuracy:(double)arg1;
- (void)logRequestFailure;
- (void)logRequestSuccess;

@end

