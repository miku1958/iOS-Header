//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/NSObject-Protocol.h>

@class GKGame, NSData, NSDictionary, NSObject, NSString;

@protocol GKExtensionProtocol <NSObject>

@property (strong, nonatomic) GKGame *game;

- (void)messageFromClient:(NSData *)arg1;
- (void)setInitialState:(NSDictionary *)arg1 withReply:(void (^)(BOOL))arg2;

@optional
- (void)hostApp:(NSString *)arg1 grantingAccessExtensionSandbox:(NSString *)arg2 replyWithEndpoint:(void (^)(NSXPCListenerEndpoint *))arg3;
- (void)nudge;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)setValue:(NSObject *)arg1 forKeyPath:(NSString *)arg2 withReply:(void (^)(BOOL))arg3;
@end

