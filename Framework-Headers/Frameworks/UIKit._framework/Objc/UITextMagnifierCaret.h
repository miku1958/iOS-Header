//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextMagnifier.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UITextMagnifier
{
    double _yOffset;
    struct CGPoint _offset;
}

@property (nonatomic) struct CGPoint offset; // @synthesize offset=_offset;

+ (id)activeCaretMagnifier;
+ (Class)renderClass;
+ (id)sharedCaretMagnifier;
- (struct CGPoint)animationPoint;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(BOOL)arg5;
- (id)initWithFrame;
- (BOOL)isHorizontal;
- (double)offsetFromMagnificationPoint;
- (void)remove;
- (void)setAnimationPoint:(struct CGPoint)arg1;
- (BOOL)terminalPointPlacedCarefully;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;

@end
