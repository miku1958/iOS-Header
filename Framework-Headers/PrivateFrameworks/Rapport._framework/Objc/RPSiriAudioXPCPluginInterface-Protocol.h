//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, RPSiriAudioSession;

@protocol RPSiriAudioXPCPluginInterface
- (void)xpcSiriAudioReceived:(NSDictionary *)arg1;
- (void)xpcSiriAudioSessionActivate:(RPSiriAudioSession *)arg1 completion:(void (^)(NSError *))arg2;
@end
