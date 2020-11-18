//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVContentKeyRequestInternal, NSData, NSDictionary, NSError;

@interface AVContentKeyRequest : NSObject
{
    AVContentKeyRequestInternal *_contentKeyRequest;
}

@property (readonly) BOOL canProvidePersistableContentKey;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (readonly, nonatomic) NSData *initializationData;
@property (readonly, copy) NSDictionary *options;
@property (readonly) long long status;

+ (id)_createKeyRequestDictionaryForApp:(id)arg1 persistentKey:(id)arg2 serverChallenge:(id)arg3 cryptorKeyRequestID:(unsigned long long)arg4 purpose:(int)arg5;
+ (id)_ensureProtocolVersionList:(id)arg1;
+ (id)_mergePreloadingRequestOptions:(id)arg1 withCreateKeyRequestOptions:(id)arg2;
+ (int)_prepareCryptor:(struct OpaqueFigCPECryptor *)arg1 forRenewal:(BOOL)arg2 andReturnKeyRequestID:(unsigned long long *)arg3;
+ (void)_validateHLSEncryptionMethod:(id)arg1;
+ (void)_validateProtocolVersionList:(id)arg1;
+ (void)_validateServerChallenge:(id)arg1;
- (BOOL)_canRespondByRequestingPersistableContentKeyRequest;
- (void)_clearContext;
- (void)_copyAndStoreCryptorUUID;
- (int)_extractAndStoreKeyIDFromInitializationData:(id)arg1;
- (void)_finishLoadingCustomURLRequestWithError:(id)arg1;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)arg1 renewalDate:(id)arg2;
- (id)_getRetryReasonForError:(int)arg1;
- (void)_handleKeyResponseError:(id)arg1;
- (void)_handleKeyResponseSuccess;
- (id)_keySystem;
- (int)_prepareForKeyRenewal;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)arg1;
- (struct OpaqueFigCPECryptor *)_setCryptorWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;
- (void)_setError:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)description;
- (struct OpaqueFigCPECryptor *)figCryptor;
- (id)initWithContentKeySession:(id)arg1 reportGroup:(id)arg2 customURLHandler:(struct OpaqueFigCustomURLHandler *)arg3 identifier:(id)arg4 requestInfo:(struct __CFDictionary *)arg5 requestID:(unsigned long long)arg6 providesPersistableKey:(BOOL)arg7 isRenewalRequest:(BOOL)arg8;
- (id)initWithContentKeySession:(id)arg1 reportGroup:(id)arg2 identifier:(id)arg3 initializationData:(id)arg4 preloadingRequestOptions:(id)arg5 providesPersistableKey:(BOOL)arg6;
- (void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)processContentKeyResponse:(id)arg1;
- (void)processContentKeyResponseData:(id)arg1;
- (void)processContentKeyResponseData:(id)arg1 renewalDate:(id)arg2;
- (void)processContentKeyResponseError:(id)arg1;
- (void)renewExpiringContentKeyResponseData;
- (BOOL)renewsExpiringResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;
- (BOOL)respondByRequestingPersistableContentKeyRequestAndReturnError:(id *)arg1;
- (BOOL)setReportGroup:(id)arg1;
- (BOOL)willOutputBeObscuredDueToInsufficientExternalProtectionForDisplays:(id)arg1;

@end
