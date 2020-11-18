//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TIKeyboardCandidate, UIKBKeyView, UILabel, UIMorphingLabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardPredictionCell : UIView
{
    UIMorphingLabel *m_label;
    UILabel *m_suggestionLabel;
    UIView *m_maskView;
    UIKBKeyView *m_activeKeyView;
    UIKBKeyView *m_enabledKeyView;
    BOOL m_lightKeyboard;
    struct CGSize m_keyViewSize;
    double m_maskViewMargin;
    BOOL _isAutocorrection;
    BOOL _isTypedString;
    BOOL _isCenter;
    BOOL _isLongCandidate;
    BOOL _isEmoji;
    int _state;
    unsigned int _slotID;
    TIKeyboardCandidate *_prediction;
    long long _candidateType;
    struct CGRect _collapsedFrame;
    struct CGRect _baseFrame;
    struct CGRect _activeFrame;
}

@property (nonatomic) struct CGRect activeFrame; // @synthesize activeFrame=_activeFrame;
@property (nonatomic) struct CGRect baseFrame; // @synthesize baseFrame=_baseFrame;
@property (nonatomic) long long candidateType; // @synthesize candidateType=_candidateType;
@property (nonatomic) struct CGRect collapsedFrame; // @synthesize collapsedFrame=_collapsedFrame;
@property (nonatomic) BOOL isAutocorrection; // @synthesize isAutocorrection=_isAutocorrection;
@property (nonatomic) BOOL isCenter; // @synthesize isCenter=_isCenter;
@property (nonatomic) BOOL isEmoji; // @synthesize isEmoji=_isEmoji;
@property (nonatomic) BOOL isLongCandidate; // @synthesize isLongCandidate=_isLongCandidate;
@property (nonatomic) BOOL isTypedString; // @synthesize isTypedString=_isTypedString;
@property (readonly, strong, nonatomic) TIKeyboardCandidate *prediction; // @synthesize prediction=_prediction;
@property (nonatomic) unsigned int slotID; // @synthesize slotID=_slotID;
@property (nonatomic) int state; // @synthesize state=_state;

+ (double)fontSizeForSingleLineLayout;
+ (id)newKeyViewWithSize:(struct CGSize)arg1 state:(int)arg2 needsBackground:(BOOL)arg3;
- (void)clearKeyViewForState:(int)arg1;
- (void)dealloc;
- (void)dimKeys:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)label;
- (void)scrollLabelWithText:(id)arg1 force:(BOOL)arg2;
- (void)setCellAttributes;
- (void)setKeyViewForState:(int)arg1;
- (void)setState:(int)arg1 withAttrText:(id)arg2;
- (void)setState:(int)arg1 withText:(id)arg2;
- (void)setText:(id)arg1 prediction:(id)arg2 active:(BOOL)arg3 isEmoji:(BOOL)arg4;
- (void)setVisibleRect;
- (BOOL)shouldDisplayAsSuggestion:(id)arg1;
- (BOOL)shouldDisplayHeaderForPrediction:(id)arg1;
- (id)textColor;
- (void)touchMoved:(double)arg1;
- (void)updateBackgroundWithRenderConfig:(id)arg1;
- (struct CGRect)visibleRect;
- (void)willMoveToSuperview:(id)arg1;

@end
