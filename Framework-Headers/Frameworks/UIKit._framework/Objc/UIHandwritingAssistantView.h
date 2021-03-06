//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBKeyView.h>

@class TUISystemInputAssistantView, UIKBHandwritingCandidateView, UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIHandwritingAssistantView : UIKBKeyView
{
    TUISystemInputAssistantView *_systemInputAssistantView;
    UIKBHandwritingCandidateView *_candidateView;
    UIKeyboardCandidatePocketShadow *_rightBorder;
}

@property (strong, nonatomic) UIKBHandwritingCandidateView *candidateView; // @synthesize candidateView=_candidateView;
@property (strong, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder; // @synthesize rightBorder=_rightBorder;
@property (strong, nonatomic) TUISystemInputAssistantView *systemInputAssistantView; // @synthesize systemInputAssistantView=_systemInputAssistantView;

- (void).cxx_destruct;
- (struct CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2;
- (id)candidateList;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end

