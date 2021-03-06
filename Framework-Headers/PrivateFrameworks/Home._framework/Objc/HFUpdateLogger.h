//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;
@protocol OS_os_activity;

@interface HFUpdateLogger : NSObject
{
    BOOL _didReachSoftTimeout;
    NSObject<OS_os_activity> *_loggerActivity;
    NSString *_clientDescription;
    NSDate *_startDate;
    double _softTimeoutInterval;
    NSTimer *_softTimeoutTimer;
}

@property (strong, nonatomic) NSString *clientDescription; // @synthesize clientDescription=_clientDescription;
@property (nonatomic) BOOL didReachSoftTimeout; // @synthesize didReachSoftTimeout=_didReachSoftTimeout;
@property (strong, nonatomic) NSObject<OS_os_activity> *loggerActivity; // @synthesize loggerActivity=_loggerActivity;
@property (nonatomic) double softTimeoutInterval; // @synthesize softTimeoutInterval=_softTimeoutInterval;
@property (strong, nonatomic) NSTimer *softTimeoutTimer; // @synthesize softTimeoutTimer=_softTimeoutTimer;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)history;
+ (id)runningLoggers;
- (void).cxx_destruct;
- (void)_handleTimeout:(id)arg1;
- (id)description;
- (void)finish;
- (id)initWithTimeout:(double)arg1 description:(id)arg2;

@end

