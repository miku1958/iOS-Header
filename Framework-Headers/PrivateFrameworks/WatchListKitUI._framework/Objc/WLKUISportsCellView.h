//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, TVImageElement, WLKUISportsOverlayView, _TVImageView;

@interface WLKUISportsCellView : UIView
{
    BOOL _shouldLayoutImageFirst;
    NSArray *_textRenderers;
    _TVImageView *_imageView;
    TVImageElement *_imageElement;
    _TVImageView *_appImageView;
    TVImageElement *_appImageElement;
    WLKUISportsOverlayView *_overlayView;
    struct CGSize _cellSize;
}

@property (strong, nonatomic) TVImageElement *appImageElement; // @synthesize appImageElement=_appImageElement;
@property (strong, nonatomic) _TVImageView *appImageView; // @synthesize appImageView=_appImageView;
@property (nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property (strong, nonatomic) TVImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property (strong, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) WLKUISportsOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property (nonatomic) BOOL shouldLayoutImageFirst; // @synthesize shouldLayoutImageFirst=_shouldLayoutImageFirst;
@property (copy, nonatomic) NSArray *textRenderers; // @synthesize textRenderers=_textRenderers;

- (void).cxx_destruct;
- (double)_imageOffset;
- (double)_textHeight;
- (double)_textOffset;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutWithElement:(id)arg1;
- (void)prepareForCellReuse;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
