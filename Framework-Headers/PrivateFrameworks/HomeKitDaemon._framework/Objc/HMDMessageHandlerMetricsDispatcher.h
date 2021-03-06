//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEventDispatcher, NSUUID;

@interface HMDMessageHandlerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;
    HMDLogEventDispatcher *_logEventDispatcher;
}

@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) HMDLogEventDispatcher *logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithIdentifier:(id)arg1 logEventDispatcher:(id)arg2;
- (id)logIdentifier;
- (id)privateDescription;
- (void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2;

@end

