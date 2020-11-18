//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView
{
    struct CGContext *_bitmapContext;
    long long _fadeCount;
    struct CGPoint _lastViewLoc;
    struct CGRect _inkedAreaOfBitmapContext;
    NSTimer *_fadeTimer;
    TIHandwritingStrokes *_accumulatedStrokes;
    UIDelayedAction *_committedAction;
    _UIDynamicCaretDot *_dotView;
}

@property (strong, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property (strong, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property (strong, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property (strong, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
@property (readonly, nonatomic) BOOL hasInk;
@property (readonly, nonatomic) BOOL isInking;

- (void).cxx_destruct;
- (void)_fadeInk;
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(BOOL)arg2;
- (void)addTouchAtPoint:(struct CGPoint)arg1;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;
- (void)clearAndNotify:(BOOL)arg1;
- (void)clearFadeTimer;
- (void)committedStrokes;
- (void)dealloc;
- (void)drawPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTouchAtPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)inkWidth;
- (void)log;
- (void)send;
- (void)setFrame:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)startTouchAtPoint:(struct CGPoint)arg1;

@end

