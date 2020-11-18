//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>

@class ISBiometricAuthenticationContext, ISOperation, NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying>
{
    SSAuthenticationContext *_authenticationContext;
    NSNumber *_authenticatedAccountDSID;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
    ISBiometricAuthenticationContext *_biometricAuthenticationContext;
    long long _errorHandlerResponseType;
}

@property (strong) NSNumber *authenticatedAccountDSID; // @synthesize authenticatedAccountDSID=_authenticatedAccountDSID;
@property (strong) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
@property (strong) SSURLBagContext *bagContext; // @synthesize bagContext=_bagContext;
@property (strong) ISBiometricAuthenticationContext *biometricAuthenticationContext; // @synthesize biometricAuthenticationContext=_biometricAuthenticationContext;
@property long long contentLength; // @synthesize contentLength=_contentLength;
@property (strong) NSString *contentType; // @synthesize contentType=_contentType;
@property long long errorHandlerResponseType; // @synthesize errorHandlerResponseType=_errorHandlerResponseType;
@property (strong) id output; // @synthesize output=_output;
@property (weak) ISOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property (strong) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;

+ (id)provider;
- (void).cxx_destruct;
- (BOOL)_runServerAuthenticationOperation:(id)arg1 error:(id *)arg2;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id *)arg2;
- (id)closeStream;
- (void)configureFromProvider:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isStream;
- (BOOL)isStreamComplete;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (BOOL)parseData:(id)arg1 returningError:(id *)arg2;
- (void)resetStream;
- (BOOL)runAuthorizationDialog:(id)arg1 error:(id *)arg2;
- (BOOL)runSubOperation:(id)arg1 error:(id *)arg2;
- (BOOL)runTouchIDAuthorizationDialog:(id)arg1 error:(id *)arg2;
- (void)setup;
- (void)streamCancelled;
- (void)streamDidFailWithError:(id)arg1;
- (long long)streamedBytes;

@end

