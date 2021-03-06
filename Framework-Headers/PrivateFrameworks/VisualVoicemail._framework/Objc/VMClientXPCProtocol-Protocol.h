//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VisualVoicemail/VMAccountManagerXPCClient-Protocol.h>
#import <VisualVoicemail/VMGreetingManagerXPCClient-Protocol.h>
#import <VisualVoicemail/VMMessageManagerXPCClient-Protocol.h>

@class NSOrderedSet, VMVoicemailCapabilities;

@protocol VMClientXPCProtocol <VMAccountManagerXPCClient, VMGreetingManagerXPCClient, VMMessageManagerXPCClient>
- (void)setCapabilities:(VMVoicemailCapabilities *)arg1;
- (void)setOnline:(BOOL)arg1;
- (void)setStorageUsage:(unsigned long long)arg1;
- (void)setSubscribed:(BOOL)arg1;
- (void)setSyncInProgress:(BOOL)arg1;
- (void)setTranscribing:(BOOL)arg1;
- (void)voicemailsUpdated:(NSOrderedSet *)arg1;
@end

