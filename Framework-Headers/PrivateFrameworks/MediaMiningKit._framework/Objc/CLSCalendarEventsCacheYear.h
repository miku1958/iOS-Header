//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCacheYear : NSObject
{
    long long _year;
    NSMutableSet *_months;
}

@property (readonly, nonatomic) NSMutableSet *months; // @synthesize months=_months;
@property (nonatomic) long long year; // @synthesize year=_year;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)initWithYear:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

