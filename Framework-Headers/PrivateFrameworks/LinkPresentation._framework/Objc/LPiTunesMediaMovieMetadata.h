//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataPresentationTransformerAdaptor-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformerAdaptor-Protocol.h>
#import <LinkPresentation/LPLinkMetadataStoreTransformerAdaptor-Protocol.h>

@class LPArtworkMetadata, LPImage, NSString;

@interface LPiTunesMediaMovieMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor, LPLinkMetadataStoreTransformerAdaptor>
{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_genre;
    LPImage *_artwork;
    LPArtworkMetadata *_artworkMetadata;
    LPImage *_branding;
}

@property (strong, nonatomic) LPImage *artwork; // @synthesize artwork=_artwork;
@property (copy, nonatomic) LPArtworkMetadata *artworkMetadata; // @synthesize artworkMetadata=_artworkMetadata;
@property (strong, nonatomic) LPImage *branding; // @synthesize branding=_branding;
@property (copy, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *storeFrontIdentifier; // @synthesize storeFrontIdentifier=_storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)populateLinkMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)storeIdentifierForTransformer:(id)arg1;

@end

