//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UITextCanvasView.h>

@protocol _UITextViewCanvasViewContext;

__attribute__((visibility("hidden")))
@interface _UITextViewCanvasView : _UITextCanvasView
{
}

@property (weak, nonatomic) id<_UITextViewCanvasViewContext> context; // @dynamic context;

- (struct _NSRange)_extendedGlyphRangeForRange:(struct _NSRange)arg1 maxGlyphIndex:(unsigned long long)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;

@end

