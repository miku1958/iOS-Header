//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFUIViewController.h>

#import <OpusFoundation/OFUIGridViewDataSource-Protocol.h>
#import <OpusFoundation/OFUIWindowDraggingSource-Protocol.h>
#import <OpusFoundation/UIScrollViewDelegate-Protocol.h>

@class NSOperationQueue, NSString, OFUIGridView;

@interface OFUIGridViewController : OFUIViewController <OFUIGridViewDataSource, UIScrollViewDelegate, OFUIWindowDraggingSource>
{
    unsigned long long _gridViewStyle;
    NSOperationQueue *_operationQueue;
    BOOL _hideWhenDeviceRotates;
    BOOL _maintainPercentageScrolledWhenDeviceRotates;
    OFUIGridView *_gridView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) OFUIGridView *gridView; // @synthesize gridView=_gridView;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideWhenDeviceRotates; // @synthesize hideWhenDeviceRotates=_hideWhenDeviceRotates;
@property (nonatomic) BOOL maintainPercentageScrolledWhenDeviceRotates; // @synthesize maintainPercentageScrolledWhenDeviceRotates=_maintainPercentageScrolledWhenDeviceRotates;
@property (readonly, strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (readonly) Class superclass;

+ (Class)gridViewClass;
- (void)cancelAllOperations:(BOOL)arg1;
- (void)commonInit;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (struct CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
- (void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
- (struct CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
- (void)draggingSource:(id)arg1 prepareItem:(id)arg2;
- (id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)loadView;
- (long long)numberOfCellsInGridView:(id)arg1;
- (void)setEditing:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)updateDisplayedCellOperationsPriority:(id)arg1;
- (void)updateDisplayedCellsOperationsPriority;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillUnload;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

