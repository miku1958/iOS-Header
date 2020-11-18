//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;
@protocol ABVCardTimeProvider;

@interface ABVCardWatchdogTimer : NSObject
{
    BOOL _valid;
    unsigned long long _ticks;
    id<ABVCardTimeProvider> _timeProvider;
    NSDate *_startTime;
}

@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (nonatomic) unsigned long long ticks; // @synthesize ticks=_ticks;
@property (readonly, nonatomic) id<ABVCardTimeProvider> timeProvider; // @synthesize timeProvider=_timeProvider;
@property (nonatomic) BOOL valid; // @synthesize valid=_valid;

+ (BOOL)shouldCheckTime;
+ (id)timerWithTimeProvider:(id)arg1;
- (void)checkValidity;
- (void)dealloc;
- (id)initWithTimeProvider:(id)arg1;
- (BOOL)isStarted;
- (BOOL)isValid;
- (void)start;

@end

