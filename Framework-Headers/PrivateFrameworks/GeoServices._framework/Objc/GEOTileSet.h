//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOTileSet : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_baseURL;
    int _checksumType;
    NSMutableArray *_countryRegionWhitelists;
    unsigned int _dataSet;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    int _requestStyle;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    int _updateBehavior;
    NSMutableArray *_validVersions;
    BOOL _multiTileURLUsesStatusCodes;
    struct {
        unsigned int checksumType:1;
        unsigned int dataSet:1;
        unsigned int requestStyle:1;
        unsigned int updateBehavior:1;
        unsigned int multiTileURLUsesStatusCodes:1;
    } _has;
}

@property (strong, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property (nonatomic) int checksumType; // @synthesize checksumType=_checksumType;
@property (strong, nonatomic) NSMutableArray *countryRegionWhitelists; // @synthesize countryRegionWhitelists=_countryRegionWhitelists;
@property (nonatomic) unsigned int dataSet; // @synthesize dataSet=_dataSet;
@property (readonly, nonatomic) BOOL hasBaseURL;
@property (nonatomic) BOOL hasChecksumType;
@property (nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasLocalizationURL;
@property (readonly, nonatomic) BOOL hasMultiTileURL;
@property (nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property (nonatomic) BOOL hasRequestStyle;
@property (nonatomic) BOOL hasUpdateBehavior;
@property (strong, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property (strong, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;
@property (nonatomic) BOOL multiTileURLUsesStatusCodes; // @synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes;
@property (nonatomic) int requestStyle; // @synthesize requestStyle=_requestStyle;
@property (nonatomic) int scale; // @synthesize scale=_scale;
@property (nonatomic) int size; // @synthesize size=_size;
@property (nonatomic) int style; // @synthesize style=_style;
@property (strong, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
@property (strong, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;

+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)validVersionType;
- (void).cxx_destruct;
- (int)StringAsChecksumType:(id)arg1;
- (int)StringAsRequestStyle:(id)arg1;
- (int)StringAsScale:(id)arg1;
- (int)StringAsSize:(id)arg1;
- (int)StringAsStyle:(id)arg1;
- (int)StringAsUpdateBehavior:(id)arg1;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (id)checksumTypeAsString:(int)arg1;
- (void)clearCountryRegionWhitelists;
- (void)clearSupportedLanguages;
- (void)clearValidVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)countryRegionWhitelistAtIndex:(unsigned long long)arg1;
- (unsigned long long)countryRegionWhitelistsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestStyleAsString:(int)arg1;
- (id)scaleAsString:(int)arg1;
- (id)sizeAsString:(int)arg1;
- (id)styleAsString:(int)arg1;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedLanguagesCount;
- (id)updateBehaviorAsString:(int)arg1;
- (id)validVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)validVersionsCount;
- (void)writeTo:(id)arg1;

@end

