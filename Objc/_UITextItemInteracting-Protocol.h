//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextInput-Protocol.h>
#import <UIKitCore/_UITextContent-Protocol.h>

@class UITargetedPreview, _UITextInteractableItem;
@protocol UITextItem;

@protocol _UITextItemInteracting <UITextInput, _UITextContent>
- (BOOL)_allowInteraction:(long long)arg1 forTextInteractableItem:(_UITextInteractableItem *)arg2;
- (id<UITextItem>)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint)arg1;
- (BOOL)_mightHaveInteractableItems;
- (UITargetedPreview *)_targetedPreviewForTextInteractableItem:(_UITextInteractableItem *)arg1 dismissing:(BOOL)arg2;
- (_UITextInteractableItem *)_textInteractableItemAtPoint:(struct CGPoint)arg1 precision:(unsigned long long)arg2;

@optional
- (BOOL)_allowHighlightForTextInteractableItem:(_UITextInteractableItem *)arg1;
- (BOOL)_delegatesAllowingTextItemInteractions;
@end

