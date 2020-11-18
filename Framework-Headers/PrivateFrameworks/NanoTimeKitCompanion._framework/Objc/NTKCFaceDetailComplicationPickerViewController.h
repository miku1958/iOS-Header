//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <NanoTimeKitCompanion/NTKCFaceDetailComplicationPickerViewControllerDelegate-Protocol.h>
#import <NanoTimeKitCompanion/NTKComplicationPickerListProviderListener-Protocol.h>
#import <NanoTimeKitCompanion/NTKPeopleComplicationPickerViewControllerDelegate-Protocol.h>

@class NSIndexPath, NSString, NTKCFaceDetailComplicationCellProvider, NTKFaceSlotComplicationTopLevelListProvider, UITableViewDiffableDataSource;
@protocol NTKCFaceDetailComplicationPickerViewControllerDelegate, NTKComplicationPickerListProvider;

@interface NTKCFaceDetailComplicationPickerViewController : UITableViewController <NTKComplicationPickerListProviderListener, NTKPeopleComplicationPickerViewControllerDelegate, NTKCFaceDetailComplicationPickerViewControllerDelegate>
{
    BOOL _hasDoneInitialScrollToItem;
    NSString *_slot;
    id<NTKCFaceDetailComplicationPickerViewControllerDelegate> _delegate;
    UITableViewDiffableDataSource *_dataSource;
    NTKCFaceDetailComplicationCellProvider *_cellProvider;
    id<NTKComplicationPickerListProvider> _listProvider;
    NTKFaceSlotComplicationTopLevelListProvider *_topLevelListProvider;
    NSIndexPath *_indexPathToScrollToAfterLayout;
}

@property (strong, nonatomic) NTKCFaceDetailComplicationCellProvider *cellProvider; // @synthesize cellProvider=_cellProvider;
@property (strong, nonatomic) UITableViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCFaceDetailComplicationPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDoneInitialScrollToItem; // @synthesize hasDoneInitialScrollToItem=_hasDoneInitialScrollToItem;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSIndexPath *indexPathToScrollToAfterLayout; // @synthesize indexPathToScrollToAfterLayout=_indexPathToScrollToAfterLayout;
@property (readonly, nonatomic) id<NTKComplicationPickerListProvider> listProvider; // @synthesize listProvider=_listProvider;
@property (readonly, nonatomic) NSString *slot; // @synthesize slot=_slot;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NTKFaceSlotComplicationTopLevelListProvider *topLevelListProvider; // @synthesize topLevelListProvider=_topLevelListProvider;

- (void).cxx_destruct;
- (void)_configureWithSlot:(id)arg1 listProvider:(id)arg2 selectedComplication:(id)arg3;
- (void)complicationPickerListProviderDidUpdate:(id)arg1;
- (id)detailViewControllerForSectionInfo:(id)arg1;
- (void)faceDetailComplicationPickerViewController:(id)arg1 didSelectComplication:(id)arg2;
- (id)initWithFace:(id)arg1 slot:(id)arg2 selectedComplication:(id)arg3;
- (id)initWithSlot:(id)arg1 listProvider:(id)arg2 title:(id)arg3 selectedComplication:(id)arg4;
- (void)peopleComplicationPickerViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
