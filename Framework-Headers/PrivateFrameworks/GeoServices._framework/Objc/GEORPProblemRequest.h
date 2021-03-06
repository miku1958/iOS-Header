//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAnalyticMetadata, GEOPDClientMetadata, GEORPClientCapabilities, GEORPDebugSettings, GEORPProblem, GEORPUserCredentials, NSData, NSString, PBDataReader;

@interface GEORPProblemRequest : PBRequest <NSCopying>
{
    PBDataReader *_reader;
    GEOPDAnalyticMetadata *_analyticMetadata;
    GEORPClientCapabilities *_clientCapabilities;
    GEOPDClientMetadata *_clientMetadata;
    GEORPDebugSettings *_debugSettings;
    NSData *_devicePushToken;
    NSString *_inputLanguage;
    NSString *_problemUuid;
    GEORPProblem *_problem;
    GEORPUserCredentials *_userCredentials;
    NSString *_userEmail;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_analyticMetadata:1;
        unsigned int read_clientCapabilities:1;
        unsigned int read_clientMetadata:1;
        unsigned int read_debugSettings:1;
        unsigned int read_devicePushToken:1;
        unsigned int read_inputLanguage:1;
        unsigned int read_problemUuid:1;
        unsigned int read_problem:1;
        unsigned int read_userCredentials:1;
        unsigned int read_userEmail:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOPDAnalyticMetadata *analyticMetadata;
@property (strong, nonatomic) GEORPClientCapabilities *clientCapabilities;
@property (strong, nonatomic) GEOPDClientMetadata *clientMetadata;
@property (strong, nonatomic) GEORPDebugSettings *debugSettings;
@property (strong, nonatomic) NSData *devicePushToken;
@property (readonly, nonatomic) BOOL hasAnalyticMetadata;
@property (readonly, nonatomic) BOOL hasClientCapabilities;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (readonly, nonatomic) BOOL hasDebugSettings;
@property (readonly, nonatomic) BOOL hasDevicePushToken;
@property (readonly, nonatomic) BOOL hasInputLanguage;
@property (readonly, nonatomic) BOOL hasProblem;
@property (readonly, nonatomic) BOOL hasProblemUuid;
@property (readonly, nonatomic) BOOL hasUserCredentials;
@property (readonly, nonatomic) BOOL hasUserEmail;
@property (strong, nonatomic) NSString *inputLanguage;
@property (strong, nonatomic) GEORPProblem *problem;
@property (strong, nonatomic) NSString *problemUuid;
@property (strong, nonatomic) GEORPUserCredentials *userCredentials;
@property (strong, nonatomic) NSString *userEmail;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end

