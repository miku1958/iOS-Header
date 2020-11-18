//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIFieldEditor.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UISearchBarFieldEditor : UIFieldEditor
{
    struct {
        unsigned int inLayoutSubviews:1;
    } _flags;
    NSMutableSet *_atomViews;
}

@property (strong) NSMutableSet *_atomViews; // @synthesize _atomViews;

- (void).cxx_destruct;
- (double)_uiatom_currentScreenScale;
- (void)_updateTokenViews;
- (struct CGRect)_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2;
- (void)activateEditor;
- (void)deactivateEditorDiscardingEdits:(BOOL)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (BOOL)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange)arg6;
- (void)layoutSubviews;
- (id)selectionRectsForRange:(id)arg1;

@end

