//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Search/NSCopying-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString;

@interface SPSearchResultSection : PBCodable <NSCopying>
{
    NSString *_category;
    NSString *_displayIdentifier;
    unsigned int _domain;
    int _flags;
    NSString *_icon;
    NSMutableOrderedSet *_resultSet;
    NSString *_scheme;
    struct {
        unsigned int domain:1;
        unsigned int flags:1;
    } _has;
    BOOL _isGlanceCategory;
    NSArray *_hiddenExtResults;
}

@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (strong, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property (nonatomic) unsigned int domain; // @synthesize domain=_domain;
@property (nonatomic) int flags; // @synthesize flags=_flags;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDisplayIdentifier;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) BOOL hasFlags;
@property (readonly, nonatomic) BOOL hasIcon;
@property (readonly, nonatomic) BOOL hasResults;
@property (readonly, nonatomic) BOOL hasScheme;
@property (strong, nonatomic) NSArray *hiddenExtResults; // @synthesize hiddenExtResults=_hiddenExtResults;
@property (strong, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property (nonatomic) BOOL isGlanceCategory; // @synthesize isGlanceCategory=_isGlanceCategory;
@property (strong, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;

- (void).cxx_destruct;
- (void)addHiddenExtResult:(id)arg1;
- (void)addResults:(id)arg1;
- (void)addResults:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)clearResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasEquivalentResults:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfResult:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)removeResultsAtIndex:(unsigned long long)arg1;
- (id)resultSet;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)serializeTo:(id)arg1;
- (BOOL)serialized;
- (void)writeTo:(id)arg1;

@end

