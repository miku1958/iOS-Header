//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSAPdfHyperlinkController : NSObject
{
    NSMutableArray *mHyperlinks;
    NSMutableArray *mDestinations;
    NSMutableArray *mOutlines;
}

- (void)addHyperlinkForRect:(struct CGRect)arg1 withUrl:(id)arg2 context:(struct CGContext *)arg3;
- (void)addHyperlinksForContents:(id)arg1 context:(struct CGContext *)arg2;
- (void)addHyperlinksForRep:(id)arg1 context:(struct CGContext *)arg2;
- (struct CGRect)canvasRect;
- (void)commitHyperlinksToPDF:(struct CGContext *)arg1 targetRect:(struct CGRect)arg2;
- (void)commitOutlinesToPDF:(struct CGContext *)arg1;
- (void)dealloc;
- (id)destinationFromUrl:(id)arg1;
- (BOOL)ignoreUrl:(id)arg1;
- (id)init;
- (BOOL)isDestination:(id)arg1;
- (id)p_chopBezierIntoRects:(id)arg1;
- (void)p_combineSimilarElements:(id)arg1;
- (void)p_commitDestinationToPDF:(id)arg1 cgrect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)p_commitUrlToPDF:(id)arg1 cgrect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (id)p_hyperlinkRegionsForRep:(id)arg1 context:(struct CGContext *)arg2;
- (id)p_splitIntoSubshapes:(id)arg1;

@end
