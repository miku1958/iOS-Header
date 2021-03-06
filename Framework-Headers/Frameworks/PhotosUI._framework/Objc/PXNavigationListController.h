//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXNavigationListDataSectionManagerObserver-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UITableViewDataSource-Protocol.h>
#import <PhotosUICore/UITableViewDelegate-Protocol.h>

@class NSString, NSUserActivity, PXNavigationListDataSection, PXNavigationListDataSectionManager, UITableView;
@protocol PXNavigationListContainer;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, PXNavigationListDataSectionManagerObserver>
{
    BOOL __needsUpdateRowHeight;
    UITableView *_tableView;
    PXNavigationListDataSectionManager *_dataSectionManager;
    id<PXNavigationListContainer> _container;
    PXNavigationListDataSection *_dataSection;
    NSUserActivity *_siriActionActivity;
    double _rowHeight;
}

@property (nonatomic, setter=_setNeedsUpdateRowHeight:) BOOL _needsUpdateRowHeight; // @synthesize _needsUpdateRowHeight=__needsUpdateRowHeight;
@property (nonatomic) BOOL allowsNavigation;
@property (weak, nonatomic) id<PXNavigationListContainer> container; // @synthesize container=_container;
@property (readonly, nonatomic) double contentHeight;
@property (strong, nonatomic) PXNavigationListDataSection *dataSection; // @synthesize dataSection=_dataSection;
@property (readonly, nonatomic) PXNavigationListDataSectionManager *dataSectionManager; // @synthesize dataSectionManager=_dataSectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property (strong, nonatomic) NSUserActivity *siriActionActivity; // @synthesize siriActionActivity=_siriActionActivity;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (id)navigateToListItem:(id)arg1 sourceViewController:(id)arg2 existingAssetsFetchResult:(id)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (double)_contentHeightForDataSection:(id)arg1;
- (id)_createTransparentFullWidthViewOfHeight:(double)arg1;
- (id)_navigateTolistItem:(id)arg1 animated:(BOOL)arg2;
- (void)_preferredContentSizeChanged:(id)arg1;
- (double)_rowHeightForCurrentFont;
- (void)_updateCell:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateCellSeparatorStyle:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)_updateTableView;
- (void)contentHeightDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataSectionManager:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end

