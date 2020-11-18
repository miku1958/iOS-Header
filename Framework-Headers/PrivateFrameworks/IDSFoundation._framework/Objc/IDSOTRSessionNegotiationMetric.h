//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSOTRSessionNegotiationMetric : NSObject <CUTCoreAnalyticsMetric>
{
    unsigned int _result;
    NSString *_service;
    unsigned long long _priority;
    unsigned long long _duration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) unsigned int result; // @synthesize result=_result;
@property (readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1 priority:(unsigned long long)arg2 duration:(unsigned long long)arg3 result:(unsigned int)arg4;

@end
