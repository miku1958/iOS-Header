//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, UINavigationItem, _UINavigationBarItemStackEntry, _UINavigationBarTransitionAssistant;
@protocol _UINavigationItemChangeObserver;

@interface _UINavigationBarItemStack : NSObject
{
    NSArray *_previousItems;
    NSMutableArray *_items;
    int _state;
    id<_UINavigationItemChangeObserver> _changeObserver;
    _UINavigationBarTransitionAssistant *_transitionAssistant;
}

@property (readonly, nonatomic) _UINavigationBarItemStackEntry *backEntry;
@property (readonly, nonatomic) UINavigationItem *backItem;
@property (weak, nonatomic) id<_UINavigationItemChangeObserver> changeObserver; // @synthesize changeObserver=_changeObserver;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=isPopping) BOOL popping;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousBackEntry;
@property (readonly, nonatomic) UINavigationItem *previousBackItem;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *previousTopEntry;
@property (readonly, nonatomic) UINavigationItem *previousTopItem;
@property (readonly, nonatomic, getter=isPushing) BOOL pushing;
@property (readonly, nonatomic, getter=isPushingOrPopping) BOOL pushingOrPopping;
@property (readonly, nonatomic) int state; // @synthesize state=_state;
@property (readonly, nonatomic) _UINavigationBarItemStackEntry *topEntry;
@property (readonly, nonatomic) UINavigationItem *topItem;
@property (readonly, nonatomic) _UINavigationBarTransitionAssistant *transitionAssistant; // @synthesize transitionAssistant=_transitionAssistant;

- (void).cxx_destruct;
- (void)_cleanupTransitionAssistant;
- (void)_completeTransition;
- (long long)_effectiveDisplayModeForItem:(id)arg1 inStack:(id)arg2;
- (void)_prepareTransitionWithAssistant:(id)arg1;
- (id)_shim_popNestedNavigationItem;
- (void)_shim_pushNestedNavigationItem:(id)arg1;
- (void)_updateChangeObserversFor:(id)arg1;
- (void)beginInteractiveTransition;
- (void)cancelOperation;
- (void)completeOperation;
- (id)description;
- (long long)effectiveDisplayModeForItemInCurrentStack:(id)arg1;
- (long long)effectiveDisplayModeForItemInPreviousStack:(id)arg1;
- (void)endInteractiveTransition;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)iterateEntries:(CDUnknownBlockType)arg1;
- (void)iterateItems:(CDUnknownBlockType)arg1;
- (void)popItemWithTransitionAssistant:(id)arg1;
- (void)pushItem:(id)arg1 withTransitionAssistant:(id)arg2;
- (void)reverseIterateEntries:(CDUnknownBlockType)arg1;
- (void)setItems:(id)arg1 withTransitionAssistant:(id)arg2;
- (BOOL)stackItemsAreEqualTo:(id)arg1;

@end

