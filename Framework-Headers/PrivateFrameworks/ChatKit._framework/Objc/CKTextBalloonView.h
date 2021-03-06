//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKColoredBalloonView.h>

#import <ChatKit/CKBalloonTextViewInteractionDelegate-Protocol.h>
#import <ChatKit/CKBalloonVibrancy-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>

@class CKBalloonTextView, NSAttributedString, NSString;

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy>
{
    BOOL _containsExcessiveLineHeightCharacters;
    BOOL _ignoreSelectionEvent;
    CKBalloonTextView *_textView;
    NSAttributedString *_attributedText;
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (nonatomic) BOOL containsExcessiveLineHeightCharacters; // @synthesize containsExcessiveLineHeightCharacters=_containsExcessiveLineHeightCharacters;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreSelectionEvent; // @synthesize ignoreSelectionEvent=_ignoreSelectionEvent;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKBalloonTextView *textView; // @synthesize textView=_textView;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)addOverlaySubview:(id)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)attachInvisibleInkEffectView;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect)arg1;
- (void)detachInvisibleInkEffectView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)interactionStartedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionStartedLongPressInTextView:(id)arg1;
- (void)interactionStartedTapInTextView:(id)arg1 withModifierFlags:(long long)arg2 selectedText:(id)arg3;
- (void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg1;
- (void)interactionTextView:(id)arg1 userDidDragOutsideViewWithPoint:(struct CGPoint)arg2;
- (void)interactionTextViewShouldCopyToPasteboard:(id)arg1;
- (Class)invisibleInkEffectViewClass;
- (void)invisibleInkEffectViewWasUncovered;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (id)nonVibrantSubViews;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)restoreFromLargeTextTruncation;
- (void)setSelected:(BOOL)arg1 withSelectionState:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(BOOL *)arg3;
- (void)tapGestureRecognized:(id)arg1;
- (struct UIEdgeInsets)targetTextContainerInsets;
- (void)textViewDidChangeSelection:(id)arg1;
- (double)textViewWidthForWidth:(double)arg1;
- (void)truncateForLargeText;
- (void)updateRasterizationForInvisibleInkEffect;
- (id)updateTextSelectionState:(id)arg1 forTextSelectionArea:(long long)arg2;
- (void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg1;

@end

