//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TelephonyUI/TPDialerKeypadProtocol-Protocol.h>

@class NSString;
@protocol TPDialerKeypadDelegate;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol>
{
    long long _downKey;
    long long _highlightKey;
    id<TPDialerKeypadDelegate> _delegate;
    BOOL _playsSounds;
    BOOL _supportsHardPause;
    double _topHeight;
    double _midHeight;
    double _bottomHeight;
    double _leftWidth;
    double _midWidth;
    double _rightWidth;
    struct __CFSet *_inflightSounds;
    struct __CFDictionary *_keyToButtonMap;
    unsigned int _incompleteSounds;
    unsigned int _delegateSoundCallbacks:1;
    unsigned int _soundsActivated:1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property BOOL supportsHardPause; // @synthesize supportsHardPause=_supportsHardPause;

+ (void)_delayedDeactivate;
+ (BOOL)launchFieldTestIfNeeded:(id)arg1;
+ (BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_activateSounds:(BOOL)arg1;
- (void)_appResumed;
- (void)_appSuspended;
- (id)_buttonForKeyAtIndex:(unsigned long long)arg1;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;
- (void)_handleKeyPressAndHoldForDownKey:(id)arg1;
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1;
- (void)_handleKeyPressAndHoldForKey:(long long)arg1;
- (id)_highlightedImage;
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect)arg2;
- (int)_keyForPoint:(struct CGPoint)arg1;
- (id)_keypadImage;
- (struct CGPoint)_keypadOrigin;
- (void)_notifySoundCompletionIfNecessary:(unsigned int)arg1;
- (void)_playSoundForKey:(unsigned long long)arg1;
- (id)_pressedImage;
- (struct CGRect)_rectForKey:(unsigned long long)arg1;
- (void)_stopAllSoundsForcingCallbacks:(BOOL)arg1;
- (void)_stopSoundForKey:(unsigned long long)arg1;
- (struct CGRect)_updateRect:(struct CGRect)arg1 withScale:(double)arg2;
- (double)_yFudge;
- (BOOL)cancelTouchTracking;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)highlightKeyAtIndex:(long long)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)indexForHighlightedKey;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeFromSuperview;
- (id)scriptingInfoWithChildren;
- (void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setNeedsDisplayForKey:(int)arg1;
- (void)setPlaysSounds:(BOOL)arg1;

@end
