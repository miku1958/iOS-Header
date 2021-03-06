//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantConfig : NSObject
{
    NSData *_participantData;
    NSString *_uuid;
    unsigned long long _idsParticipantID;
    BOOL _audioEnabled;
    BOOL _videoEnabled;
    BOOL _frequencyMeteringEnabled;
    BOOL _audioMuted;
    float _volume;
    float _audioPosition;
    BOOL _audioPaused;
    BOOL _videoPaused;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
}

@property (nonatomic) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property (nonatomic) BOOL audioMuted; // @synthesize audioMuted=_audioMuted;
@property (nonatomic) BOOL audioPaused; // @synthesize audioPaused=_audioPaused;
@property (nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property (nonatomic) BOOL frequencyMeteringEnabled; // @synthesize frequencyMeteringEnabled=_frequencyMeteringEnabled;
@property (nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
@property (strong, nonatomic) NSData *participantData; // @synthesize participantData=_participantData;
@property (nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property (nonatomic) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property (nonatomic) BOOL videoPaused; // @synthesize videoPaused=_videoPaused;
@property (nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property (nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property (nonatomic) float volume; // @synthesize volume=_volume;

- (void)dealloc;
- (id)description;

@end

