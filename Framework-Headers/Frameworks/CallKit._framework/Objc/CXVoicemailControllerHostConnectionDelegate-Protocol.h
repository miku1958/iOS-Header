//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXTransaction, CXVoicemailControllerHostConnection;

@protocol CXVoicemailControllerHostConnectionDelegate <NSObject>
- (void)voicemailControllerHostConnection:(CXVoicemailControllerHostConnection *)arg1 requestTransaction:(CXTransaction *)arg2 completion:(void (^)(NSError *))arg3;
- (void)voicemailControllerHostConnection:(CXVoicemailControllerHostConnection *)arg1 requestVoicemails:(void (^)(NSArray *))arg2;
- (void)voicemailControllerHostConnectionInvalidated:(CXVoicemailControllerHostConnection *)arg1;
@end

