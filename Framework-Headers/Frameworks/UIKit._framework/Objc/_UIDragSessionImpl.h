//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIDragSession-Protocol.h>
#import <UIKit/_UIDragDropSessionInternal-Protocol.h>
#import <UIKit/_UIDraggingItemVisualTarget-Protocol.h>
#import <UIKit/_UIDraggingSessionDelegate-Protocol.h>

@class NSArray, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSSet, NSString, UIDragInteraction, _UIDraggingSession, _UIInternalDraggingSessionSource;

__attribute__((visibility("hidden")))
@interface _UIDragSessionImpl : NSObject <_UIDraggingSessionDelegate, UIDragSession, _UIDraggingItemVisualTarget, _UIDragDropSessionInternal>
{
    _UIDraggingSession *_session;
    NSMapTable *_itemByDraggingItem;
    NSMutableArray *_allItems;
    NSMapTable *_dragSourceInteractionByItem;
    NSHashTable *_allInteractions;
    _UIInternalDraggingSessionSource *_internalSessionSource;
    BOOL _didHandOffDragImage;
    NSMutableSet *_addedDraggingItemsWaitingForHandOffOfDragImage;
    NSMutableSet *_addedDragItemsPendingUpdate;
    id _localContext;
    UIDragInteraction *_primaryInteraction;
}

@property (readonly, nonatomic, getter=_allowsItemsToUpdate) BOOL _allowsItemsToUpdate;
@property (readonly, nonatomic) long long _dataOwner;
@property (readonly, nonatomic) BOOL allowsMoveOperation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *items;
@property (strong, nonatomic) id localContext; // @synthesize localContext=_localContext;
@property (readonly, weak, nonatomic) UIDragInteraction *primaryInteraction; // @synthesize primaryInteraction=_primaryInteraction;
@property (readonly, nonatomic, getter=isRestrictedToDraggingApplication) BOOL restrictedToDraggingApplication;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *trackedInteractions;

+ (id)_localDragSessionForSessionDestination:(id)arg1;
+ (id)activeSessions;
- (void).cxx_destruct;
- (BOOL)_canAddItems;
- (void)_cancelDrag;
- (BOOL)_draggingItem:(id)arg1 shouldDelaySetDownAnimationWithCompletion:(CDUnknownBlockType)arg2;
- (void)_draggingItem:(id)arg1 willAnimateSetDownWithAnimator:(id)arg2;
- (id)_draggingSession;
- (void)_draggingSession:(id)arg1 handedOffDragImageForItem:(id)arg2;
- (BOOL)_draggingSession:(id)arg1 shouldCancelOnAppDeactivationWithDefault:(BOOL)arg2;
- (void)_draggingSessionHandedOffDragImage:(id)arg1;
- (BOOL)_isActive;
- (void)_itemsNeedUpdate:(id)arg1;
- (void)_prepareForSetDownAnimationInWindow:(id)arg1 withDraggingItem:(id)arg2 visibleDroppedItem:(id)arg3;
- (void)_setDraggingSession:(id)arg1;
- (struct CGRect)_targetFrameOfDraggingItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)addItems:(id)arg1 forDragSourceInteraction:(id)arg2;
- (void)associateItem:(id)arg1 withDraggingItem:(id)arg2;
- (BOOL)canLoadObjectsOfClass:(Class)arg1;
- (id)dragSourceInteractionForDragItem:(id)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)draggingSession:(id)arg1 willAddItems:(id)arg2;
- (void)draggingSessionDidEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidMove:(id)arg1;
- (void)draggingSessionDidTransferItems:(id)arg1;
- (BOOL)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (BOOL)draggingSessionPrefersFullSizePreviews:(id)arg1;
- (void)draggingSessionWillBegin:(id)arg1;
- (void)draggingSessionWillEnd:(id)arg1 withOperation:(unsigned long long)arg2;
- (BOOL)hasItemsConformingToTypeIdentifiers:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (id)itemForDraggingItem:(id)arg1;
- (struct CGPoint)locationInView:(id)arg1;

@end
