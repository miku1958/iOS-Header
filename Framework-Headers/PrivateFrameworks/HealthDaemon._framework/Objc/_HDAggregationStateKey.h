//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HKDevice, NSString;

__attribute__((visibility("hidden")))
@interface _HDAggregationStateKey : NSObject <NSCopying>
{
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

@property (readonly, copy, nonatomic) NSString *collectorIdentifier; // @synthesize collectorIdentifier=_collectorIdentifier;
@property (readonly, copy, nonatomic) HKDevice *device; // @synthesize device=_device;

+ (id)keyForCollector:(id)arg1 device:(id)arg2 aggregator:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

