//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboard.h>

@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIKeyboardAutomatic : UIKeyboard
{
    BOOL showsCandidateBar;
    BOOL showsCandidateInline;
    BOOL receivedCandidatesInCurrentInputMode;
    id<UITextCursorAssertion> _blinkAssertion;
}

@property (strong, nonatomic) id<UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property (nonatomic) BOOL receivedCandidatesInCurrentInputMode; // @synthesize receivedCandidatesInCurrentInputMode;
@property (nonatomic) BOOL showsCandidateBar; // @synthesize showsCandidateBar;
@property (nonatomic) BOOL showsCandidateInline; // @synthesize showsCandidateInline;

+ (id)activeInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)_isAutomaticKeyboard;
- (void)activate;
- (void)dealloc;
- (void)didSuspend:(id)arg1;
- (struct UIPeripheralAnimationGeometry)geometryForHeightDelta:(double)arg1;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isActive;
- (BOOL)isAutomatic;
- (void)maximize;
- (void)minimize;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(BOOL)arg2;
- (void)willResume:(id)arg1;

@end

