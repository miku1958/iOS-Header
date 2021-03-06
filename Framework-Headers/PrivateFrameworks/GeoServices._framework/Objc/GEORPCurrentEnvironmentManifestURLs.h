//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSString *_environmentDisplayName;
    NSString *_environmentReleaseName;
    NSMutableArray *_urls;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_environmentDisplayName:1;
        unsigned int read_environmentReleaseName:1;
        unsigned int read_urls:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *environmentDisplayName;
@property (strong, nonatomic) NSString *environmentReleaseName;
@property (readonly, nonatomic) BOOL hasEnvironmentDisplayName;
@property (readonly, nonatomic) BOOL hasEnvironmentReleaseName;
@property (strong, nonatomic) NSMutableArray *urls;

+ (BOOL)isValid:(id)arg1;
+ (Class)urlType;
- (void).cxx_destruct;
- (void)addUrl:(id)arg1;
- (void)clearUrls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)urlAtIndex:(unsigned long long)arg1;
- (unsigned long long)urlsCount;
- (void)writeTo:(id)arg1;

@end

