//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusRegionContainer-Protocol.h>
#import <UIKitCore/_UILegacyFocusRegion-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

__attribute__((visibility("hidden")))
@interface _UITableViewCellPromiseRegion : NSObject <_UILegacyFocusRegion, _UIFocusRegionContainer>
{
    UITableView *_tableView;
    NSIndexPath *_indexPath;
}

@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) long long preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;

- (void).cxx_destruct;
- (id)_childFocusRegionsInRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)_focusDebugOverlayParentView;
- (id)_focusRegionFocusSystem;
- (struct CGRect)_focusRegionFrame;
- (id)_focusRegionGuides;
- (id)_focusRegionView;
- (id)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (BOOL)_isTransparentFocusRegion;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (void)updateFocusIfNeeded;

@end

