//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@interface MPSkipIntervalCommandEvent : MPRemoteCommandEvent
{
    double _interval;
}

@property (readonly, nonatomic) double interval; // @synthesize interval=_interval;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

