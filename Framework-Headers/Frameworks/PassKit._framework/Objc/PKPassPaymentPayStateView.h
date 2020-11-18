//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKit/PKGlyphViewDelegate-Protocol.h>

@class NSString, PKGlyphView, UILabel;
@protocol PKPassPaymentPayStateViewDelegate;

@interface PKPassPaymentPayStateView : UIView <PKGlyphViewDelegate>
{
    long long _style;
    double _glyphViewPadding;
    double _labelTopPadding;
    BOOL _enhancedContrast;
    BOOL _touchRecognizingHint;
    long long _state;
    PKGlyphView *_glyph;
    UILabel *_label;
    double _labelAlpha;
    id<PKPassPaymentPayStateViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassPaymentPayStateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKGlyphView *glyph; // @synthesize glyph=_glyph;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (nonatomic) double labelAlpha; // @synthesize labelAlpha=_labelAlpha;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (nonatomic) BOOL touchRecognizingHint; // @synthesize touchRecognizingHint=_touchRecognizingHint;

- (void)_applyStateWithTextOverride:(id)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)_canEmphasizeState:(long long)arg1;
- (void)_configureLayoutMetrics;
- (id)_labelForState:(long long)arg1 textOverride:(id)arg2;
- (id)_textForState:(long long)arg1 textOverride:(id)arg2;
- (void)dealloc;
- (void)emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)glyphView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (id)initWithStyle:(long long)arg1 enhancedContrast:(BOOL)arg2;
- (void)layoutSubviews;
- (void)setState:(long long)arg1 textOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
