//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class NSDate;

@interface WFNextHourPrecipitationCondition : NSObject <NSCopying>
{
    unsigned long long _type;
    double _intensity;
    double _probability;
    NSDate *_validUntil;
}

@property (readonly, nonatomic) double intensity; // @synthesize intensity=_intensity;
@property (readonly, nonatomic) double probability; // @synthesize probability=_probability;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, nonatomic) NSDate *validUntil; // @synthesize validUntil=_validUntil;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 intensity:(double)arg2 probability:(double)arg3 validUntil:(id)arg4;
- (unsigned long long)typeForString:(id)arg1;

@end
