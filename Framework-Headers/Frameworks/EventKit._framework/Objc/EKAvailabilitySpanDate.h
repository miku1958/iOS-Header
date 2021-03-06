//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKAvailabilitySpanDate : NSObject
{
    NSDate *_spanDate;
    long long _dateType;
    long long _spanType;
}

@property long long dateType; // @synthesize dateType=_dateType;
@property (strong, nonatomic) NSDate *spanDate; // @synthesize spanDate=_spanDate;
@property long long spanType; // @synthesize spanType=_spanType;

+ (unsigned int)valueForSpanType:(long long)arg1;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithDate:(id)arg1 dateType:(long long)arg2 spanType:(long long)arg3;

@end

