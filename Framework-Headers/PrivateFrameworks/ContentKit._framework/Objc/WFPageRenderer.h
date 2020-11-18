//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIPrintPageRenderer;

@interface WFPageRenderer : NSObject
{
    BOOL _matchInputSize;
    BOOL _includeMargin;
    UIPrintPageRenderer *_renderer;
    struct CGSize _inputSize;
}

@property (nonatomic) BOOL includeMargin; // @synthesize includeMargin=_includeMargin;
@property (nonatomic) struct CGSize inputSize; // @synthesize inputSize=_inputSize;
@property (readonly, nonatomic) double margin;
@property (nonatomic) BOOL matchInputSize; // @synthesize matchInputSize=_matchInputSize;
@property (readonly, nonatomic) UIPrintPageRenderer *renderer; // @synthesize renderer=_renderer;

- (void).cxx_destruct;
- (void)_renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)renderPDFPageIndex:(long long)arg1 pages:(long long)arg2 measuredIndicesByFormatter:(id)arg3 drawnIndicesByFormatter:(id)arg4 linkMetricsByWebView:(id)arg5 y:(double)arg6 paperSize:(struct CGSize)arg7 shouldDrawPageAtIndexHandler:(CDUnknownBlockType)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)renderToImage;
- (void)renderToPDF:(id)arg1 startingAtPage:(long long)arg2 endingAtPage:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (struct CGSize)sizeForPageAtIndex:(long long)arg1;
- (void)updateRendererSize;

@end
