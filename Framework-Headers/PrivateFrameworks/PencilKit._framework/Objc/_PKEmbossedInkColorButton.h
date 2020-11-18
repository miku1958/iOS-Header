//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/_PKInkColorButton.h>

@class UIImageView;

@interface _PKEmbossedInkColorButton : _PKInkColorButton
{
    UIImageView *_colorImageView;
    UIImageView *_embossImageView;
}

@property (strong, nonatomic) UIImageView *colorImageView; // @synthesize colorImageView=_colorImageView;
@property (strong, nonatomic) UIImageView *embossImageView; // @synthesize embossImageView=_embossImageView;

+ (id)colorFillImageIsCompact:(BOOL)arg1;
- (void).cxx_destruct;
- (id)initWithColor:(id)arg1 isCompact:(BOOL)arg2;
- (void)layoutSubviews;

@end

