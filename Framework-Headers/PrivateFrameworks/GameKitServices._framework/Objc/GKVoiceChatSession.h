//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol GKVoiceChatSessionDelegate;

@interface GKVoiceChatSession : NSObject
{
    id opaqueSession;
}

@property (getter=isActiveSession) BOOL activeSession;
@property id<GKVoiceChatSessionDelegate> delegate;
@property (readonly) float inputMeter;
@property (readonly) NSArray *peerList;
@property (readonly) NSString *sessionName;
@property float sessionVolume;

- (void)dealloc;
- (BOOL)getMuteStateForPeer:(id)arg1;
- (id)initWithGKSession:(id)arg1 sessionName:(id)arg2;
- (float)outputMeterForPeer:(id)arg1;
- (void)setMute:(BOOL)arg1 forPeer:(id)arg2;
- (void)startSession;
- (void)stopSession;

@end
