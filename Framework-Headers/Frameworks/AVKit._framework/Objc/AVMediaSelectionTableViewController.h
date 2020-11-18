//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class AVMediaSelectionOption, AVPlayerController;

@interface AVMediaSelectionTableViewController : UITableViewController
{
    AVMediaSelectionOption *_selectedAudioMediaSelectionOption;
    AVMediaSelectionOption *_selectedLegibleMediaSelectionOption;
    AVPlayerController *_playerController;
}

@property (strong, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;

- (void).cxx_destruct;
- (BOOL)_isSelectedOrCurrentAudioMediaSelectionOption:(id)arg1;
- (BOOL)_isSelectedOrCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

