//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <CameraUI/CAMAccessibilityHUDItemProvider-Protocol.h>

@class CAMSlashMaskView, CAMSlashView, NSString, UIImageView;

@interface CAMControlDrawerButton : UIControl <CAMAccessibilityHUDItemProvider>
{
    long long _layoutStyle;
    NSString *_contentSize;
    long long _orientation;
    UIImageView *__imageView;
    UIImageView *__backgroundView;
    CAMSlashView *__slashView;
    CAMSlashMaskView *__slashMaskView;
}

@property (readonly, nonatomic) UIImageView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property (readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property (readonly, nonatomic) CAMSlashMaskView *_slashMaskView; // @synthesize _slashMaskView=__slashMaskView;
@property (readonly, nonatomic) CAMSlashView *_slashView; // @synthesize _slashView=__slashView;
@property (nonatomic) NSString *contentSize; // @synthesize contentSize=_contentSize;
@property (readonly, nonatomic) long long controlType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (readonly) Class superclass;

+ (id)_backgroundImage;
+ (struct CGSize)buttonSize;
- (void).cxx_destruct;
- (void)_updateSlashAnimated:(BOOL)arg1;
- (void)didChangeContentSize;
- (void)handleButtonReleased:(id)arg1;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)imageNameForCurrentState;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)shouldScaleImageWhileHighlighted;
- (BOOL)shouldShowSlashForCurrentState;
- (BOOL)shouldUseActiveTintForCurrentState;
- (BOOL)shouldUseSlash;
- (void)updateImage;
- (void)updateImageAnimated:(BOOL)arg1;

@end
