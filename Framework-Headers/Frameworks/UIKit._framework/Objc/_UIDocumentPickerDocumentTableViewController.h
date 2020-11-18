//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <UIKit/_UIDocumentPickerContainedViewController-Protocol.h>

@class NSArray, NSString, NSURL, UIActivityIndicatorView, UIScrollView, UIView, _UIDocumentPickerContainerModel, _UIDocumentPickerSortOrderView, _UIDocumentPickerViewServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentTableViewController : UITableViewController <_UIDocumentPickerContainedViewController>
{
    BOOL _monitoring;
    BOOL _shouldHideSortBar;
    BOOL _updatesMayAnimate;
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    NSURL *_observedURL;
    _UIDocumentPickerContainerModel *_model;
    _UIDocumentPickerSortOrderView *_sortView;
    UIView *_pinnedHeaderView;
    UIActivityIndicatorView *_initialActivityView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *indexPathsForSelectedItems;
@property (strong, nonatomic) UIActivityIndicatorView *initialActivityView; // @synthesize initialActivityView=_initialActivityView;
@property (strong, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property (nonatomic) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (strong, nonatomic) NSURL *observedURL; // @synthesize observedURL=_observedURL;
@property (strong, nonatomic) UIView *pinnedHeaderView; // @synthesize pinnedHeaderView=_pinnedHeaderView;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) _UIDocumentPickerViewServiceViewController *serviceViewController; // @synthesize serviceViewController=_serviceViewController;
@property (nonatomic) BOOL shouldHideSortBar; // @synthesize shouldHideSortBar=_shouldHideSortBar;
@property (strong, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL updatesMayAnimate; // @synthesize updatesMayAnimate=_updatesMayAnimate;

- (void).cxx_destruct;
- (void)_dynamicTypeSizeChanged:(id)arg1;
- (void)_unlockAnimations;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
- (void)dealloc;
- (void)didDismissSearchController:(id)arg1;
- (long long)displayMode;
- (void)ensureSortViewInvisible;
- (id)initWithModel:(id)arg1;
- (void)modelChanged:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollSortViewToVisible;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setContentSizeAdjustment:(double)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPinnedHeaderView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)smallCells;
- (BOOL)supportsActions;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentInset;
- (void)updatePinnedHeader;
- (void)updateRowHeight;
- (BOOL)useIndentation;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
