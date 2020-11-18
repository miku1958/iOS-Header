//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class AVCAudioStream, NSArray, NSData, NSError;

@protocol AVCAudioStreamDelegate <NSObject>
- (void)stream:(AVCAudioStream *)arg1 didStart:(BOOL)arg2 error:(NSError *)arg3;

@optional
- (void)stream:(AVCAudioStream *)arg1 didPause:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)stream:(AVCAudioStream *)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)stream:(AVCAudioStream *)arg1 didResume:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 didStartSynchronizer:(BOOL)arg2 error:(NSError *)arg3;
- (void)stream:(AVCAudioStream *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)stream:(AVCAudioStream *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)streamDidInterruptionBegin:(AVCAudioStream *)arg1;
- (void)streamDidInterruptionEnd:(AVCAudioStream *)arg1;
- (void)streamDidRTCPTimeOut:(AVCAudioStream *)arg1;
- (void)streamDidRTPTimeOut:(AVCAudioStream *)arg1;
- (void)streamDidServerDie:(AVCAudioStream *)arg1;
- (void)streamDidStop:(AVCAudioStream *)arg1;
@end
