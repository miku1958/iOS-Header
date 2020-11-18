//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRPacketEvent.h>

@class NSDictionary;

@interface TRNowPlayingInfoUpdatePacketEvent : TRPacketEvent
{
    NSDictionary *_nowPlayingInfo;
}

@property (readonly, copy, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;

+ (unsigned int)_packetEventType;
- (void).cxx_destruct;
- (id)_initWithVersion:(unsigned int)arg1 payloadDictionary:(id)arg2;
- (id)description;
- (id)initWithNowPlayingInfo:(id)arg1;

@end
