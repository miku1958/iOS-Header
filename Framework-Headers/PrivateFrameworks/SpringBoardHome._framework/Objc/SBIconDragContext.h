//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>

@class NSArray, NSCountedSet, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSTimer, SBIconView, SBPlaceholderIcon;
@protocol OS_os_activity;

@interface SBIconDragContext : NSObject <BSDescriptionProviding>
{
    NSMutableSet *_sourceIconViews;
    NSMapTable *_iconToExpandAfterDropAnimation;
    NSMutableSet *_destinationIconViews;
    NSCountedSet *_messageExpectations;
    NSMutableSet *_enteredIconListViews;
    NSMapTable *_targetsForCancellingIconViews;
    NSMapTable *_dragPreviewForIconViews;
    NSMutableSet *_appLocalContexts;
    NSMutableDictionary *_destinationFolderIconViews;
    NSMutableDictionary *_destinationStackIconViews;
    NSMutableSet *_dropAnimatingDragItems;
    NSMutableDictionary *_initialIconPaths;
    NSMapTable *_bouncedIcons;
    NSMapTable *_appDragLocalContexts;
    NSMapTable *_iconViewPrepareForDropAssertions;
    NSMapTable *_iconViewDroppingAssertions;
    struct os_activity_scope_state_s _activityState;
    BOOL _performedIconDrop;
    BOOL _cancelled;
    BOOL _notifiedDelegateForDropSession;
    long long _state;
    NSObject<OS_os_activity> *_activity;
    SBPlaceholderIcon *_iconPlaceholder;
    NSArray *_grabbedIconViews;
    NSSet *_itemIdentifiers;
    NSSet *_sourceIcons;
    SBIconView *_primaryIconView;
    SBIconView *_recipientIconView;
    NSDate *_lastUserInteractionDate;
    NSTimer *_watchdogTimer;
    struct CGPoint _initialTouchOffsetFromIconImageCenter;
}

@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property (readonly, copy, nonatomic) NSSet *appLocalContexts;
@property (nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *expectedMessages;
@property (copy, nonatomic) NSArray *grabbedIconViews; // @synthesize grabbedIconViews=_grabbedIconViews;
@property (readonly, nonatomic) BOOL hasNonDefaultSizedSourceIcons;
@property (readonly, nonatomic) BOOL hasUserDragged;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SBPlaceholderIcon *iconPlaceholder; // @synthesize iconPlaceholder=_iconPlaceholder;
@property (nonatomic) struct CGPoint initialTouchOffsetFromIconImageCenter; // @synthesize initialTouchOffsetFromIconImageCenter=_initialTouchOffsetFromIconImageCenter;
@property (copy, nonatomic) NSSet *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property (copy, nonatomic) NSDate *lastUserInteractionDate; // @synthesize lastUserInteractionDate=_lastUserInteractionDate;
@property (nonatomic) BOOL notifiedDelegateForDropSession; // @synthesize notifiedDelegateForDropSession=_notifiedDelegateForDropSession;
@property (nonatomic) BOOL performedIconDrop; // @synthesize performedIconDrop=_performedIconDrop;
@property (strong, nonatomic) SBIconView *primaryIconView; // @synthesize primaryIconView=_primaryIconView;
@property (strong, nonatomic) SBIconView *recipientIconView; // @synthesize recipientIconView=_recipientIconView;
@property (copy, nonatomic) NSSet *sourceIcons; // @synthesize sourceIcons=_sourceIcons;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserActive) BOOL userActive;
@property (readonly, nonatomic, getter=isWaitingForMessage) BOOL waitingForMessage;
@property (strong, nonatomic) NSTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;

- (void).cxx_destruct;
- (void)_addPrepareForDropAssertionForIconView:(id)arg1;
- (void)addAppLocalContext:(id)arg1;
- (void)addDestinationIconView:(id)arg1;
- (void)addDropAnimatingDragItem:(id)arg1;
- (void)addEnteredIconListView:(id)arg1;
- (void)addGrabbedIconView:(id)arg1;
- (void)addIconViewDroppingAssertion:(id)arg1 forIconView:(id)arg2;
- (void)addItemIdentifier:(id)arg1;
- (void)addMessageExpectationNamed:(id)arg1;
- (void)addSourceIcon:(id)arg1;
- (void)addSourceIconView:(id)arg1;
- (void)addSourceIcons:(id)arg1;
- (id)appDragLocalContextForDragItem:(id)arg1;
- (id)bouncedIconsForListModel:(id)arg1;
- (void)clearAllDropAssertions;
- (void)clearDropAssertionsForIconView:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)destinationFolderIconViewForIconWithIdentifier:(id)arg1;
- (id)destinationStackIconViewForIconWithIdentifier:(id)arg1;
- (id)dragPreviewForIconView:(id)arg1;
- (void)enumerateDestinationIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDragPreviewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSourceIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasDestinationIconView:(id)arg1;
- (BOOL)hasDragItem:(id)arg1;
- (BOOL)hasEnteredIconListView:(id)arg1;
- (BOOL)hasItemIdentifier:(id)arg1;
- (BOOL)hasMessageExpectationNamed:(id)arg1;
- (BOOL)hasSourceIconView:(id)arg1;
- (id)iconToExpandAfterDropAnimationForDragItem:(id)arg1;
- (id)init;
- (id)initialIndexPathForIcon:(id)arg1;
- (id)initialIndexPathForIconWithIdentifier:(id)arg1;
- (BOOL)isAnimatingDropForDragItem:(id)arg1;
- (id)listModelEnumeratorForBouncedIcons;
- (void)removeAllMessageExpectations;
- (void)removeMessageExpectationNamed:(id)arg1;
- (void)resetLastUserInteractionDate;
- (void)setAppDragLocalContext:(id)arg1 forDragItem:(id)arg2;
- (void)setBouncedIcons:(id)arg1 forListModel:(id)arg2;
- (void)setDestinationFolderIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)setDestinationStackIconView:(id)arg1 forIconWithIdentifier:(id)arg2;
- (void)setDragPreview:(id)arg1 forIconView:(id)arg2;
- (void)setIcon:(id)arg1 shouldExpandAfterDropAnimationForDragItems:(id)arg2;
- (void)setInitialIndexPath:(id)arg1 forIcon:(id)arg2;
- (void)setTargetIconView:(id)arg1 forCancellingIconView:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)swapSourceIconWithIdentifier:(id)arg1 withIcon:(id)arg2;
- (id)targetIconViewForCancellingIconView:(id)arg1;

@end
