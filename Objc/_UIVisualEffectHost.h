//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIVisualEffectViewSubviewMonitoring-Protocol.h>

@class NSArray, NSMutableArray, NSString, _UIVisualEffectBackdropView, _UIVisualEffectNode, _UIVisualEffectSubview, _UIVisualEffectViewBackdropCaptureGroup;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring>
{
    NSMutableArray *_views;
    BOOL _autosetSubviewLabelTintColor;
    BOOL _contentViewRequired;
    _UIVisualEffectSubview *_contentView;
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;
    _UIVisualEffectBackdropView *_captureView;
    _UIVisualEffectNode *_currentEffectNode;
    _UIVisualEffectNode *_transitionEffectNode;
}

@property (weak, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property (readonly, nonatomic) _UIVisualEffectSubview *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) BOOL contentViewRequired; // @synthesize contentViewRequired=_contentViewRequired;
@property (strong, nonatomic) _UIVisualEffectNode *currentEffectNode; // @synthesize currentEffectNode=_currentEffectNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIVisualEffectNode *transitionEffectNode; // @synthesize transitionEffectNode=_transitionEffectNode;
@property (readonly, nonatomic) NSArray *views; // @synthesize views=_views;

- (void).cxx_destruct;
- (void)_applyEffectNode:(id)arg1;
- (void)_applyIdentityNodeEffect;
- (void)_applyRequestedNodeEffect;
- (id)_cloneFilters:(id)arg1;
- (void)_configureEffectNode:(id)arg1;
- (void)_updateAdjustTintColors;
- (void)_updateView:(id)arg1 shouldDrawWithTintColor:(BOOL)arg2;
- (void)_view:(id)arg1 willGainDescendent:(id)arg2;
- (void)_view:(id)arg1 willLoseDescendent:(id)arg2;
- (void)_view:(id)arg1 willMoveToWindow:(id)arg2;
- (id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4;
- (void)beginTransition;
- (void)endTransition;
- (id)initWithContentView:(id)arg1;
- (void)prepareToTransitionToEffectNode:(id)arg1;

@end
