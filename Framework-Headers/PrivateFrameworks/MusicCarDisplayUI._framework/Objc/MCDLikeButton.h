//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDLikeButton : MCDPlayModeButton
{
    UIImage *_heartImage;
    UIImage *_heartFilledImage;
}

@property (strong, nonatomic) UIImage *heartFilledImage; // @synthesize heartFilledImage=_heartFilledImage;
@property (strong, nonatomic) UIImage *heartImage; // @synthesize heartImage=_heartImage;

- (void).cxx_destruct;
- (id)colorForTouchFocusLayerSelected;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1;

@end

