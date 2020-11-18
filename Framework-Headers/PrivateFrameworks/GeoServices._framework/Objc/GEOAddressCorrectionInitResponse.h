//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLocation, NSMutableArray, NSString;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>
{
    NSMutableArray *_address;
    NSString *_addressID;
    GEOLocation *_addressLocation;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct {
        unsigned int numberOfVisitsBucketSize:1;
        unsigned int statusCode:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *address; // @synthesize address=_address;
@property (strong, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property (strong, nonatomic) GEOLocation *addressLocation; // @synthesize addressLocation=_addressLocation;
@property (readonly, nonatomic) BOOL hasAddressID;
@property (readonly, nonatomic) BOOL hasAddressLocation;
@property (nonatomic) BOOL hasNumberOfVisitsBucketSize;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) unsigned int numberOfVisitsBucketSize; // @synthesize numberOfVisitsBucketSize=_numberOfVisitsBucketSize;
@property (nonatomic) int statusCode; // @synthesize statusCode=_statusCode;

+ (Class)addressType;
- (int)StringAsStatusCode:(id)arg1;
- (void)addAddress:(id)arg1;
- (id)addressAtIndex:(unsigned long long)arg1;
- (unsigned long long)addressCount;
- (void)clearAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

