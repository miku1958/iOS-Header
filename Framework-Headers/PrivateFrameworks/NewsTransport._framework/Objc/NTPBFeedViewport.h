//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBFeedViewport : PBCodable <NSCopying>
{
    unsigned long long _feedDBVersion;
    unsigned long long _version;
    NSMutableArray *_elements;
    NSString *_identifier;
    NSMutableArray *_sharedStrings;
    struct {
        unsigned int feedDBVersion:1;
        unsigned int version:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property (nonatomic) unsigned long long feedDBVersion; // @synthesize feedDBVersion=_feedDBVersion;
@property (nonatomic) BOOL hasFeedDBVersion;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableArray *sharedStrings; // @synthesize sharedStrings=_sharedStrings;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (Class)elementsType;
+ (Class)sharedStringsType;
- (void)addElements:(id)arg1;
- (void)addSharedStrings:(id)arg1;
- (void)clearElements;
- (void)clearSharedStrings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)elementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sharedStringsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sharedStringsCount;
- (void)writeTo:(id)arg1;

@end
