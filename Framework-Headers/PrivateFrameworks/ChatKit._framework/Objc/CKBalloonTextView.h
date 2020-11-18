//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextView.h>

#import <ChatKit/NSLayoutManagerDelegate-Protocol.h>

@class NSAttributedString, NSString;
@protocol CKBalloonTextViewInteractionDelegate;

@interface CKBalloonTextView : UITextView <NSLayoutManagerDelegate>
{
    BOOL _singleLine;
    NSAttributedString *_attributedText;
    id<CKBalloonTextViewInteractionDelegate> _interactionDelegate;
    double _capOffsetFromBoundsTop;
    double _lastLineBaselineOffsetFromBoundsTop;
}

@property (copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property (nonatomic) double capOffsetFromBoundsTop; // @synthesize capOffsetFromBoundsTop=_capOffsetFromBoundsTop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<CKBalloonTextViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property (nonatomic) double lastLineBaselineOffsetFromBoundsTop; // @synthesize lastLineBaselineOffsetFromBoundsTop=_lastLineBaselineOffsetFromBoundsTop;
@property (nonatomic, getter=isSingleLine) BOOL singleLine; // @synthesize singleLine=_singleLine;
@property (readonly) Class superclass;

- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 textAlignmentInsets:(struct UIEdgeInsets *)arg2 isSingleLine:(BOOL *)arg3;

@end
