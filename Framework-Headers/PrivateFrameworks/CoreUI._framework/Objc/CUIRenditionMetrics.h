//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CUIRenditionMetrics : NSObject
{
    struct CGSize _imageSize;
    struct CGSize _edgeBottomLeftMargin;
    struct CGSize _edgeTopRightMargin;
    struct CGSize _contentBottomLeftMargin;
    struct CGSize _contentTopRightMargin;
    double _baseline;
    struct CGSize _auxiliary1BottomLeftMargin;
    struct CGSize _auxiliary1TopRightMargin;
    struct CGSize _auxiliary2BottomLeftMargin;
    struct CGSize _auxiliary2TopRightMargin;
    double _scale;
    struct crmFlags _crmFlags;
}

- (struct CGSize)auxiliary1BottomLeftMargin;
- (struct CGSize)auxiliary1TopRightMargin;
- (struct CGSize)auxiliary2BottomLeftMargin;
- (struct CGSize)auxiliary2TopRightMargin;
- (double)baseline;
- (struct CGSize)contentBottomLeftMargin;
- (struct CGRect)contentRect;
- (struct CGSize)contentTopRightMargin;
- (struct CGSize)edgeBottomLeftMargin;
- (struct CGRect)edgeRect;
- (struct CGSize)edgeTopRightMargin;
- (BOOL)hasAlignmentEdgeMargins;
- (BOOL)hasOpaqueContentBounds;
- (struct CGSize)imageSize;
- (id)initWithImageSize:(struct CGSize)arg1 edgeBottomLeft:(struct CGSize)arg2 edgeTopRight:(struct CGSize)arg3 contentBottomLeft:(struct CGSize)arg4 contentTopRight:(struct CGSize)arg5 baseline:(double)arg6 auxiliary1BottomLeft:(struct CGSize)arg7 auxiliary1TopRight:(struct CGSize)arg8 auxiliary2BottomLeft:(struct CGSize)arg9 auxiliary2TopRight:(struct CGSize)arg10 scalesVertically:(BOOL)arg11 scalesHorizontally:(BOOL)arg12 scale:(double)arg13;
- (id)initwithImageSize:(struct CGSize)arg1 scale:(double)arg2;
- (struct CGRect)insetContentRectWithMetrics:(struct CGRect)arg1;
- (struct CGRect)insetRectWithMetrics:(struct CGRect)arg1;
- (double)scale;
- (BOOL)scalesHorizontally;
- (BOOL)scalesVertically;

@end
