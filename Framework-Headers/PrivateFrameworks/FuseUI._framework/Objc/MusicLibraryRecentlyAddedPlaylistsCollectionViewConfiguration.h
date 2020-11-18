//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class MusicLibraryPlaylistsViewConfiguration;

@interface MusicLibraryRecentlyAddedPlaylistsCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration
{
    unsigned long long _entityLimit;
    MusicLibraryPlaylistsViewConfiguration *_playlistsViewConfiguration;
}

@property (readonly, nonatomic) unsigned long long entityLimit; // @synthesize entityLimit=_entityLimit;
@property (strong, nonatomic) MusicLibraryPlaylistsViewConfiguration *playlistsViewConfiguration; // @synthesize playlistsViewConfiguration=_playlistsViewConfiguration;

+ (unsigned long long)defaultEntityLimit;
- (void).cxx_destruct;
- (BOOL)canPreviewEntityValueContext:(id)arg1;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityLimit:(unsigned long long)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end

