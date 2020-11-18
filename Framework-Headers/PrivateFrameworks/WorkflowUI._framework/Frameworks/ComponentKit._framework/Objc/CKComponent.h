//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKComponentScopeHandle, UIView;
@protocol NSObject;

@interface CKComponent : NSObject
{
    CKComponentScopeHandle *_scopeHandle;
    struct CKComponentViewConfiguration _viewConfiguration;
    struct unique_ptr<CKComponentMountInfo, std::__1::default_delete<CKComponentMountInfo>> _mountInfo;
    struct CKComponentSize _size;
}

@property (weak, nonatomic) UIView *rootComponentMountedView;
@property (readonly, nonatomic) id<NSObject> scopeFrameToken;
@property (readonly, nonatomic) struct CKComponentSize size; // @synthesize size=_size;

+ (id)initialState;
+ (id)new;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_relinquishMountedView;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (vector_035bbd4a)animationsOnInitialMount;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)childrenDidMount;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)controller;
- (void)dealloc;
- (id)init;
- (id)initWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
- (struct CKComponentLayout)layoutThatFits:(struct CKSizeRange)arg1 parentSize:(struct CGSize)arg2;
- (struct MountResult)mountInContext:(const struct MountContext *)arg1 size:(struct CGSize)arg2 children:(shared_ptr_6a94d7a4)arg3 supercomponent:(id)arg4;
- (id)nextResponder;
- (id)nextResponderAfterController;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)unmount;
- (void)updateState:(CDUnknownBlockType)arg1 mode:(unsigned long long)arg2;
- (const struct CKComponentViewConfiguration *)viewConfiguration;
- (struct CKComponentViewContext)viewContext;
- (id)viewForAnimation;

@end
