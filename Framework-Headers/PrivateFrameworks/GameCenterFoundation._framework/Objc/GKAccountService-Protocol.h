//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@protocol GKAccountService <NSObject>
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(void (^)(GKAuthenticateResponse *, NSError *))arg1;
- (oneway void)generateIdentityVerificationSignatureWithHandler:(void (^)(NSDictionary *, NSError *))arg1;
@end

