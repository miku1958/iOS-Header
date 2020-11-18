//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayoutAttributes.h>

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    BOOL _renderShadow;
    BOOL _renderBorder;
    double _imageWidth;
    double _imageHeight;
}

@property (nonatomic) double imageHeight; // @synthesize imageHeight=_imageHeight;
@property (nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property (nonatomic) BOOL renderBorder; // @synthesize renderBorder=_renderBorder;
@property (nonatomic) BOOL renderShadow; // @synthesize renderShadow=_renderShadow;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end
