//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSString;

@interface NTPBArticleTopic : PBCodable <NSCopying>
{
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_cohorts;
    NSString *_tagID;
    BOOL _isEligibleForGrouping;
    BOOL _isEligibleForGroupingIfFavorited;
    BOOL _isHidden;
    CDStruct_d00ad9e3 _has;
}

@property (strong, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts; // @synthesize cohorts=_cohorts;
@property (readonly, nonatomic) BOOL hasCohorts;
@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL hasIsHidden;
@property (readonly, nonatomic) BOOL hasTagID;
@property (nonatomic) BOOL isEligibleForGrouping; // @synthesize isEligibleForGrouping=_isEligibleForGrouping;
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited; // @synthesize isEligibleForGroupingIfFavorited=_isEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL isHidden; // @synthesize isHidden=_isHidden;
@property (strong, nonatomic) NSString *tagID; // @synthesize tagID=_tagID;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

