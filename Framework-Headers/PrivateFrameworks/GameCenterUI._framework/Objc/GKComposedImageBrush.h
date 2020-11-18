//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageBrush.h>

@class UIImage;

@interface GKComposedImageBrush : GKImageBrush
{
    UIImage *_maskImage;
    UIImage *_backgroundImage;
    UIImage *_overlayImage;
    struct UIEdgeInsets _maskInsets;
}

@property (strong, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property (strong, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property (nonatomic) struct UIEdgeInsets maskInsets; // @synthesize maskInsets=_maskInsets;
@property (strong, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;

@end

