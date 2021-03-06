//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class DCNotesTextureView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface DCNotesTextureBackgroundView : UIView
{
    BOOL _scrollsTexture;
    DCNotesTextureView *_textureView;
    NSLayoutConstraint *_textureYConstraint;
    NSLayoutConstraint *_textureHeightConstraint;
}

@property BOOL scrollsTexture; // @synthesize scrollsTexture=_scrollsTexture;
@property (strong, nonatomic) NSLayoutConstraint *textureHeightConstraint; // @synthesize textureHeightConstraint=_textureHeightConstraint;
@property (readonly, nonatomic) DCNotesTextureView *textureView; // @synthesize textureView=_textureView;
@property (strong, nonatomic) NSLayoutConstraint *textureYConstraint; // @synthesize textureYConstraint=_textureYConstraint;

+ (id)colorWithPaperTexturePatternImage;
+ (id)textureImage;
- (void).cxx_destruct;
- (void)commonInitWithScrollingTextures:(BOOL)arg1 hasAlpha:(BOOL)arg2;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scrollingTextures:(BOOL)arg2 hasAlpha:(BOOL)arg3;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end

