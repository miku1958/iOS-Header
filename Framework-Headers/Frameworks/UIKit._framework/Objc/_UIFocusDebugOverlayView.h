//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIFocusDebugOverlayView : UIView
{
    UIColor *_overlayColor;
    UIColor *_borderColor;
    UIView *_highlightView;
}

@property (copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property (strong, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (copy, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;

- (void).cxx_destruct;
- (id)_focusItemsOverlayCreateIfNecessary:(BOOL)arg1;
- (void)_highlightFocusableFrame:(struct CGRect)arg1 relativeToView:(id)arg2 withBackgroundColor:(id)arg3;
- (void)_removeFocusItemOverlayViews;
- (void)_unhighlightFocusableFrame;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (id)initWithView:(id)arg1;

@end
