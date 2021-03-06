//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <SpringBoardHome/SBHIconRootViewProviding-Protocol.h>

@class NSSet, NSString, SBFolder, SBFolderIconImageCache, SBHIconImageCache, UIView, UIViewController, _UILegibilitySettings;

@interface SBHIconRootTableViewController : UITableViewController <SBHIconRootViewProviding>
{
    SBFolder *_folder;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
}

@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) long long currentPageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIViewController *deepestFolderController;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (strong, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property (strong, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property (readonly, nonatomic, getter=isScrolling) BOOL scrolling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelScrolling;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (BOOL)isDisplayingIcon:(id)arg1;
- (BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (BOOL)isDisplayingIconView:(id)arg1;
- (BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (BOOL)isPresentingIconLocation:(id)arg1;
- (void)noteUserIsInteractingWithIcons;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setIdleText:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end

