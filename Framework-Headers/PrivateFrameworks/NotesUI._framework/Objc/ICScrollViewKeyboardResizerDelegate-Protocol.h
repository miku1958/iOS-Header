//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class ICScrollViewKeyboardResizer, UIScrollView;

@protocol ICScrollViewKeyboardResizerDelegate <NSObject>
- (double)consumedBottomAreaForResizer:(ICScrollViewKeyboardResizer *)arg1;
- (UIScrollView *)keyboardResizerScrollView;

@optional
- (void)keyboardResizerAdjustInsetsWithKeyboardFrame:(struct CGRect)arg1 scrollAboveHeight:(double)arg2 duration:(double)arg3;
- (BOOL)keyboardResizerAutoscrollAboveKeyboard;
- (double)topInsetForResizer:(ICScrollViewKeyboardResizer *)arg1;
@end
