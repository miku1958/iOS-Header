//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewDropCoordinator-Protocol.h>

@class NSIndexPath, NSString, UICollectionViewDropProposal, UIDragItem, UIDragPreviewTarget;
@protocol UIDropSession, _UICollectionViewDropPlaceholderContext;

@protocol _UICollectionViewDropCoordinator <UICollectionViewDropCoordinator>

@property (readonly, nonatomic) UICollectionViewDropProposal *dropProposal;
@property (readonly, nonatomic) id<UIDropSession> dropSession;

- (void)dropToItemAtIndexPath:(NSIndexPath *)arg1 forDragItem:(UIDragItem *)arg2;
- (id<_UICollectionViewDropPlaceholderContext>)dropToPlaceholderInsertedAtIndexPath:(NSIndexPath *)arg1 reuseIdentifier:(NSString *)arg2 forDragItem:(UIDragItem *)arg3 cellUpdateHandler:(void (^)(UICollectionViewCell *))arg4;
- (void)dropToTarget:(UIDragPreviewTarget *)arg1 forDragItem:(UIDragItem *)arg2;
@end

