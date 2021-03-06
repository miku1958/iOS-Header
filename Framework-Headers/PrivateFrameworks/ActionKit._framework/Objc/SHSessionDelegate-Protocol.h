//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class NSError, SHMatch, SHSession, SHSignature;

@protocol SHSessionDelegate <NSObject>

@optional
- (void)finishedSession:(SHSession *)arg1;
- (void)session:(SHSession *)arg1 didFindMatch:(SHMatch *)arg2;
- (void)session:(SHSession *)arg1 didNotFindMatchForSignature:(SHSignature *)arg2 error:(NSError *)arg3;
- (BOOL)session:(SHSession *)arg1 shouldAttemptToMatch:(SHSignature *)arg2;
@end

