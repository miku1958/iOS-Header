//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDragAnimating-Protocol.h>

@class NSMutableArray, NSString, UIDragItem;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimation : NSObject <UIDragAnimating>
{
    BOOL _didBeginAnimation;
    UIDragItem *_dragItem;
    NSMutableArray *_animationsBlocks;
    NSMutableArray *_completionBlocks;
}

@property (strong, nonatomic) NSMutableArray *animationsBlocks; // @synthesize animationsBlocks=_animationsBlocks;
@property (strong, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=_didBeginAnimation, setter=_setDidBeginAnimation:) BOOL didBeginAnimation; // @synthesize didBeginAnimation=_didBeginAnimation;
@property (strong, nonatomic) UIDragItem *dragItem; // @synthesize dragItem=_dragItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addClientBlocksToAnimator:(id)arg1;
- (void)_executeCompletionBlocks;
- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDragItem:(id)arg1;

@end

