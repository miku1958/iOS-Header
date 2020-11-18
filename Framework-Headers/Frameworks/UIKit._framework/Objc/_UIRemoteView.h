//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UILayerHostView.h>

@class _UIHostedWindowHostingHandle;

@interface _UIRemoteView : _UILayerHostView
{
    _UIHostedWindowHostingHandle *_hostedWindowHostingHandle;
    CDUnknownBlockType _tintColorDidChangeHandler;
}

@property (nonatomic, setter=_setInheritsSecurity:) BOOL _inheritsSecurity;
@property (strong, nonatomic) _UIHostedWindowHostingHandle *hostedWindowHostingHandle; // @synthesize hostedWindowHostingHandle=_hostedWindowHostingHandle;
@property (copy, nonatomic) CDUnknownBlockType tintColorDidChangeHandler; // @synthesize tintColorDidChangeHandler=_tintColorDidChangeHandler;

+ (BOOL)_requiresWindowTouches;
+ (id)viewWithHostedWindowHostingHandle:(id)arg1;
- (void).cxx_destruct;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (void)applyTransformUndoingRemoteRootLayerTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1 pid:(int)arg2 contextID:(unsigned int)arg3;
- (void)tintColorDidChange;

@end
