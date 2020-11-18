//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <VUSocialUpload/FlickrPhotoSetTableDelegate-Protocol.h>

@class FlickrPhotoSetManager, NSString;
@protocol FlickrComposeOptionViewDelegate;

@interface FlickrPhotoSetController : UITableViewController <FlickrPhotoSetTableDelegate>
{
    id<FlickrComposeOptionViewDelegate> _delegate;
    FlickrPhotoSetManager *_manager;
    long long _photoSetID;
    NSString *_photoSetTitle;
    long long _selectedIndexRow;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FlickrComposeOptionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FlickrPhotoSetManager *manager; // @synthesize manager=_manager;
@property (readonly, nonatomic) long long photoSetID; // @synthesize photoSetID=_photoSetID;
@property (readonly, nonatomic) NSString *photoSetTitle; // @synthesize photoSetTitle=_photoSetTitle;
@property (nonatomic) long long selectedIndexRow; // @synthesize selectedIndexRow=_selectedIndexRow;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPhotoSetManager:(id)arg1;
- (void)loadView;
- (void)reloadData;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end

