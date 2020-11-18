//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SBVoiceOverTouchCursorDisplay : UIView
{
    struct CGRect _cursorFrame;
    BOOL _isHidden;
    UIColor *_bgColor;
    double _cachedAlpha;
    struct CGPath *_path;
    BOOL largeCursorEnabled;
}

@property (readonly, nonatomic) BOOL largeCursorEnabled; // @synthesize largeCursorEnabled;
@property (strong, nonatomic) struct CGPath *path; // @synthesize path=_path;

+ (struct CGRect)resizeFrameForDisplay:(struct CGRect)arg1;
- (void)_orderIn;
- (void)_orderOut;
- (id)_retrieveBezierPaths:(struct CGRect)arg1 usingRealPaths:(BOOL *)arg2;
- (id)_retrieveFrameBezierPath:(struct CGRect)arg1;
- (id)_retrievePathBezierPaths;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isHidden;
- (double)lineWidth;
- (void)setBackgroundColor:(id)arg1;
- (void)setCursorFrame:(struct CGRect)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (BOOL)userInteractionEnabled;

@end

