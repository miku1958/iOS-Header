//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SBFluidSwitcherContentViewAccessibility_super.h"

@class NSArray, NSMutableDictionary, SBFluidSwitcherViewControllerAccessibility;

@interface SBFluidSwitcherContentViewAccessibility : __SBFluidSwitcherContentViewAccessibility_super
{
}

@property (readonly, nonatomic) NSArray *_axAppElements;
@property (readonly, nonatomic) NSMutableDictionary *_axAppElementsDictionary;
@property (readonly, nonatomic) BOOL _axSwitcherIsVisible;
@property (readonly, nonatomic) SBFluidSwitcherViewControllerAccessibility *_axSwitcherViewController;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)_accessibilityPageCount;
- (void)_axAddVisibleItemContainer:(id)arg1 forAppLayout:(id)arg2;
- (id)_axElementForAppLayout:(id)arg1;
- (void)_axRemoveVisibleItemContainerForAppLayout:(id)arg1;
- (BOOL)_axScrollToAppElement:(id)arg1;
- (void)_axSetElementsArray:(id)arg1 dictionary:(id)arg2;
- (id)accessibilityElements;
- (BOOL)accessibilityScroll:(long long)arg1;

@end

