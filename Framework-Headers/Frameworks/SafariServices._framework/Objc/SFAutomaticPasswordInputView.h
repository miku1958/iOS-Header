//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class SFAutomaticPasswordExplanationView;
@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordInputView : UIInputView
{
    SFAutomaticPasswordExplanationView *_explanationView;
    BOOL _shouldAllowSelfSizing;
    long long _keyboardType;
    id<SFAutomaticPasswordInputViewDelegate> _delegate;
    id<SFAutomaticPasswordInputViewSizing> _inputViewSizing;
}

@property (weak, nonatomic) id<SFAutomaticPasswordInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) id<SFAutomaticPasswordInputViewSizing> inputViewSizing; // @synthesize inputViewSizing=_inputViewSizing;
@property (nonatomic) long long keyboardAppearance;
@property (readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property (nonatomic) BOOL shouldAllowSelfSizing; // @synthesize shouldAllowSelfSizing=_shouldAllowSelfSizing;

- (void).cxx_destruct;
- (void)_useCustomPasswordButtonAction:(id)arg1;
- (void)_useStrongPasswordButtonAction:(id)arg1;
- (BOOL)allowsSelfSizing;
- (id)initWithInputViewStyle:(long long)arg1 keyboardType:(long long)arg2;
- (struct CGSize)intrinsicContentSize;

@end

