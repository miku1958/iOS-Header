//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoDurationObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving>
{
    CDUnknownBlockType changeBlock;
    id<SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_playerItemDurationObserver;
    double _duration;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SVKeyValueObserver *playerItemDurationObserver; // @synthesize playerItemDurationObserver=_playerItemDurationObserver;
@property (readonly, nonatomic) id<SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayerItemObserver:(id)arg1;
- (void)updateDuration:(CDStruct_198678f7)arg1;

@end

