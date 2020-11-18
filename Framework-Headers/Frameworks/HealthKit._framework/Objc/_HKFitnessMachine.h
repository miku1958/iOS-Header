//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDevice, NSArray, NSString, NSUUID;

@interface _HKFitnessMachine : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    unsigned long long _type;
    unsigned long long _activityType;
    HKDevice *_device;
    NSString *_brand;
    NSArray *_requestedTypes;
}

@property (readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property (readonly, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property (readonly, nonatomic) HKDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSArray *requestedTypes; // @synthesize requestedTypes=_requestedTypes;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_setActivityType:(unsigned long long)arg1;
- (void)_setBrand:(id)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setRequestedTypes:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

