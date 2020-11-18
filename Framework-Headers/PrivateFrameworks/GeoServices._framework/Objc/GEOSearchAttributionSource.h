//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    CDStruct_95bda58d _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
}

@property (strong, nonatomic) NSMutableArray *attributionApps; // @synthesize attributionApps=_attributionApps;
@property (readonly, nonatomic) int *attributionRequirements;
@property (readonly, nonatomic) unsigned long long attributionRequirementsCount;
@property (readonly, nonatomic) BOOL hasWebBaseActionURL;
@property (strong, nonatomic) NSMutableArray *localizedAttributions; // @synthesize localizedAttributions=_localizedAttributions;
@property (strong, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property (nonatomic) unsigned int sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property (strong, nonatomic) NSMutableArray *supportedComponentActions; // @synthesize supportedComponentActions=_supportedComponentActions;
@property (strong, nonatomic) NSString *webBaseActionURL; // @synthesize webBaseActionURL=_webBaseActionURL;

+ (Class)attributionAppsType;
+ (Class)localizedAttributionType;
+ (Class)supportedComponentActionsType;
- (int)StringAsAttributionRequirements:(id)arg1;
- (void)addAttributionApps:(id)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (void)addLocalizedAttribution:(id)arg1;
- (void)addSupportedComponentActions:(id)arg1;
- (id)attributionAppsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionAppsCount;
- (id)attributionRequirementsAsString:(int)arg1;
- (int)attributionRequirementsAtIndex:(unsigned long long)arg1;
- (id)bestLocalizedAttribution;
- (BOOL)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2;
- (void)clearAttributionApps;
- (void)clearAttributionRequirements;
- (void)clearLocalizedAttributions;
- (void)clearSupportedComponentActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAttributionsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned long long)arg2;
- (id)supportedComponentActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedComponentActionsCount;
- (BOOL)supportsAction:(int)arg1 forComponent:(int)arg2;
- (void)writeTo:(id)arg1;

@end

