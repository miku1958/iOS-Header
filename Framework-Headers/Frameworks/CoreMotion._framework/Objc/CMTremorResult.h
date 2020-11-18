//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class NSDate;

@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding>
{
    float _percentUnknown;
    float _percentNone;
    float _percentSlight;
    float _percentMild;
    float _percentModerate;
    float _percentStrong;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) float percentMild; // @synthesize percentMild=_percentMild;
@property (readonly, nonatomic) float percentModerate; // @synthesize percentModerate=_percentModerate;
@property (readonly, nonatomic) float percentNone; // @synthesize percentNone=_percentNone;
@property (readonly, nonatomic) float percentSlight; // @synthesize percentSlight=_percentSlight;
@property (readonly, nonatomic) float percentStrong; // @synthesize percentStrong=_percentStrong;
@property (readonly, nonatomic) float percentUnknown; // @synthesize percentUnknown=_percentUnknown;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult *)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 percentUnknown:(float)arg3 percentNone:(float)arg4 percentSlight:(float)arg5 percentMild:(float)arg6 percentModerate:(float)arg7 percentStrong:(float)arg8;

@end

