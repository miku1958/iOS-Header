//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AFPeerInfo, NSArray, SACFAbstractClientCommand, SACFClientFlowScript, SACFSignal;

@protocol CFScripting
- (void)performCommandExecutionForCommand:(SACFAbstractClientCommand *)arg1 peerInfo:(AFPeerInfo *)arg2 completion:(void (^)(SABaseCommand *))arg3;
- (void)removeScripts:(NSArray *)arg1 completion:(void (^)(BOOL))arg2;
- (void)updateScriptCacheForFlowScript:(SACFClientFlowScript *)arg1 completion:(void (^)(BOOL))arg2;
- (void)warmUpWithSignal:(SACFSignal *)arg1 completion:(void (^)(BOOL))arg2;
@end

