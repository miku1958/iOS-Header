//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFIconButton.h>

@class NSData, UIImageView, WFWorkflowIcon;

@interface WFWorkflowWizardNameIconButton : WFIconButton
{
    WFWorkflowIcon *_icon;
    NSData *_customImageData;
    UIImageView *_backgroundImageView;
}

@property (weak, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property (readonly, nonatomic) NSData *customImageData; // @synthesize customImageData=_customImageData;
@property (readonly, nonatomic) WFWorkflowIcon *icon; // @synthesize icon=_icon;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)redrawIcon;
- (void)setIcon:(id)arg1 customImageData:(id)arg2;

@end
