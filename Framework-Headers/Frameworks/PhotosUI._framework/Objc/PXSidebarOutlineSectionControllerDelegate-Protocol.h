//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class NSArray, PXSidebarOutlineSectionController;

@protocol PXSidebarOutlineSectionControllerDelegate <NSObject>
- (void)sidebarOutlineSectionController:(PXSidebarOutlineSectionController *)arg1 willApplySnapshotWithChangedItemsBeforeChange:(NSArray *)arg2 changedItemsAfterChange:(NSArray *)arg3 applyBlock:(void (^)(void))arg4;
@end
