//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPResponseOperationResultErrorAuxiliaryError, CKDPResponseOperationResultErrorClient, CKDPResponseOperationResultErrorExtension, CKDPResponseOperationResultErrorServer, NSString;

@interface CKDPResponseOperationResultError : PBCodable <NSCopying>
{
    CKDPResponseOperationResultErrorAuxiliaryError *_auxiliaryError;
    CKDPResponseOperationResultErrorClient *_clientError;
    NSString *_errorDescription;
    NSString *_errorInternal;
    NSString *_errorKey;
    CKDPResponseOperationResultErrorExtension *_extensionError;
    int _retryAfterSeconds;
    CKDPResponseOperationResultErrorServer *_serverError;
    struct {
        unsigned int retryAfterSeconds:1;
    } _has;
}

@property (strong, nonatomic) CKDPResponseOperationResultErrorAuxiliaryError *auxiliaryError; // @synthesize auxiliaryError=_auxiliaryError;
@property (strong, nonatomic) CKDPResponseOperationResultErrorClient *clientError; // @synthesize clientError=_clientError;
@property (strong, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property (strong, nonatomic) NSString *errorInternal; // @synthesize errorInternal=_errorInternal;
@property (strong, nonatomic) NSString *errorKey; // @synthesize errorKey=_errorKey;
@property (strong, nonatomic) CKDPResponseOperationResultErrorExtension *extensionError; // @synthesize extensionError=_extensionError;
@property (readonly, nonatomic) BOOL hasAuxiliaryError;
@property (readonly, nonatomic) BOOL hasClientError;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (readonly, nonatomic) BOOL hasErrorInternal;
@property (readonly, nonatomic) BOOL hasErrorKey;
@property (readonly, nonatomic) BOOL hasExtensionError;
@property (nonatomic) BOOL hasRetryAfterSeconds;
@property (readonly, nonatomic) BOOL hasServerError;
@property (nonatomic) int retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
@property (strong, nonatomic) CKDPResponseOperationResultErrorServer *serverError; // @synthesize serverError=_serverError;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

