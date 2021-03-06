//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPointerInteraction.h>

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>
#import <UIKitCore/_UIViewSubtreeMonitor-Protocol.h>

@class NSMutableDictionary, NSString, UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface _UIPointerInteractionAssistant : UIPointerInteraction <_UIViewSubtreeMonitor, UIPointerInteractionDelegate>
{
    UIView *_previewContainer;
    UIWindow *_monitoredWindow;
    NSMutableDictionary *_assistants;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIView *previewContainer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_assistantForView:(id)arg1;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (BOOL)_monitorsView:(id)arg1;
- (void)_updatePointerInteractionForSubtree:(id)arg1 suppressInteractions:(BOOL)arg2;
- (id)createPreviewTargetForView:(id)arg1 center:(struct CGPoint)arg2;
- (id)createRegionFromRect:(struct CGRect)arg1 inView:(id)arg2 withIdentifier:(id)arg3;
- (id)createStyleForButton:(id)arg1 shapeProvider:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (struct CGPoint)request:(id)arg1 locationInView:(id)arg2;
- (void)setAssistedView:(id)arg1 identifier:(id)arg2;
- (void)willMoveToView:(id)arg1;

@end

