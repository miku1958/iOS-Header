//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateToggleButton.h>

@class UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton
{
    UIKeyboardCandidatePocketShadow *_pocketShadow;
    BOOL _drawsBackground;
    BOOL _drawsPocketShadow;
}

@property (nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
@property (nonatomic) BOOL drawsPocketShadow; // @synthesize drawsPocketShadow=_drawsPocketShadow;

- (void).cxx_destruct;
- (void)dimKeys:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
