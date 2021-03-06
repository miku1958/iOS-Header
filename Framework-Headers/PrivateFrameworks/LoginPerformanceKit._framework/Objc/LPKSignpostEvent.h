//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface LPKSignpostEvent : NSObject
{
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    NSString *_name;
    NSString *_processName;
}

@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (void)_calculateDurationIfNeeded;

@end

