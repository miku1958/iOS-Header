//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSProcessWatchdog.h>

@class FBProcessWatchdogEventContext;

@interface FBProcessWatchdog : FBSProcessWatchdog
{
    long long _event;
    FBProcessWatchdogEventContext *_eventContext;
}

@property (readonly, nonatomic) long long event; // @synthesize event=_event;
@property (readonly, strong, nonatomic) FBProcessWatchdogEventContext *eventContext; // @synthesize eventContext=_eventContext;

- (void).cxx_destruct;
- (id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3;

@end
