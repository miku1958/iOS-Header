//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_CDDateRangeProtocol-Protocol.h>

@class NSDate;

@interface _CDDateRange : NSObject <_CDDateRangeProtocol>
{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (readonly) double duration;
@property (readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)periodWithEnd:(id)arg1 duration:(double)arg2;
+ (id)periodWithStart:(id)arg1 duration:(double)arg2;
+ (id)periodWithStart:(id)arg1 end:(id)arg2;
- (void).cxx_destruct;
- (BOOL)contains:(id)arg1;
- (id)description;
- (id)initWithStart:(id)arg1 andEnd:(id)arg2;

@end
