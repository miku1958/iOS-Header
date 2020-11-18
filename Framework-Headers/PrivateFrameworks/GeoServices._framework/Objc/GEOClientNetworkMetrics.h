//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOClientNetworkMetrics : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    double _requestEnd;
    double _requestStart;
    int _httpResponseCode;
    int _redirectCount;
    int _requestDataSize;
    int _responseDataSize;
    NSString *_serviceIpAddress;
    NSMutableArray *_transactionMetrics;
    struct {
        unsigned int requestEnd:1;
        unsigned int requestStart:1;
        unsigned int httpResponseCode:1;
        unsigned int redirectCount:1;
        unsigned int requestDataSize:1;
        unsigned int responseDataSize:1;
    } _has;
}

@property (nonatomic) BOOL hasHttpResponseCode;
@property (nonatomic) BOOL hasRedirectCount;
@property (nonatomic) BOOL hasRequestDataSize;
@property (nonatomic) BOOL hasRequestEnd;
@property (nonatomic) BOOL hasRequestStart;
@property (nonatomic) BOOL hasResponseDataSize;
@property (readonly, nonatomic) BOOL hasServiceIpAddress;
@property (nonatomic) int httpResponseCode; // @synthesize httpResponseCode=_httpResponseCode;
@property (nonatomic) int redirectCount; // @synthesize redirectCount=_redirectCount;
@property (nonatomic) int requestDataSize; // @synthesize requestDataSize=_requestDataSize;
@property (nonatomic) double requestEnd; // @synthesize requestEnd=_requestEnd;
@property (nonatomic) double requestStart; // @synthesize requestStart=_requestStart;
@property (nonatomic) int responseDataSize; // @synthesize responseDataSize=_responseDataSize;
@property (strong, nonatomic) NSString *serviceIpAddress; // @synthesize serviceIpAddress=_serviceIpAddress;
@property (strong, nonatomic) NSMutableArray *transactionMetrics; // @synthesize transactionMetrics=_transactionMetrics;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)transactionMetricsType;
- (void).cxx_destruct;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (void)writeTo:(id)arg1;

@end

