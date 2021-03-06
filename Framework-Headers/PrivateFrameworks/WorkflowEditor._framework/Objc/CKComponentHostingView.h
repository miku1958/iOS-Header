//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowEditor/CKComponentDebugReflowListener-Protocol.h>
#import <WorkflowEditor/CKComponentStateListener-Protocol.h>

@class CKComponent, NSSet, NSString;
@protocol CKComponentHostingViewDelegate, CKComponentSizeRangeProviding;

@interface CKComponentHostingView : UIView <CKComponentStateListener, CKComponentDebugReflowListener>
{
    Class _componentProvider;
    id<CKComponentSizeRangeProviding> _sizeRangeProvider;
    struct CKComponentHostingViewInputs _pendingInputs;
    struct CKComponentBoundsAnimation _boundsAnimation;
    CKComponent *_component;
    BOOL _componentNeedsUpdate;
    unsigned long long _requestedUpdateMode;
    struct CKComponentLayout _mountedLayout;
    NSSet *_mountedComponents;
    BOOL _scheduledAsynchronousComponentUpdate;
    BOOL _isSynchronouslyUpdatingComponent;
    BOOL _isMountingComponent;
    id<CKComponentHostingViewDelegate> _delegate;
    UIView *_containerView;
}

@property (readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKComponentHostingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyResult:(const struct CKBuildComponentResult *)arg1;
- (void)_asynchronouslyUpdateComponentIfNeeded;
- (void)_scheduleAsynchronousUpdate;
- (void)_setNeedsUpdateWithMode:(unsigned long long)arg1;
- (void)_synchronouslyUpdateComponentIfNeeded;
- (void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(CDUnknownBlockType)arg3 mode:(unsigned long long)arg4;
- (void)dealloc;
- (void)didReceiveReflowComponentsRequest;
- (id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (const struct CKComponentLayout *)mountedLayout;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateContext:(id)arg1 mode:(unsigned long long)arg2;
- (void)updateModel:(id)arg1 mode:(unsigned long long)arg2;

@end

