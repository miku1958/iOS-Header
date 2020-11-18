//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicLibraryPlaylistsViewConfiguration.h>

@protocol MusicContextualPlaylistPickerDelegate;

@interface MusicContextualPlaylistPickerViewConfiguration : MusicLibraryPlaylistsViewConfiguration
{
    id<MusicContextualPlaylistPickerDelegate> _playlistPickerDelegate;
}

@property (weak, nonatomic) id<MusicContextualPlaylistPickerDelegate> playlistPickerDelegate; // @synthesize playlistPickerDelegate=_playlistPickerDelegate;

- (void).cxx_destruct;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2;
- (id)loadEntityViewDescriptor;
- (id)newViewController;

@end

