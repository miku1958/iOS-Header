//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, UIKeyboardAssistantBar;

@interface UITextInputAssistantItem : NSObject
{
    UIKeyboardAssistantBar *_owner;
    BOOL _allowsHidingShortcuts;
    NSArray *_leadingBarButtonGroups;
    NSArray *_trailingBarButtonGroups;
    NSArray *_centerBarButtonGroups;
}

@property (nonatomic) BOOL allowsHidingShortcuts; // @synthesize allowsHidingShortcuts=_allowsHidingShortcuts;
@property (copy, nonatomic, getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:) NSArray *centerBarButtonGroups; // @synthesize centerBarButtonGroups=_centerBarButtonGroups;
@property (readonly, nonatomic, getter=_hasItemsToDisplay) BOOL hasItemsToDisplay;
@property (copy, nonatomic) NSArray *leadingBarButtonGroups; // @synthesize leadingBarButtonGroups=_leadingBarButtonGroups;
@property (weak, nonatomic, getter=_owner, setter=_setOwner:) UIKeyboardAssistantBar *owner;
@property (readonly, nonatomic, getter=_requiresPredictionDisabled) BOOL requiresPredictionDisabled;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups; // @synthesize trailingBarButtonGroups=_trailingBarButtonGroups;

- (void)dealloc;
- (id)description;
- (id)init;

@end
