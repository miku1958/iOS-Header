//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUAnswerRequest, TUDialRequest, TUProxyCall;

@protocol TUCallServicesProxyCallActions <NSObject>
- (void)answerCallWithRequest:(TUAnswerRequest *)arg1;
- (void)disconnectAllCalls;
- (void)disconnectCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)disconnectCurrentCallAndActivateHeld;
- (void)enteredBackgroundForAllCalls;
- (void)enteredForegroundForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)groupCallWithUniqueProxyIdentifier:(NSString *)arg1 withOtherCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (void)holdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)playDTMFToneForCallWithUniqueProxyIdentifier:(NSString *)arg1 key:(unsigned char)arg2;
- (void)pullHostedCallsFromPairedHostDevice;
- (void)pullRelayingCallsFromClient;
- (void)pushHostedCallsToPairedClientDevice;
- (void)pushRelayingCallsToHostWithSourceIdentifier:(NSString *)arg1;
- (void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)sendMMIOrUSSDCodeWithRequest:(TUDialRequest *)arg1;
- (void)sendTelephonyDigits:(NSString *)arg1;
- (void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(NSString *)arg1 size:(struct CGSize)arg2;
- (void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(NSString *)arg1 presentationState:(int)arg2;
- (void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2;
- (void)swapCalls;
- (void)ungroupCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)unholdCallWithUniqueProxyIdentifier:(NSString *)arg1;
- (void)updateCallWithProxy:(TUProxyCall *)arg1;
@end

