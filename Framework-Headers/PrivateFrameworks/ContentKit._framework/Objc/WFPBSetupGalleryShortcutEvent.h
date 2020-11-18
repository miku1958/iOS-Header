//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSetupGalleryShortcutEvent : PBCodable <NSCopying>
{
    NSString *_addToSiriBundleIdentifier;
    NSString *_galleryCategoryIdentifier;
    NSString *_galleryIdentifier;
    NSString *_key;
    BOOL _completed;
    CDStruct_c267e6e8 _has;
}

@property (strong, nonatomic) NSString *addToSiriBundleIdentifier; // @synthesize addToSiriBundleIdentifier=_addToSiriBundleIdentifier;
@property (nonatomic) BOOL completed; // @synthesize completed=_completed;
@property (strong, nonatomic) NSString *galleryCategoryIdentifier; // @synthesize galleryCategoryIdentifier=_galleryCategoryIdentifier;
@property (strong, nonatomic) NSString *galleryIdentifier; // @synthesize galleryIdentifier=_galleryIdentifier;
@property (readonly, nonatomic) BOOL hasAddToSiriBundleIdentifier;
@property (nonatomic) BOOL hasCompleted;
@property (readonly, nonatomic) BOOL hasGalleryCategoryIdentifier;
@property (readonly, nonatomic) BOOL hasGalleryIdentifier;
@property (readonly, nonatomic) BOOL hasKey;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
