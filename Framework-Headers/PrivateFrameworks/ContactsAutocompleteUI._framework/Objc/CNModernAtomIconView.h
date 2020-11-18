//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NUIContainerStackView;

@interface CNModernAtomIconView : UIView
{
    NSArray *_iconImages;
    NUIContainerStackView *_stackView;
    struct CGPoint _drawingOffset;
}

@property (nonatomic) struct CGPoint drawingOffset; // @synthesize drawingOffset=_drawingOffset;
@property (strong, nonatomic) NSArray *iconImages; // @synthesize iconImages=_iconImages;
@property (nonatomic) double iconPadding;
@property (strong, nonatomic) NUIContainerStackView *stackView; // @synthesize stackView=_stackView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)preferredWidth;

@end
