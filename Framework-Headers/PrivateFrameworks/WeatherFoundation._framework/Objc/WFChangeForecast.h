//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface WFChangeForecast : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_date;
    NSString *_descriptionSameTimeZone;
    NSString *_descriptionDifferentTimeZone;
}

@property (readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) NSString *descriptionDifferentTimeZone; // @synthesize descriptionDifferentTimeZone=_descriptionDifferentTimeZone;
@property (readonly, nonatomic) NSString *descriptionSameTimeZone; // @synthesize descriptionSameTimeZone=_descriptionSameTimeZone;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 descriptionSameTimeZone:(id)arg2 descriptionDifferentTimeZone:(id)arg3;

@end

