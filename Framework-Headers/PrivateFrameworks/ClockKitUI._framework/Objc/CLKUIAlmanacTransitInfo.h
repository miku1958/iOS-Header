//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CLKUIAlmanacTransitInfo : NSObject
{
    NSDate *_day;
    long long _constantSun;
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
    CDStruct_2c43369c _location;
}

@property (nonatomic) long long constantSun; // @synthesize constantSun=_constantSun;
@property (strong, nonatomic) NSDate *day; // @synthesize day=_day;
@property (nonatomic) CDStruct_2c43369c location; // @synthesize location=_location;
@property (strong, nonatomic) NSDate *rise; // @synthesize rise=_rise;
@property (strong, nonatomic) NSDate *set; // @synthesize set=_set;
@property (strong, nonatomic) NSDate *transit; // @synthesize transit=_transit;

+ (id)transitInfoForDate:(id)arg1;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2;
+ (id)transitInfoForDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
+ (id)transitInfoForDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 city:(id)arg2;
- (id)initWithDate:(id)arg1 city:(id)arg2 sunAltitude:(double)arg3;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2;
- (id)initWithDate:(id)arg1 location:(CDStruct_2c43369c)arg2 sunAltitude:(double)arg3;

@end
