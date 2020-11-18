//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UITableViewDataSource-Protocol.h>
#import <UIKit/UITableViewDelegate-Protocol.h>
#import <UIKit/UITableViewFocusDelegateLegacy-Protocol.h>
#import <UIKit/UIViewControllerPreviewingDelegate-Protocol.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Deprecated-Protocol.h>
#import <UIKit/_UIKeyboardAutoRespondingScrollViewController-Protocol.h>

@class NSString, UIAutoRespondingScrollViewControllerKeyboardSupport, UIRefreshControl, UIScrollView, UITableView, UITableViewDataSource, _UIFilteredDataSource;
@protocol _UIKeyboardAutoRespondingScrollView;

@interface UITableViewController : UIViewController <_UIKeyboardAutoRespondingScrollViewController, UITableViewFocusDelegateLegacy, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Deprecated, UITableViewDelegate, UITableViewDataSource>
{
    long long _tableViewStyle;
    UIAutoRespondingScrollViewControllerKeyboardSupport *_keyboardSupport;
    UITableViewDataSource *_staticDataSource;
    struct {
        unsigned int clearsSelectionOnViewWillAppear:1;
        unsigned int insetsApplied:1;
        unsigned int adjustingInsets:1;
    } _tableViewControllerFlags;
    _UIFilteredDataSource *_filteredDataSource;
    long long _filteredDataType;
}

@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIRefreshControl *refreshControl;
@property (readonly, strong, nonatomic, getter=_scrollView) UIScrollView<_UIKeyboardAutoRespondingScrollView> *scrollView;
@property (strong, nonatomic, getter=_staticDataSource, setter=_setStaticDataSource:) UITableViewDataSource *staticDataSource;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITableView *tableView;

- (void).cxx_destruct;
- (void)_applyDefaultDataSourceToTable:(id)arg1;
- (id)_existingTableView;
- (long long)_filteredDataType;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(id)arg1;
- (long long)_resolvedDataSourceFilterTypeForScreen:(id)arg1;
- (void)_setFilteredDataType:(long long)arg1;
- (BOOL)_shouldRespondToPreviewingMethods;
- (BOOL)_viewControllerWasSelected;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)previewViewControllerForLocation:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (id)previewViewControllerForRowAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forPosition:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forRowAtIndexPath:(id)arg2;

@end
