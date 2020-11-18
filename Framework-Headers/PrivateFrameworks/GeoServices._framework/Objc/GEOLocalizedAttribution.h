//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOLocalizedAttribution : PBCodable <NSCopying>
{
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (strong, nonatomic) NSMutableArray *logoURLs; // @synthesize logoURLs=_logoURLs;
@property (strong, nonatomic) NSMutableArray *snippetLogoURLs; // @synthesize snippetLogoURLs=_snippetLogoURLs;

- (void)addLogoURLs:(id)arg1;
- (void)addSnippetLogoURLs:(id)arg1;
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;
- (void)clearLogoURLs;
- (void)clearSnippetLogoURLs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)logoURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)logoURLsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)snippetLogoURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)snippetLogoURLsCount;
- (void)writeTo:(id)arg1;

@end

