//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <GameCenterUI/GKExtensionProtocol-Protocol.h>

@class GKGame, NSString;

@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol>
{
    GKGame *_game;
    long long _sandboxToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) GKGame *game; // @synthesize game=_game;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sandboxToken; // @synthesize sandboxToken=_sandboxToken;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(CDUnknownBlockType)arg3;
- (void)messageFromClient:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)tearDownExtensionWithReply:(CDUnknownBlockType)arg1;

@end
