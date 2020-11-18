//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIGeometryChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface UIFocusRingManager : NSObject <_UIGeometryChangeObserver>
{
    NSMutableDictionary *_focusRingStateForClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *focusRingStateForClient; // @synthesize focusRingStateForClient=_focusRingStateForClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)manager;
+ (void)moveRingToFocusItem:(id)arg1;
+ (void)moveRingToFocusItem:(id)arg1 forClient:(id)arg2;
+ (void)removeRingFromFocusItem:(id)arg1;
+ (void)removeRingFromFocusItem:(id)arg1 forClient:(id)arg2;
+ (Class)shapeLayerClassForClient:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1;
+ (void)updateRingForFocusItem:(id)arg1 forClient:(id)arg2;
- (void).cxx_destruct;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (void)_removeActiveFocusLayersForClient:(id)arg1;
- (void)_updateFocusLayerFrames;
- (id)_viewToAddFocusLayerForItem:(id)arg1;
- (id)activeFocusLayersForClient:(id)arg1;
- (id)activeFocusLayersToItemsForClient:(id)arg1;
- (void)addFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addParentFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedFocusRingForItem:(id)arg1 forClient:(id)arg2;
- (void)addSelectedParentFocusRingForItem:(id)arg1 forClient:(id)arg2;

@end
