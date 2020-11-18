//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver-Protocol.h>

@class NSArray, NSPointerArray, NSString, UIInterfaceAction, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying>
{
    NSArray *_actions;
    UIInterfaceAction *_preferredAction;
    NSPointerArray *_weakDisplayPropertyObservers;
    NSString *_title;
    NSArray *_actionsBySection;
    UIInterfaceActionVisualStyle *_visualStyle;
    struct CGSize _leadingImageLayoutSize;
    struct CGSize _trailingImageLayoutSize;
}

@property (readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic) NSArray *actionsBySection; // @synthesize actionsBySection=_actionsBySection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize leadingImageLayoutSize; // @synthesize leadingImageLayoutSize=_leadingImageLayoutSize;
@property (strong, nonatomic) UIInterfaceAction *preferredAction; // @synthesize preferredAction=_preferredAction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) struct CGSize trailingImageLayoutSize; // @synthesize trailingImageLayoutSize=_trailingImageLayoutSize;
@property (strong, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property (readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers; // @synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers;

+ (id)actionGroupWithActions:(id)arg1;
+ (id)actionGroupWithActionsBySection:(id)arg1;
+ (BOOL)changedProperties:(id)arg1 containsAny:(id)arg2;
- (void).cxx_destruct;
- (void)_addActionGroupDisplayPropertyObserver:(id)arg1;
- (void)_beginObservingActions;
- (id)_deepCopyOfActionsBySection;
- (void)_endObservingActions;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_performWithActionObservingDisabled:(CDUnknownBlockType)arg1;
- (void)_reloadImageLayoutSizesUsingExistingActionImages;
- (void)_removeActionGroupDisplayPropertyObserver:(id)arg1;
- (void)_updateActionImageLayoutSizes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 actionsBySection:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2;
- (void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)setLeadingImageLayoutSize:(struct CGSize)arg1;
- (void)setTrailingImageLayoutSize:(struct CGSize)arg1;

@end

