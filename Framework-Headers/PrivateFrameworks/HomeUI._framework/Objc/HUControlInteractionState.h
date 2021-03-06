//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NAValueThrottler;

@interface HUControlInteractionState : NSObject
{
    BOOL _userInteractionActive;
    BOOL _writesInProgressOrPossible;
    NAValueThrottler *_writeThrottler;
    unsigned long long _inFlightWriteCount;
}

@property (nonatomic) unsigned long long inFlightWriteCount; // @synthesize inFlightWriteCount=_inFlightWriteCount;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property (strong, nonatomic) NAValueThrottler *writeThrottler; // @synthesize writeThrottler=_writeThrottler;
@property (nonatomic, getter=areWritesInProgressOrPossible) BOOL writesInProgressOrPossible; // @synthesize writesInProgressOrPossible=_writesInProgressOrPossible;

- (void).cxx_destruct;

@end

