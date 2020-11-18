//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>

@class MPAVItem, MPAlternateTrack, NSString, UITableView, _UIBackdropView;

@interface _MPAudioAndSubtitlesController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MPAVItem *_avItem;
    UITableView *_tableView;
    BOOL _hasAudio;
    BOOL _hasSubtitles;
    MPAlternateTrack *_originalAudioTrack;
    MPAlternateTrack *_originalSubtitleTrack;
    MPAlternateTrack *_newAudioTrack;
    MPAlternateTrack *_newSubtitleTrack;
    _UIBackdropView *_backdropView;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyChanges;
- (void)_configurePopover;
- (void)_doneButtonTapped:(id)arg1;
- (id)_trackAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithAVItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

