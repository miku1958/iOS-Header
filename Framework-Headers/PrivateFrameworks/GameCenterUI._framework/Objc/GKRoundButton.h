//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKButton.h>

@class UIImage;

@interface GKRoundButton : GKButton
{
}

@property (strong, nonatomic) UIImage *backgroundImage;

- (struct CGRect)_highlightBounds;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)tintColorDidChange;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;

@end

