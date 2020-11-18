//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

#import <iTunesStoreUI/UITableViewDataSource-Protocol.h>
#import <iTunesStoreUI/UITableViewDelegate-Protocol.h>

@class NSString, UITableView;
@protocol SUMenuViewControllerDelegate;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>
{
    id<SUMenuViewControllerDelegate> _delegate;
    long long _selectedIndex;
    UITableView *_tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUMenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (readonly) Class superclass;

- (BOOL)_sendDidCancel;
- (id)_tableView;
- (void)dealloc;
- (id)init;
- (BOOL)isMenuItemEnabledAtIndex:(long long)arg1;
- (void)loadView;
- (struct CGSize)maximumViewSize;
- (struct CGSize)minimumViewSize;
- (long long)numberOfMenuItems;
- (void)performActionForMenuItemAtIndex:(long long)arg1;
- (void)reload;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)titleOfMenuItemAtIndex:(long long)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

