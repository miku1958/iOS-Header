//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <HomeUI/MPMediaPickerControllerDelegate-Protocol.h>

@class HUAlarmTonesManager, MPMediaPickerController, NSIndexPath, NSMutableArray, NSNumber, NSString;
@protocol HUAlarmTonePickerDelegate;

@interface HUAlarmTonePickerViewController : UITableViewController <MPMediaPickerControllerDelegate>
{
    NSString *_selectedToneIdentifier;
    NSNumber *_selectedMediaIdentifier;
    NSString *_loggedInAppleMusicAccountDSID;
    id<HUAlarmTonePickerDelegate> _delegate;
    NSMutableArray *_toneIdentifiers;
    NSMutableArray *_mediaItemIdentifiers;
    MPMediaPickerController *_mediaPickerController;
    NSIndexPath *_currentlySelectedIndexPath;
    HUAlarmTonesManager *_toneManager;
}

@property (copy, nonatomic) NSIndexPath *currentlySelectedIndexPath; // @synthesize currentlySelectedIndexPath=_currentlySelectedIndexPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultToneIdentifier;
@property (weak, nonatomic) id<HUAlarmTonePickerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // @synthesize loggedInAppleMusicAccountDSID=_loggedInAppleMusicAccountDSID;
@property (readonly, nonatomic) NSMutableArray *mediaItemIdentifiers; // @synthesize mediaItemIdentifiers=_mediaItemIdentifiers;
@property (readonly, nonatomic) MPMediaPickerController *mediaPickerController; // @synthesize mediaPickerController=_mediaPickerController;
@property (copy, nonatomic) NSNumber *selectedMediaIdentifier; // @synthesize selectedMediaIdentifier=_selectedMediaIdentifier;
@property (copy, nonatomic) NSString *selectedToneIdentifier; // @synthesize selectedToneIdentifier=_selectedToneIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *toneIdentifiers; // @synthesize toneIdentifiers=_toneIdentifiers;
@property (readonly, nonatomic) HUAlarmTonesManager *toneManager; // @synthesize toneManager=_toneManager;

- (void).cxx_destruct;
- (BOOL)_isPickSongIndexPath:(id)arg1;
- (id)_mediaItemForIndexPath:(id)arg1;
- (void)_playMediaAtIndexPath:(id)arg1;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (void)_playToneWithIdentifier:(id)arg1;
- (id)_titleForItemAtIndexPath:(id)arg1;
- (id)_toneIdentifierForIndexPath:(id)arg1;
- (void)_updateWithToneIdentifier:(id)arg1 mediaIdentifier:(id)arg2 notifyDelegate:(BOOL)arg3;
- (void)addMediaItemsWithIdentifiers:(id)arg1;
- (void)dealloc;
- (id)initWithLoggedInAppleMusicAccountDSID:(id)arg1;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

