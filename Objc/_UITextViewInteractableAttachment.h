//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UITextViewInteractableItem.h>

@class NSTextAttachment;

__attribute__((visibility("hidden")))
@interface _UITextViewInteractableAttachment : _UITextViewInteractableItem
{
    NSTextAttachment *_attachment;
}

@property (strong, nonatomic) NSTextAttachment *attachment; // @synthesize attachment=_attachment;

+ (id)interactableLinkWithAttachment:(id)arg1 range:(struct _NSRange)arg2;
- (void).cxx_destruct;
- (void)_copyImage;
- (id)_image;
- (void)_saveToCameraRoll;
- (id)actions;
- (BOOL)allowInteraction;
- (id)defaultAction;
- (id)localizedTitle;

@end

