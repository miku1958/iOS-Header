//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class MusicCompositeEntityViewDescriptor, MusicEntityViewDescriptor, MusicMediaDetailTintInformation, MusicMediaProductTracklistTableViewDescriptor, NSString;
@protocol MusicEntityProviding;

@interface MusicProductTracklistTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration
{
    BOOL _wantsArtistName;
    BOOL _wantsArtwork;
    BOOL _wantsCompleteOffer;
    BOOL _wantsCopyrightText;
    MusicEntityViewDescriptor *_copyrightEntityViewDescriptor;
    MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor;
    MusicEntityViewDescriptor *_shuffleEntityViewDescriptor;
    MusicMediaProductTracklistTableViewDescriptor *_tracklistTableViewDescriptor;
    MusicCompositeEntityViewDescriptor *_compositeEntityViewDescriptor;
    NSString *_completeOfferLocalizedTitle;
    id<MusicEntityProviding> _entityProvider;
    id<MusicEntityProviding> _copyrightSourceEntityProvider;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    long long _prominentTrackStoreID;
}

@property (readonly, nonatomic) MusicCompositeEntityViewDescriptor *_compositeEntityViewDescriptor; // @synthesize _compositeEntityViewDescriptor;
@property (readonly, nonatomic) MusicEntityViewDescriptor *_copyrightEntityViewDescriptor; // @synthesize _copyrightEntityViewDescriptor;
@property (readonly, nonatomic) MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor; // @synthesize _showCompleteOfferEntityViewDescriptor;
@property (readonly, nonatomic) MusicEntityViewDescriptor *_shuffleEntityViewDescriptor; // @synthesize _shuffleEntityViewDescriptor;
@property (readonly, nonatomic) MusicMediaProductTracklistTableViewDescriptor *_tracklistTableViewDescriptor; // @synthesize _tracklistTableViewDescriptor;
@property (copy, nonatomic) NSString *completeOfferLocalizedTitle; // @synthesize completeOfferLocalizedTitle=_completeOfferLocalizedTitle;
@property (strong, nonatomic) id<MusicEntityProviding> copyrightSourceEntityProvider; // @synthesize copyrightSourceEntityProvider=_copyrightSourceEntityProvider;
@property (readonly, nonatomic) id<MusicEntityProviding> entityProvider; // @synthesize entityProvider=_entityProvider;
@property (copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property (nonatomic) long long prominentTrackStoreID; // @synthesize prominentTrackStoreID=_prominentTrackStoreID;
@property (readonly, nonatomic) MusicMediaProductTracklistTableViewDescriptor *tracklistTableViewDescriptor;
@property (nonatomic) BOOL wantsArtistName; // @synthesize wantsArtistName=_wantsArtistName;
@property (nonatomic) BOOL wantsArtwork; // @synthesize wantsArtwork=_wantsArtwork;
@property (nonatomic) BOOL wantsCompleteOffer; // @synthesize wantsCompleteOffer=_wantsCompleteOffer;
@property (nonatomic) BOOL wantsCopyrightText; // @synthesize wantsCopyrightText=_wantsCopyrightText;

+ (Class)tracklistItemContentDescriptorClass;
- (void).cxx_destruct;
- (void)_configureCopyrightViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShowCompleteAlbumViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShuffleEntityViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (id)_loadCopyrightEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadShowCompleteEntityViewDescriptorWithCompleteOfferEntityProvider:(id)arg1;
- (id)_loadShuffleEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadTracklistTableViewDescriptor;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityProvider:(id)arg1;
- (id)loadEntityViewDescriptor;
- (id)newSelectionEntityValueContext;
- (id)newViewController;

@end
