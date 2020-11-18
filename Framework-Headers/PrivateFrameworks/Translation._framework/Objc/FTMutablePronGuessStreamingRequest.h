//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Translation/FTPronGuessStreamingRequest.h>

@class FTAudioPacket, FTCancelRequest, FTFinishAudio, FTStartPronGuessRequest;

__attribute__((visibility("hidden")))
@interface FTMutablePronGuessStreamingRequest : FTPronGuessStreamingRequest
{
}

@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTCancelRequest *contentAsFTCancelRequest;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property (nonatomic) long long content_type;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
