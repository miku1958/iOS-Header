//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackPositionObserving-Protocol.h>

@class NSString;
@protocol SVPlayerItemObserving, SVPlayerTimeControlStatusObserving;

@interface SVVideoPlaybackPositionObserver : NSObject <SVVideoPlaybackPositionObserving>
{
    unsigned long long _position;
    CDUnknownBlockType _changeBlock;
    id<SVPlayerItemObserving> _playerItemObserver;
    id<SVPlayerTimeControlStatusObserving> _timeControlStatusObserver;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property (nonatomic) unsigned long long position; // @synthesize position=_position;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVPlayerTimeControlStatusObserving> timeControlStatusObserver; // @synthesize timeControlStatusObserver=_timeControlStatusObserver;

- (void).cxx_destruct;
- (id)initWithPlayerItemObserver:(id)arg1 timeControlStatusObserver:(id)arg2;
- (void)playerItemPlayedToEnd:(id)arg1;

@end

