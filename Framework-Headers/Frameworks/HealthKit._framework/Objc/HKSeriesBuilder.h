//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKHealthStore;

@interface HKSeriesBuilder : NSObject <NSSecureCoding>
{
    HKHealthStore *_store;
    int _state;
    long long _count;
}

@property (setter=_setCount:) long long count;
@property (setter=_setState:) unsigned long long state;
@property (readonly) HKHealthStore *store;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_discardWithHandler:(CDUnknownBlockType)arg1;
- (id)_initWithHealthStore:(id)arg1;
- (void)discard;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

