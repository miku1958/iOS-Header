//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneError, NPKProtoStandaloneResponseHeader, NSString;

@interface NPKProtoStandaloneInitializationResponse : PBCodable <NSCopying>
{
    struct {
        int *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedServerVersions;
    NSString *_clientInfoHTTPHeader;
    NPKProtoStandaloneError *_error;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

@property (strong, nonatomic) NSString *clientInfoHTTPHeader; // @synthesize clientInfoHTTPHeader=_clientInfoHTTPHeader;
@property (strong, nonatomic) NPKProtoStandaloneError *error; // @synthesize error=_error;
@property (readonly, nonatomic) BOOL hasClientInfoHTTPHeader;
@property (readonly, nonatomic) BOOL hasError;
@property (strong, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader; // @synthesize responseHeader=_responseHeader;
@property (readonly, nonatomic) int *supportedServerVersions;
@property (readonly, nonatomic) unsigned long long supportedServerVersionsCount;

- (void).cxx_destruct;
- (int)StringAsSupportedServerVersions:(id)arg1;
- (void)addSupportedServerVersions:(int)arg1;
- (void)clearSupportedServerVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSupportedServerVersions:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedServerVersionsAsString:(int)arg1;
- (int)supportedServerVersionsAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

