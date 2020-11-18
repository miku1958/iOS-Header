//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSCalendar, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDateComponent : NSObject <NSCopying>
{
    NSDateComponents *_components;
    NSDate *_date;
}

@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDateComponents *components; // @synthesize components=_components;
@property (readonly, nonatomic) NSDate *date;

+ (id)inlineDescriptionForComponents:(id)arg1;
+ (unsigned long long)representedCalendarUnits;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDate:(id)arg1 calendar:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
