//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSString;

@protocol SBFAuthenticationPolicy <NSObject>
- (BOOL)allowAuthenticationRevocation;
- (BOOL)shouldClearBlockStateOnSync;
- (BOOL)usesSecureMode;
- (void)wipeDeviceWithReason:(NSString *)arg1;

@optional
- (void)cachePasscode:(NSString *)arg1;
- (void)clearPasscodeCache;
@end

