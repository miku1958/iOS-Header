//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRNowPlayingState;

@interface MRSetStateMessage : MRProtocolMessage
{
    MRNowPlayingState *_state;
}

@property (readonly, nonatomic) MRNowPlayingState *state;

- (void).cxx_destruct;
- (id)initWithNowPlayingState:(id)arg1;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (unsigned long long)priority;
- (unsigned long long)type;

@end
