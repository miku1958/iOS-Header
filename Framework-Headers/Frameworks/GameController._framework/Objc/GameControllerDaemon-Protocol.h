//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/NSObject-Protocol.h>

@class GCController, NSDictionary, NSNumber, NSString;

@protocol GameControllerDaemon <NSObject>
- (void)addController:(GCController *)arg1 forward:(BOOL)arg2;
- (void)appDidEnterBackground;
- (void)appDidEnterBackgroundWithPID:(int)arg1;
- (void)appWillEnterForeground;
- (void)appWillEnterForegroundWithPID:(int)arg1;
- (void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 forward:(BOOL)arg4;
- (void)ping;
- (void)removeController:(GCController *)arg1 forward:(BOOL)arg2;
- (void)requestConnectedHosts;
- (void)setUserActivityUserInfo:(NSDictionary *)arg1;
- (void)startBonjourService;
- (void)startForwardingToApplicationNamed:(NSString *)arg1 pid:(NSNumber *)arg2 bundlePath:(NSString *)arg3;
@end

