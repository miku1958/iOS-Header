//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UINavigationBarTitleView.h>

@interface CKNavigationBarTitleView : _UINavigationBarTitleView
{
    BOOL _editing;
}

@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;

- (void)_setTrailingItemsHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)arg1;
- (void)contentDidChange;
- (void)updateIfNeeded:(BOOL)arg1;

@end
