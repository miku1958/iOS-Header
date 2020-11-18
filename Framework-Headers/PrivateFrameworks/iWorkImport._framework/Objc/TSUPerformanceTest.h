//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUPerformanceTest : NSObject
{
    NSString *mName;
    SEL mSelector;
    id mTarget;
    double mGoalTime;
    double mPrecision;
    BOOL mQuiet;
    struct TSUOpstat_s mTiming;
    BOOL mPassed;
}

@property (nonatomic) double goalTime; // @synthesize goalTime=mGoalTime;
@property (readonly, nonatomic) NSString *name; // @synthesize name=mName;
@property (readonly, nonatomic) BOOL passed; // @synthesize passed=mPassed;
@property (nonatomic) double precision; // @synthesize precision=mPrecision;
@property (nonatomic) BOOL quiet; // @synthesize quiet=mQuiet;
@property (nonatomic) struct TSUOpstat_s timing; // @synthesize timing=mTiming;

+ (id)csvHeader;
- (id)csvString;
- (void)dealloc;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 target:(id)arg3 goalTime:(double)arg4;
- (void)report;
- (void)run;

@end

