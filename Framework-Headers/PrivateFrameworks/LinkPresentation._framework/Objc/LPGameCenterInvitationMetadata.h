//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataPresentationTransformerAdaptor-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformerAdaptor-Protocol.h>

@class LPImage, NSString;

@interface LPGameCenterInvitationMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor>
{
    unsigned int _numberOfPlayers;
    unsigned int _minimumNumberOfPlayers;
    unsigned int _maximumNumberOfPlayers;
    NSString *_game;
    LPImage *_image;
    LPImage *_icon;
}

@property (copy, nonatomic) NSString *game; // @synthesize game=_game;
@property (strong, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property (strong, nonatomic) LPImage *image; // @synthesize image=_image;
@property (nonatomic) unsigned int maximumNumberOfPlayers; // @synthesize maximumNumberOfPlayers=_maximumNumberOfPlayers;
@property (nonatomic) unsigned int minimumNumberOfPlayers; // @synthesize minimumNumberOfPlayers=_minimumNumberOfPlayers;
@property (nonatomic) unsigned int numberOfPlayers; // @synthesize numberOfPlayers=_numberOfPlayers;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)invitationText;
- (id)playerCountText;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;

@end
