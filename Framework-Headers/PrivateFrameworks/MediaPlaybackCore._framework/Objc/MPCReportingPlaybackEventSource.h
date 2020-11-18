//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelPlayEvent, MPModelSong, NSData, NSString;

@interface MPCReportingPlaybackEventSource : NSObject
{
    BOOL _shouldReportPlayEventsToStore;
    double _eventDuration;
    unsigned long long _overrideItemType;
    NSString *_lyricsID;
    MPModelSong *_modelSong;
    NSString *_playbackSessionID;
    NSData *_trackInfo;
    MPModelPlayEvent *_modelPlayEvent;
    NSString *_featureName;
    NSData *_recommendationData;
}

@property (nonatomic) double eventDuration; // @synthesize eventDuration=_eventDuration;
@property (copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property (copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property (strong, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property (strong, nonatomic) MPModelSong *modelSong; // @synthesize modelSong=_modelSong;
@property (nonatomic) unsigned long long overrideItemType; // @synthesize overrideItemType=_overrideItemType;
@property (copy, nonatomic) NSString *playbackSessionID; // @synthesize playbackSessionID=_playbackSessionID;
@property (copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property (nonatomic) BOOL shouldReportPlayEventsToStore; // @synthesize shouldReportPlayEventsToStore=_shouldReportPlayEventsToStore;
@property (copy, nonatomic) NSData *trackInfo; // @synthesize trackInfo=_trackInfo;

- (void).cxx_destruct;
- (id)initWithAVItem:(id)arg1;

@end
