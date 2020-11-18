//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>

@class AVPlayerItemLegibleOutput, MPAVItem, MPAlternateTextTrack, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface MPAlternateTracks : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    MPAVItem *_item;
    NSDictionary *_alternateTracks;
    NSMutableDictionary *_trackChangeDictionary;
    BOOL _disableAlternateTextTrackRendering;
    AVPlayerItemLegibleOutput *_legibleOutput;
    MPAlternateTextTrack *_currentTextTrack;
    NSArray *_outOfBandTextTracks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAlternateTextTrackRendering; // @synthesize disableAlternateTextTrackRendering=_disableAlternateTextTrackRendering;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (strong, nonatomic) NSArray *outOfBandTextTracks; // @synthesize outOfBandTextTracks=_outOfBandTextTracks;
@property (strong, nonatomic) MPAlternateTextTrack *selectedAlternateTextTrack;
@property (readonly) Class superclass;

+ (id)subtitleLanguages;
- (void).cxx_destruct;
- (id)_currentTextTrackAccordingToAVF;
- (id)_keyForTrackType:(unsigned long long)arg1;
- (void)_suppressAVFSubtitleRendering;
- (void)beginTrackChanges;
- (void)commitTrackChanges;
- (id)currentTrackForType:(unsigned long long)arg1;
- (void)enableLegibleOutputIfNecessary;
- (BOOL)hasTracksForTypes:(unsigned long long)arg1;
- (unsigned long long)indexOfCurrentTrackForType:(unsigned long long)arg1;
- (id)initWithItem:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_1b6d18a9)arg4;
- (void)reloadData;
- (void)reloadDataWithChangedCaptionDisplayType:(BOOL)arg1;
- (void)setTrack:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)trackCountForTypes:(unsigned long long)arg1;
- (id)tracksForType:(unsigned long long)arg1;

@end

