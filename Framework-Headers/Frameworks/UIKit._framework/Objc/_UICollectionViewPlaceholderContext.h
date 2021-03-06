//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UICollectionViewPlaceholderContext-Protocol.h>
#import <UIKitCore/_UICollectionViewDropPlaceholderContext-Protocol.h>

@class NSIndexPath, NSString, NSUUID, UIDragItem, _UIDropAnimationHandlers;
@protocol _UICollectionViewPlaceholderContextDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPlaceholderContext : NSObject <UICollectionViewPlaceholderContext, _UICollectionViewDropPlaceholderContext>
{
    NSUUID *_shadowUpdateIdentifier;
    NSString *_reuseIdentifier;
    NSIndexPath *_originalInsertionIndexPath;
    CDUnknownBlockType _cellUpdateHandler;
    _UIDropAnimationHandlers *_animationHandlers;
    id<_UICollectionViewPlaceholderContextDelegate> _delegate;
    UIDragItem *_dragItem;
}

@property (strong, nonatomic) _UIDropAnimationHandlers *animationHandlers; // @synthesize animationHandlers=_animationHandlers;
@property (copy, nonatomic) CDUnknownBlockType cellUpdateHandler; // @synthesize cellUpdateHandler=_cellUpdateHandler;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UICollectionViewPlaceholderContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSIndexPath *originalInsertionIndexPath; // @synthesize originalInsertionIndexPath=_originalInsertionIndexPath;
@property (strong, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property (strong, nonatomic) NSUUID *shadowUpdateIdentifier; // @synthesize shadowUpdateIdentifier=_shadowUpdateIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (BOOL)commitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg1;
- (BOOL)deletePlaceholder;
- (id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;
- (void)setNeedsCellUpdate;

@end

