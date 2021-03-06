//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray;

@interface AWDSiriRequestRecord : PBCodable <NSCopying>
{
    long long _btRetransmissionRateRx;
    long long _btRetransmissionRateTx;
    unsigned long long _btRssi;
    long long _btTech;
    unsigned long long _endTimestamp;
    long long _expectedThroughputVIBE;
    unsigned long long _iRATRecommendationDelay;
    long long _lsmRecommendationBe;
    long long _packetLifetimeVIBE;
    long long _packetLossRateVIBE;
    unsigned long long _startTimestamp;
    unsigned long long _timeToFirstWord;
    long long _wifiCCA;
    long long _wifiRSSI;
    long long _wifiSNR;
    unsigned int _beaconPer;
    int _errorCode;
    int _errorDomain;
    int _iRATRecommendation;
    unsigned int _idsErrorCode;
    unsigned int _idsMessageDelay;
    unsigned int _idsSocketDelay;
    unsigned int _nwtype;
    int _requestStatus;
    NSMutableArray *_transportHistorys;
    int _underlyingErrorCode;
    int _underlyingErrorDomain;
    struct {
        unsigned int btRetransmissionRateRx:1;
        unsigned int btRetransmissionRateTx:1;
        unsigned int btRssi:1;
        unsigned int btTech:1;
        unsigned int endTimestamp:1;
        unsigned int expectedThroughputVIBE:1;
        unsigned int iRATRecommendationDelay:1;
        unsigned int lsmRecommendationBe:1;
        unsigned int packetLifetimeVIBE:1;
        unsigned int packetLossRateVIBE:1;
        unsigned int startTimestamp:1;
        unsigned int timeToFirstWord:1;
        unsigned int wifiCCA:1;
        unsigned int wifiRSSI:1;
        unsigned int wifiSNR:1;
        unsigned int beaconPer:1;
        unsigned int errorCode:1;
        unsigned int errorDomain:1;
        unsigned int iRATRecommendation:1;
        unsigned int idsErrorCode:1;
        unsigned int idsMessageDelay:1;
        unsigned int idsSocketDelay:1;
        unsigned int nwtype:1;
        unsigned int requestStatus:1;
        unsigned int underlyingErrorCode:1;
        unsigned int underlyingErrorDomain:1;
    } _has;
}

@property (nonatomic) unsigned int beaconPer; // @synthesize beaconPer=_beaconPer;
@property (nonatomic) long long btRetransmissionRateRx; // @synthesize btRetransmissionRateRx=_btRetransmissionRateRx;
@property (nonatomic) long long btRetransmissionRateTx; // @synthesize btRetransmissionRateTx=_btRetransmissionRateTx;
@property (nonatomic) unsigned long long btRssi; // @synthesize btRssi=_btRssi;
@property (nonatomic) long long btTech; // @synthesize btTech=_btTech;
@property (nonatomic) unsigned long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property (nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property (nonatomic) int errorDomain; // @synthesize errorDomain=_errorDomain;
@property (nonatomic) long long expectedThroughputVIBE; // @synthesize expectedThroughputVIBE=_expectedThroughputVIBE;
@property (nonatomic) BOOL hasBeaconPer;
@property (nonatomic) BOOL hasBtRetransmissionRateRx;
@property (nonatomic) BOOL hasBtRetransmissionRateTx;
@property (nonatomic) BOOL hasBtRssi;
@property (nonatomic) BOOL hasBtTech;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain;
@property (nonatomic) BOOL hasExpectedThroughputVIBE;
@property (nonatomic) BOOL hasIRATRecommendation;
@property (nonatomic) BOOL hasIRATRecommendationDelay;
@property (nonatomic) BOOL hasIdsErrorCode;
@property (nonatomic) BOOL hasIdsMessageDelay;
@property (nonatomic) BOOL hasIdsSocketDelay;
@property (nonatomic) BOOL hasLsmRecommendationBe;
@property (nonatomic) BOOL hasNwtype;
@property (nonatomic) BOOL hasPacketLifetimeVIBE;
@property (nonatomic) BOOL hasPacketLossRateVIBE;
@property (nonatomic) BOOL hasRequestStatus;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) BOOL hasTimeToFirstWord;
@property (nonatomic) BOOL hasUnderlyingErrorCode;
@property (nonatomic) BOOL hasUnderlyingErrorDomain;
@property (nonatomic) BOOL hasWifiCCA;
@property (nonatomic) BOOL hasWifiRSSI;
@property (nonatomic) BOOL hasWifiSNR;
@property (nonatomic) int iRATRecommendation; // @synthesize iRATRecommendation=_iRATRecommendation;
@property (nonatomic) unsigned long long iRATRecommendationDelay; // @synthesize iRATRecommendationDelay=_iRATRecommendationDelay;
@property (nonatomic) unsigned int idsErrorCode; // @synthesize idsErrorCode=_idsErrorCode;
@property (nonatomic) unsigned int idsMessageDelay; // @synthesize idsMessageDelay=_idsMessageDelay;
@property (nonatomic) unsigned int idsSocketDelay; // @synthesize idsSocketDelay=_idsSocketDelay;
@property (nonatomic) long long lsmRecommendationBe; // @synthesize lsmRecommendationBe=_lsmRecommendationBe;
@property (nonatomic) unsigned int nwtype; // @synthesize nwtype=_nwtype;
@property (nonatomic) long long packetLifetimeVIBE; // @synthesize packetLifetimeVIBE=_packetLifetimeVIBE;
@property (nonatomic) long long packetLossRateVIBE; // @synthesize packetLossRateVIBE=_packetLossRateVIBE;
@property (nonatomic) int requestStatus; // @synthesize requestStatus=_requestStatus;
@property (nonatomic) unsigned long long startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property (nonatomic) unsigned long long timeToFirstWord; // @synthesize timeToFirstWord=_timeToFirstWord;
@property (strong, nonatomic) NSMutableArray *transportHistorys; // @synthesize transportHistorys=_transportHistorys;
@property (nonatomic) int underlyingErrorCode; // @synthesize underlyingErrorCode=_underlyingErrorCode;
@property (nonatomic) int underlyingErrorDomain; // @synthesize underlyingErrorDomain=_underlyingErrorDomain;
@property (nonatomic) long long wifiCCA; // @synthesize wifiCCA=_wifiCCA;
@property (nonatomic) long long wifiRSSI; // @synthesize wifiRSSI=_wifiRSSI;
@property (nonatomic) long long wifiSNR; // @synthesize wifiSNR=_wifiSNR;

+ (Class)transportHistoryType;
- (int)StringAsErrorDomain:(id)arg1;
- (int)StringAsIRATRecommendation:(id)arg1;
- (int)StringAsRequestStatus:(id)arg1;
- (int)StringAsUnderlyingErrorDomain:(id)arg1;
- (void)addTransportHistory:(id)arg1;
- (void)clearTransportHistorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorDomainAsString:(int)arg1;
- (unsigned long long)hash;
- (id)iRATRecommendationAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestStatusAsString:(int)arg1;
- (id)transportHistoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)transportHistorysCount;
- (id)underlyingErrorDomainAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

