//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class NSMutableSet, NSNumber, NSSet, NSString;

@interface MusicLibraryPlaylistsViewConfiguration : MusicLibraryBrowseTableViewConfiguration
{
    NSMutableSet *_additionalQueryFilterPredicates;
    BOOL _playlistsFilterIsCuratorID;
    unsigned long long _playlistsConfigurationOptions;
    NSString *_playlistsFilter;
    NSNumber *_parentFolderPersistentID;
}

@property (readonly, copy, nonatomic) NSSet *additionalQueryFilterPredicates;
@property (strong, nonatomic) NSNumber *parentFolderPersistentID; // @synthesize parentFolderPersistentID=_parentFolderPersistentID;
@property (nonatomic) unsigned long long playlistsConfigurationOptions; // @synthesize playlistsConfigurationOptions=_playlistsConfigurationOptions;
@property (copy, nonatomic) NSString *playlistsFilter; // @synthesize playlistsFilter=_playlistsFilter;

+ (void)getDetailViewController:(id *)arg1 playbackContext:(id *)arg2 forEntityValueContext:(id)arg3 sourceViewController:(id)arg4;
- (void).cxx_destruct;
- (void)_handleDeletionOfEntityValueProvider:(id)arg1;
- (void)_updatePlaylistsFilterIsCuratorIDStatus;
- (void)addQueryFilterPredicate:(id)arg1;
- (void)applyEntityProviderChangeRecords:(id)arg1;
- (BOOL)canDeleteEntityValueContext:(id)arg1;
- (BOOL)canPreviewEntityValueContext:(id)arg1;
- (id)folderDetailViewControllerWithEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end

