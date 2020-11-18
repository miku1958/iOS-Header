//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable <NSCopying>
{
    NSString *_baseURL;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    int _updateBehavior;
    NSMutableArray *_validVersions;
    BOOL _multiTileURLUsesStatusCodes;
    struct {
        unsigned int updateBehavior:1;
        unsigned int multiTileURLUsesStatusCodes:1;
    } _has;
}

@property (strong, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly, nonatomic) BOOL hasBaseURL;
@property (readonly, nonatomic) BOOL hasLocalizationURL;
@property (readonly, nonatomic) BOOL hasMultiTileURL;
@property (nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
@property (nonatomic) BOOL hasUpdateBehavior;
@property (strong, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property (strong, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;
@property (nonatomic) BOOL multiTileURLUsesStatusCodes; // @synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes;
@property (nonatomic) int scale; // @synthesize scale=_scale;
@property (nonatomic) int size; // @synthesize size=_size;
@property (nonatomic) int style; // @synthesize style=_style;
@property (strong, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property (nonatomic) int updateBehavior; // @synthesize updateBehavior=_updateBehavior;
@property (strong, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;

- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (void)clearSupportedLanguages;
- (void)clearValidVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedLanguagesCount;
- (id)validVersionAtIndex:(unsigned long long)arg1;
- (unsigned long long)validVersionsCount;
- (void)writeTo:(id)arg1;

@end
