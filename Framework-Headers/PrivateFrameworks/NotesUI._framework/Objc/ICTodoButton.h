//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, ICTrackedParagraph;

@interface ICTodoButton : UIButton
{
    BOOL _done;
    ICTrackedParagraph *_trackedParagraph;
    CALayer *_imageLayer;
    struct CGSize _defaultSize;
    struct CGSize _defaultImageSize;
}

@property (nonatomic) struct CGSize defaultImageSize; // @synthesize defaultImageSize=_defaultImageSize;
@property (nonatomic) struct CGSize defaultSize; // @synthesize defaultSize=_defaultSize;
@property (nonatomic, getter=isDone) BOOL done; // @synthesize done=_done;
@property (strong, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property (weak, nonatomic) ICTrackedParagraph *trackedParagraph; // @synthesize trackedParagraph=_trackedParagraph;

- (void).cxx_destruct;
- (struct UIImage *)imageForChecked:(BOOL)arg1 withHighlight:(BOOL)arg2;
- (struct UIImage *)imageNamed:(id)arg1 withTint:(struct UIColor *)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDone:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1 leftToRight:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateImagesAnimated:(BOOL)arg1;

@end

