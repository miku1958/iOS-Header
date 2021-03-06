//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ADAttributionRequest : PBRequest <NSCopying>
{
    double _downloadClickTimestamp;
    double _iAdConversionTimestamp;
    double _iAdImpressionTimestamp;
    double _purchaseTimestamp;
    double _searchAdClickTimestamp;
    NSString *_adMetadata;
    NSData *_anonymousDemandiAdID;
    NSString *_bundleID;
    NSData *_dPID;
    int _downloadType;
    NSData *_iAdID;
    int _runState;
    NSData *_tiltID;
    NSData *_toroID;
    BOOL _attributedByiTunes;
    struct {
        unsigned int downloadClickTimestamp:1;
        unsigned int iAdConversionTimestamp:1;
        unsigned int iAdImpressionTimestamp:1;
        unsigned int purchaseTimestamp:1;
        unsigned int searchAdClickTimestamp:1;
        unsigned int downloadType:1;
        unsigned int runState:1;
        unsigned int attributedByiTunes:1;
    } _has;
}

@property (strong, nonatomic) NSString *adMetadata; // @synthesize adMetadata=_adMetadata;
@property (strong, nonatomic) NSData *anonymousDemandiAdID; // @synthesize anonymousDemandiAdID=_anonymousDemandiAdID;
@property (nonatomic) BOOL attributedByiTunes; // @synthesize attributedByiTunes=_attributedByiTunes;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property (nonatomic) double downloadClickTimestamp; // @synthesize downloadClickTimestamp=_downloadClickTimestamp;
@property (nonatomic) int downloadType; // @synthesize downloadType=_downloadType;
@property (readonly, nonatomic) BOOL hasAdMetadata;
@property (readonly, nonatomic) BOOL hasAnonymousDemandiAdID;
@property (nonatomic) BOOL hasAttributedByiTunes;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (nonatomic) BOOL hasDownloadClickTimestamp;
@property (nonatomic) BOOL hasDownloadType;
@property (nonatomic) BOOL hasIAdConversionTimestamp;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (nonatomic) BOOL hasIAdImpressionTimestamp;
@property (nonatomic) BOOL hasPurchaseTimestamp;
@property (nonatomic) BOOL hasRunState;
@property (nonatomic) BOOL hasSearchAdClickTimestamp;
@property (readonly, nonatomic) BOOL hasTiltID;
@property (readonly, nonatomic) BOOL hasToroID;
@property (nonatomic) double iAdConversionTimestamp; // @synthesize iAdConversionTimestamp=_iAdConversionTimestamp;
@property (strong, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property (nonatomic) double iAdImpressionTimestamp; // @synthesize iAdImpressionTimestamp=_iAdImpressionTimestamp;
@property (nonatomic) double purchaseTimestamp; // @synthesize purchaseTimestamp=_purchaseTimestamp;
@property (nonatomic) int runState; // @synthesize runState=_runState;
@property (nonatomic) double searchAdClickTimestamp; // @synthesize searchAdClickTimestamp=_searchAdClickTimestamp;
@property (strong, nonatomic) NSData *tiltID; // @synthesize tiltID=_tiltID;
@property (strong, nonatomic) NSData *toroID; // @synthesize toroID=_toroID;

+ (id)options;
- (void).cxx_destruct;
- (int)StringAsDownloadType:(id)arg1;
- (int)StringAsRunState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)runStateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

