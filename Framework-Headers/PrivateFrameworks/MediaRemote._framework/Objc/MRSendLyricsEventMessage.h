//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRLyricsEventProtobuf;

@interface MRSendLyricsEventMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) _MRLyricsEventProtobuf *event;

- (id)initWithEvent:(id)arg1;
- (unsigned long long)type;

@end

