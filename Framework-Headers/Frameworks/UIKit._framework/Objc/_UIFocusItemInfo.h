//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIScreen, UIView, _UIFocusRegion;
@protocol UIFocusItem;

__attribute__((visibility("hidden")))
@interface _UIFocusItemInfo : NSObject <NSCopying>
{
    struct {
        unsigned int hasResolvedFocusSound:1;
        unsigned int hasResolvedFocusSoundPan:1;
        unsigned int hasResolvedFocusTouchSensitivityStyle:1;
        unsigned int hasResolvedFocusMovementFlippedHorizontally:1;
        unsigned int hasResolvedFocusedRegion:1;
        unsigned int useFallbackAncestorScroller:1;
    } _flags;
    BOOL _focusMovementFlippedHorizontally;
    NSArray *_ancestorScrollableContainers;
    long long _inheritedFocusMovementStyle;
    long long _focusSound;
    double _focusSoundPan;
    long long _focusTouchSensitivityStyle;
    _UIFocusRegion *_focusedRegion;
    id<UIFocusItem> _item;
    UIView *_containingView;
}

@property (readonly, copy, nonatomic) NSArray *ancestorScrollableContainers; // @synthesize ancestorScrollableContainers=_ancestorScrollableContainers;
@property (readonly, weak, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property (readonly, nonatomic, getter=isFocusMovementFlippedHorizontally) BOOL focusMovementFlippedHorizontally; // @synthesize focusMovementFlippedHorizontally=_focusMovementFlippedHorizontally;
@property (readonly, nonatomic) long long focusSound; // @synthesize focusSound=_focusSound;
@property (readonly, nonatomic) double focusSoundPan; // @synthesize focusSoundPan=_focusSoundPan;
@property (readonly, nonatomic) long long focusTouchSensitivityStyle; // @synthesize focusTouchSensitivityStyle=_focusTouchSensitivityStyle;
@property (readonly, nonatomic) _UIFocusRegion *focusedRegion; // @synthesize focusedRegion=_focusedRegion;
@property (readonly, nonatomic) long long inheritedFocusMovementStyle; // @synthesize inheritedFocusMovementStyle=_inheritedFocusMovementStyle;
@property (readonly, weak, nonatomic) id<UIFocusItem> item; // @synthesize item=_item;
@property (readonly, nonatomic) BOOL itemIsKindOfView;
@property (readonly, weak, nonatomic) UIScreen *screen;

+ (id)infoWithItem:(id)arg1;
+ (id)infoWithItem:(id)arg1 useFallbackAncestorScroller:(BOOL)arg2;
+ (id)infoWithView:(id)arg1;
- (void).cxx_destruct;
- (id)_focusedRegionInCoordinateSpace:(id)arg1;
- (id)_initWithItem:(id)arg1 containingView:(id)arg2 useFallbackAncestorScroller:(BOOL)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)focusedRectInCoordinateSpace:(id)arg1;
- (id)init;
- (void)invalidateFocusedRegion;

@end

