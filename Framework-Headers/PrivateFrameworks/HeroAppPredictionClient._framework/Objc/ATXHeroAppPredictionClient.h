//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HeroAppPredictionClient/ATXHeroAppPredictionXPCInterface-Protocol.h>

@class NSXPCConnection;

@interface ATXHeroAppPredictionClient : NSObject <ATXHeroAppPredictionXPCInterface>
{
    NSXPCConnection *_xpcConnection;
}

- (void).cxx_destruct;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)donateHeroAppPredictions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)openAppClipWithHeroAppPrediction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
