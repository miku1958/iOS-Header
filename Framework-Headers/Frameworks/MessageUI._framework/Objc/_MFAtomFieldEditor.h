//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

@interface _MFAtomFieldEditor : UITextView
{
}

- (void)_define:(id)arg1;
- (id)_enclosingScrollView;
- (id)_hostView;
- (void)_lookup:(id)arg1;
- (struct CGRect)_rectForScrollToVisible:(struct _NSRange)arg1;
- (void)_share:(id)arg1;
- (id)_textInputTraits;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect)convertGlyphRect:(struct CGRect)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)paste:(id)arg1;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (id)selectionRectsForRange:(id)arg1;
- (id)textInputTraits;
- (id)undoManager;

@end

