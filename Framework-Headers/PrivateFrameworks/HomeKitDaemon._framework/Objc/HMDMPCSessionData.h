//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class MPPlaybackArchive, NSNumber, NSSet;

@interface HMDMPCSessionData : HMFObject
{
    NSSet *_mediaProfiles;
    NSNumber *_playbackStateNumber;
    NSNumber *_playbackVolumeNumber;
    MPPlaybackArchive *_playbackArchive;
    NSNumber *_source;
}

@property (readonly, copy, nonatomic) NSSet *mediaProfiles; // @synthesize mediaProfiles=_mediaProfiles;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property (readonly, copy, nonatomic) NSNumber *playbackStateNumber; // @synthesize playbackStateNumber=_playbackStateNumber;
@property (readonly, copy, nonatomic) NSNumber *playbackVolumeNumber; // @synthesize playbackVolumeNumber=_playbackVolumeNumber;
@property (readonly, copy, nonatomic) NSNumber *source; // @synthesize source=_source;

- (void).cxx_destruct;
- (id)dictionaryRepresentation:(BOOL)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2;
- (id)initWithMediaAction:(id)arg1 source:(id)arg2;
- (id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 source:(id)arg5;

@end

