//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicNavigationController.h>

#import <FuseUI/MusicContextualPlaylistPickerDelegate-Protocol.h>

@class MusicContextualPlaylistPickerViewConfiguration, MusicEntityValueContext, NSArray, NSString, UIViewController;

@interface MusicContextualPlaylistPickerNavigationController : MusicNavigationController <MusicContextualPlaylistPickerDelegate>
{
    MusicContextualPlaylistPickerViewConfiguration *_playlistsViewConfiguration;
    UIViewController *_playlistsViewController;
    CDUnknownBlockType _playlistSelectionHandler;
    MusicEntityValueContext *_prepopulatedItemsEntityValueContext;
    NSArray *_prepopulatedMediaItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MusicEntityValueContext *prepopulatedItemsEntityValueContext; // @synthesize prepopulatedItemsEntityValueContext=_prepopulatedItemsEntityValueContext;
@property (strong, nonatomic) NSArray *prepopulatedMediaItems; // @synthesize prepopulatedMediaItems=_prepopulatedMediaItems;
@property (readonly) Class superclass;

+ (BOOL)automaticallyInstallAccountBarButtonItem;
+ (BOOL)automaticallyInstallSearchBarButtonItem;
- (void).cxx_destruct;
- (void)_dismissPlaylistPicker;
- (void)_playlistPickerDidFinishWithBagDictionary:(id)arg1 selectedPlaylist:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPlaylistSelectionHandler:(CDUnknownBlockType)arg1;
- (void)playlistPickerDidFinishWithSelectedPlaylist:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end

