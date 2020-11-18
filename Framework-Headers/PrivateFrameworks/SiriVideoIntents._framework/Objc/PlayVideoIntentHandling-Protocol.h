//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVideoIntents/NSObject-Protocol.h>

@class PlayVideoIntent;

@protocol PlayVideoIntentHandling <NSObject>
- (void)handlePlayVideo:(PlayVideoIntent *)arg1 completion:(void (^)(PlayVideoIntentResponse *))arg2;
- (void)resolveContentForPlayVideo:(PlayVideoIntent *)arg1 withCompletion:(void (^)(PlayVideoContentResolutionResult *))arg2;

@optional
- (void)confirmPlayVideo:(PlayVideoIntent *)arg1 completion:(void (^)(PlayVideoIntentResponse *))arg2;
@end
