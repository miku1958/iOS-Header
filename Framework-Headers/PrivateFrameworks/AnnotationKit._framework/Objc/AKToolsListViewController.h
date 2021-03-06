//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AnnotationKit/UITableViewDataSource-Protocol.h>
#import <AnnotationKit/UITableViewDelegate-Protocol.h>

@class NSArray, NSString, UITableView;
@protocol AKToolsListViewControllerDelegate;

@interface AKToolsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _supportsOpacityEditing;
    BOOL _isDeviceLocked;
    id<AKToolsListViewControllerDelegate> _delegate;
    UITableView *_tableView;
    NSArray *_cellItemTypes;
}

@property (copy, nonatomic) NSArray *cellItemTypes; // @synthesize cellItemTypes=_cellItemTypes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AKToolsListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isDeviceLocked; // @synthesize isDeviceLocked=_isDeviceLocked;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsOpacityEditing; // @synthesize supportsOpacityEditing=_supportsOpacityEditing;
@property (strong, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

+ (id)defaultCellItemTypes;
- (void).cxx_destruct;
- (id)_buttonViewForLoupe;
- (id)_buttonViewForOpacity;
- (id)_buttonViewForShapes;
- (id)_buttonViewForSignature;
- (id)_buttonViewForText;
- (id)_buttonViewWithImage:(id)arg1 title:(id)arg2 tintColor:(id)arg3;
- (BOOL)_canShowWhileLocked;
- (void)_reloadCellItemTypes;
- (void)_shapeButtonPressed:(id)arg1;
- (long long)_shapesCellIndexRow;
- (void)_updateDeviceLocked;
- (void)addRowView:(id)arg1 toCellView:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

