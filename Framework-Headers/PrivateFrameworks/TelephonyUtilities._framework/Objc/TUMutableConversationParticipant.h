//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUConversationParticipant.h>

@class TUHandle;

@interface TUMutableConversationParticipant : TUConversationParticipant
{
}

@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @dynamic audioEnabled;
@property (copy, nonatomic) TUHandle *handle; // @dynamic handle;
@property (nonatomic) unsigned long long identifier; // @dynamic identifier;
@property (nonatomic, getter=isMuted) BOOL muted; // @dynamic muted;
@property (nonatomic) long long streamToken; // @dynamic streamToken;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @dynamic videoEnabled;

+ (BOOL)supportsSecureCoding;

@end

