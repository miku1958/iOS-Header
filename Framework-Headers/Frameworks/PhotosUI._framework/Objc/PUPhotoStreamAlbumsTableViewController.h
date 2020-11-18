//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSMutableSet, NSOrderedSet;
@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController
{
    NSOrderedSet *_albumsOrderedSet;
    NSMutableSet *_selectedAlbumGuids;
    BOOL _allowsMutlipleSelection;
    id<PUPhotoStreamsAlbumsTableViewControllerDelegate> _pickerDelegate;
}

@property (nonatomic) BOOL allowsMutlipleSelection; // @synthesize allowsMutlipleSelection=_allowsMutlipleSelection;
@property (weak, nonatomic) id<PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate; // @synthesize pickerDelegate=_pickerDelegate;

+ (CDUnknownBlockType)_albumsComparator;
+ (struct NSObject *)albumListForContentMode:(int)arg1;
- (void).cxx_destruct;
- (void)addSelectedCloudGuid:(id)arg1;
- (struct CGSize)contentSizeForViewInPopover;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)posterImageForAlbum:(struct NSObject *)arg1 imageView:(id)arg2;
- (void)reloadActions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end
