//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, NSDate;

__attribute__((visibility("hidden")))
@interface PUScrubberSeekRequest : NSObject
{
    NSDate *_dateCreated;
    double _seekTime;
    AVPlayer *_avPlayer;
}

@property (weak, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property (copy, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (nonatomic) double seekTime; // @synthesize seekTime=_seekTime;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAvPlayer:(id)arg1 seekTime:(double)arg2;

@end
