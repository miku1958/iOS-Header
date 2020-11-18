//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import <iTunesStore/SSAuthenticateRequestDelegate-Protocol.h>

@class NSNumber, NSString, SSAuthenticationContext, SSMutableAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate>
{
    NSNumber *_authenticatedDSID;
    SSMutableAuthenticationContext *_authenticationContext;
}

@property (readonly) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_authenticatedDSID;
- (void)_handleAuthenticateResponse:(id)arg1;
- (void)_setAuthenticatedDSID:(id)arg1;
- (id)authenticatedAccountDSID;
- (void)dealloc;
- (id)initWithAuthenticationContext:(id)arg1;
- (void)run;
- (id)uniqueKey;

@end

