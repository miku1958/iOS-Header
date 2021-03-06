//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBShareShortcutEvent : PBCodable <NSCopying>
{
    unsigned int _actionCount;
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    NSString *_sharingDestinationBundleIdentifier;
    int _source;
    struct {
        unsigned int actionCount:1;
        unsigned int source:1;
    } _has;
}

@property (nonatomic) unsigned int actionCount; // @synthesize actionCount=_actionCount;
@property (strong, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property (strong, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property (nonatomic) BOOL hasActionCount;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSharingDestinationBundleIdentifier;
@property (nonatomic) BOOL hasSource;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NSString *sharingDestinationBundleIdentifier; // @synthesize sharingDestinationBundleIdentifier=_sharingDestinationBundleIdentifier;
@property (nonatomic) int source; // @synthesize source=_source;

- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

