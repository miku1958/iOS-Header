//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateInterval;

@interface _REPeriodOfDay : NSObject
{
    NSDateInterval *_interval;
    unsigned long long _periodOfDay;
}

@property (readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property (readonly, nonatomic) unsigned long long periodOfDay; // @synthesize periodOfDay=_periodOfDay;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInterval:(id)arg1 periodOfDay:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

