//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecItemRateLimit : NSObject
{
    BOOL _forceEnabled;
    NSObject<OS_dispatch_queue> *_dataQueue;
    int _roCapacity;
    int _rwCapacity;
    double _roRate;
    double _rwRate;
    double _limitMultiplier;
    NSDate *_roBucket;
    NSDate *_rwBucket;
}

@property (readonly, nonatomic) double limitMultiplier; // @synthesize limitMultiplier=_limitMultiplier;
@property (readonly, nonatomic) NSDate *roBucket; // @synthesize roBucket=_roBucket;
@property (readonly, nonatomic) int roCapacity; // @synthesize roCapacity=_roCapacity;
@property (readonly, nonatomic) double roRate; // @synthesize roRate=_roRate;
@property (readonly, nonatomic) NSDate *rwBucket; // @synthesize rwBucket=_rwBucket;
@property (readonly, nonatomic) int rwCapacity; // @synthesize rwCapacity=_rwCapacity;
@property (readonly, nonatomic) double rwRate; // @synthesize rwRate=_rwRate;

+ (id)getStaticRateLimit;
+ (id)instance;
+ (void)resetStaticRateLimit;
- (void).cxx_destruct;
- (BOOL)consumeTokenFromBucket:(BOOL)arg1;
- (void)forceEnabled:(BOOL)arg1;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isModifyingAPICallWithinLimits;
- (BOOL)isReadOnlyAPICallWithinLimits;
- (BOOL)shouldCountAPICalls;

@end

