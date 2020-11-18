//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIStatusBarActionable-Protocol.h>
#import <UIKitCore/_UIStatusBarPrioritized-Protocol.h>

@class NSString, UIView, _UIStatusBarAction, _UIStatusBarDisplayItemPlacement, _UIStatusBarIdentifier, _UIStatusBarItem, _UIStatusBarRegion, _UIStatusBarStyleAttributes;
@protocol UILayoutItem, _UIStatusBarDisplayable;

@interface _UIStatusBarDisplayItem : NSObject <_UIStatusBarPrioritized, _UIStatusBarActionable>
{
    BOOL _enabled;
    BOOL _background;
    BOOL _floating;
    BOOL _needsAddingToLayout;
    UIView<_UIStatusBarDisplayable> *_view;
    _UIStatusBarAction *_action;
    _UIStatusBarAction *_hoverAction;
    _UIStatusBarIdentifier *_identifier;
    _UIStatusBarItem *_item;
    UIView *_highlightView;
    double _alpha;
    double _viewAlpha;
    double _baselineOffset;
    _UIStatusBarStyleAttributes *_overriddenStyleAttributes;
    long long _overriddenVerticalAlignment;
    _UIStatusBarRegion *_region;
    UIView *_containerView;
    id<UILayoutItem> _layoutItem;
    _UIStatusBarDisplayItemPlacement *_placement;
    struct UIEdgeInsets _actionInsets;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _viewTransform;
}

@property (nonatomic) struct CGRect absoluteFrame;
@property (readonly, nonatomic) struct CGRect absoluteHoverFrame;
@property (strong, nonatomic) _UIStatusBarAction *action; // @synthesize action=_action;
@property (nonatomic) struct UIEdgeInsets actionInsets; // @synthesize actionInsets=_actionInsets;
@property (nonatomic) double alpha; // @synthesize alpha=_alpha;
@property (nonatomic, getter=isBackground) BOOL background; // @synthesize background=_background;
@property (nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property (weak, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<_UIStatusBarDisplayable> displayable;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic) struct NSDirectionalEdgeInsets extendedHoverInsets;
@property (nonatomic) BOOL floating; // @synthesize floating=_floating;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (strong, nonatomic) _UIStatusBarAction *hoverAction; // @synthesize hoverAction=_hoverAction;
@property (readonly, nonatomic) BOOL hoverHighlightsAsRegion;
@property (readonly, nonatomic) UIView *hoverView;
@property (readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier; // @synthesize identifier=_identifier;
@property (readonly, weak, nonatomic) _UIStatusBarItem *item; // @synthesize item=_item;
@property (strong, nonatomic) id<UILayoutItem> layoutItem; // @synthesize layoutItem=_layoutItem;
@property (nonatomic) BOOL needsAddingToLayout; // @synthesize needsAddingToLayout=_needsAddingToLayout;
@property (strong, nonatomic) _UIStatusBarStyleAttributes *overriddenStyleAttributes; // @synthesize overriddenStyleAttributes=_overriddenStyleAttributes;
@property (nonatomic) long long overriddenVerticalAlignment; // @synthesize overriddenVerticalAlignment=_overriddenVerticalAlignment;
@property (strong, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
@property (readonly, nonatomic) long long priority;
@property (weak, nonatomic) _UIStatusBarRegion *region; // @synthesize region=_region;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property (readonly, nonatomic) UIView<_UIStatusBarDisplayable> *view; // @synthesize view=_view;
@property (nonatomic) double viewAlpha; // @synthesize viewAlpha=_viewAlpha;
@property (nonatomic) struct CGAffineTransform viewTransform; // @synthesize viewTransform=_viewTransform;
@property (readonly, nonatomic) BOOL visible;

- (void).cxx_destruct;
- (void)_updateComputedAlpha;
- (void)_updateComputedTransform;
- (void)applyStyleAttributes:(id)arg1;
- (id)initWithIdentifier:(id)arg1 item:(id)arg2;

@end

