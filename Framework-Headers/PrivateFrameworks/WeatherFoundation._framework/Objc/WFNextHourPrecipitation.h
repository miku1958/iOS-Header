//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>

@class NSArray, NSDate, WFNextHourPrecipitationDescription;

@interface WFNextHourPrecipitation : NSObject <NSCopying>
{
    NSDate *_readDate;
    NSDate *_startDate;
    NSDate *_expirationDate;
    NSArray *_minutes;
    NSArray *_precipitationDescriptions;
    NSArray *_conditions;
}

@property (readonly, copy, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property (readonly, nonatomic) WFNextHourPrecipitationDescription *currentDescription;
@property (readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) BOOL isRelevant;
@property (readonly, copy, nonatomic) NSArray *minutes; // @synthesize minutes=_minutes;
@property (readonly, copy, nonatomic) NSArray *precipitationDescriptions; // @synthesize precipitationDescriptions=_precipitationDescriptions;
@property (readonly, copy, nonatomic) NSDate *readDate; // @synthesize readDate=_readDate;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithReadDate:(id)arg1 startDate:(id)arg2 expirationDate:(id)arg3 minutes:(id)arg4 conditions:(id)arg5 descriptions:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end
