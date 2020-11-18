//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, PXCMMComposeRecipientDataSource, PXCMMComposeRecipientSelectionSnapshot;
@protocol PXCMMComposeRecipientSelectionManagerDelegate;

@interface PXCMMComposeRecipientSelectionManager : NSObject
{
    NSMutableOrderedSet *_selectedComposeRecipients;
    NSMutableOrderedSet *_selectedRecipients;
    PXCMMComposeRecipientDataSource *_dataSource;
    id<PXCMMComposeRecipientSelectionManagerDelegate> _delegate;
    PXCMMComposeRecipientSelectionSnapshot *_selectionSnapshot;
}

@property (readonly, nonatomic) PXCMMComposeRecipientDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (weak, nonatomic) id<PXCMMComposeRecipientSelectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) PXCMMComposeRecipientSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;

+ (id)new;
- (void).cxx_destruct;
- (id)_createComposeRecipientSelectionSnapshotFromCurrentState;
- (void)_invalidateCurrentSelectionSnapshotWithChangedComposeRecipients:(id)arg1;
- (id)_setSelectedState:(BOOL)arg1 forComposeRecipients:(id)arg2;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)selectAll;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setSelectedState:(BOOL)arg1 atIndex:(long long)arg2;

@end

