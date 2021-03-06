//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, UIView, UIVisualEffectView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightViewRecord : NSObject
{
    UIView *_view;
    UIView *_superview;
    UIVisualEffectView *_effectView;
    _UIPortalView *_portalView;
    NSHashTable *_interactiveHighlightEffects;
}

@property (strong, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property (strong, nonatomic) NSHashTable *interactiveHighlightEffects; // @synthesize interactiveHighlightEffects=_interactiveHighlightEffects;
@property (strong, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property (weak, nonatomic) UIView *superview; // @synthesize superview=_superview;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;

@end

