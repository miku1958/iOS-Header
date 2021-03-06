//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriPlaybackControlIntents/NSObject-Protocol.h>

@class PauseMediaIntent;

@protocol PauseMediaIntentHandling <NSObject>
- (void)handlePauseMedia:(PauseMediaIntent *)arg1 completion:(void (^)(PauseMediaIntentResponse *))arg2;
- (void)resolveDevicesForPauseMedia:(PauseMediaIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;

@optional
- (void)confirmPauseMedia:(PauseMediaIntent *)arg1 completion:(void (^)(PauseMediaIntentResponse *))arg2;
@end

