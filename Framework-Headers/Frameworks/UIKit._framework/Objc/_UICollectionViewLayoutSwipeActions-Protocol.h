//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSIndexPath, UISwipeActionsConfiguration;

@protocol _UICollectionViewLayoutSwipeActions <NSObject>
- (void)_didEndSwiping;
- (UISwipeActionsConfiguration *)_leadingSwipeActionsConfigurationForIndexPath:(NSIndexPath *)arg1;
- (BOOL)_supportsSwipeActionsForIndexPath:(NSIndexPath *)arg1;
- (UISwipeActionsConfiguration *)_trailingSwipeActionsConfigurationForIndexPath:(NSIndexPath *)arg1;
- (void)_willBeginSwiping;
@end

