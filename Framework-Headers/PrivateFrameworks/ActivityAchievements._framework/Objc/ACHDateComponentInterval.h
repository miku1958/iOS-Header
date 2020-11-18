//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface ACHDateComponentInterval : NSObject
{
    NSDateComponents *_startDateComponents;
    NSDateComponents *_endDateComponents;
}

@property (readonly, nonatomic) NSDateComponents *endDateComponents; // @synthesize endDateComponents=_endDateComponents;
@property (readonly, nonatomic) NSDateComponents *startDateComponents; // @synthesize startDateComponents=_startDateComponents;

- (void).cxx_destruct;
- (BOOL)containsDateComponents:(id)arg1 inCalendar:(id)arg2;
- (unsigned long long)countOfDaysContainedInIntervalInCalendar:(id)arg1;
- (id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2;

@end
