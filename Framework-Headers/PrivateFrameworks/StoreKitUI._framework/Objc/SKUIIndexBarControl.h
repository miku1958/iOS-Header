//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSDictionary, NSIndexPath, NSMapTable, SKUIIndexBarEntry;
@protocol SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate;

@interface SKUIIndexBarControl : UIControl
{
    SKUIIndexBarEntry *_combinedEntry;
    BOOL _didSendPastBottom;
    BOOL _didSendPastTop;
    NSArray *_displayEntries;
    BOOL _hasValidCombinedEntry;
    BOOL _hasValidDisplayEntries;
    BOOL _hasValidNumberOfSections;
    BOOL _hasValidTotalEntryCount;
    BOOL _hasValidTotalSize;
    NSMapTable *_indexPathToEntryMapTable;
    NSIndexPath *_lastSelectedIndexPath;
    double _lineSpacing;
    long long _numberOfSections;
    NSMapTable *_sectionIndexToNumberOfEntriesMapTable;
    long long _totalEntryCount;
    struct CGSize _totalSize;
    CDStruct_2ba00048 _dataSourceDelegateFlags;
    id<SKUIIndexBarControlDataSource> _dataSource;
    NSDictionary *_defaultTextAttributes;
    id<SKUIIndexBarControlDelegate> _delegate;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property (weak, nonatomic) id<SKUIIndexBarControlDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes; // @synthesize defaultTextAttributes=_defaultTextAttributes;
@property (weak, nonatomic) id<SKUIIndexBarControlDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property (readonly, nonatomic) long long numberOfSections;

- (void).cxx_destruct;
- (id)_allEntries;
- (id)_allRequiredEntries;
- (id)_combinedEntry;
- (void)_configureNewEntry:(id)arg1;
- (id)_displayEntries;
- (id)_displayEntriesThatFitInViewForGroupedEntries;
- (id)_entryAtIndexPath:(id)arg1;
- (void)_enumerateEntryIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateDisplayEntries;
- (void)_invalidateForChangedLayoutProperties;
- (long long)_numberOfEntriesInSection:(long long)arg1;
- (long long)_numberOfSections;
- (BOOL)_reloadLineSpacing;
- (void)_sendSelectionForTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)_sizeForEntries:(id)arg1;
- (struct CGSize)_sizeForEntryAtIndexPath:(id)arg1;
- (long long)_totalEntryCount;
- (struct CGSize)_totalSize;
- (struct CGRect)_visibleBounds;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfEntriesInSection:(long long)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadCombinedEntry;
- (void)reloadData;
- (void)reloadEntryAtIndexPath:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
