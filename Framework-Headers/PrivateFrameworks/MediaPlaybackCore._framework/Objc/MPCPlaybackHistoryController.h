//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventObserving-Protocol.h>

@class MPCPlaybackEngine, MPModelPlayEvent, NSOperationQueue, NSString;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving>
{
    MPCPlaybackEngine *_playbackEngine;
    NSOperationQueue *_operationQueue;
    MPModelPlayEvent *_lastRecordedPlayEvent;
    long long _currentRepeatType;
}

@property (nonatomic) long long currentRepeatType; // @synthesize currentRepeatType=_currentRepeatType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPModelPlayEvent *lastRecordedPlayEvent; // @synthesize lastRecordedPlayEvent=_lastRecordedPlayEvent;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;
- (id)initWithPlaybackEngine:(id)arg1;

@end

