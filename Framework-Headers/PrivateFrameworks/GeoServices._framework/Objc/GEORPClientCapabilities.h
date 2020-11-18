//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEORPClientCapabilities : PBCodable <NSCopying>
{
    int _transitMarketSupport;
    BOOL _hasConstrainedProblemStatusSize;
    BOOL _hasFeatureHandle;
    BOOL _hasNoOptInRequest;
    BOOL _hasSupportForIdsBasedNotifications;
    struct {
        unsigned int transitMarketSupport:1;
        unsigned int hasConstrainedProblemStatusSize:1;
        unsigned int hasFeatureHandle:1;
        unsigned int hasNoOptInRequest:1;
        unsigned int hasSupportForIdsBasedNotifications:1;
    } _has;
}

@property (nonatomic) BOOL hasConstrainedProblemStatusSize; // @synthesize hasConstrainedProblemStatusSize=_hasConstrainedProblemStatusSize;
@property (nonatomic) BOOL hasFeatureHandle; // @synthesize hasFeatureHandle=_hasFeatureHandle;
@property (nonatomic) BOOL hasHasConstrainedProblemStatusSize;
@property (nonatomic) BOOL hasHasFeatureHandle;
@property (nonatomic) BOOL hasHasNoOptInRequest;
@property (nonatomic) BOOL hasHasSupportForIdsBasedNotifications;
@property (nonatomic) BOOL hasNoOptInRequest; // @synthesize hasNoOptInRequest=_hasNoOptInRequest;
@property (nonatomic) BOOL hasSupportForIdsBasedNotifications; // @synthesize hasSupportForIdsBasedNotifications=_hasSupportForIdsBasedNotifications;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (nonatomic) int transitMarketSupport; // @synthesize transitMarketSupport=_transitMarketSupport;

- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transitMarketSupportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
