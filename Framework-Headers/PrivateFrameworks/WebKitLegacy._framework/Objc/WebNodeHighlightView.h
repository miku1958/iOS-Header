//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

@class NSMutableArray, WebNodeHighlight;

__attribute__((visibility("hidden")))
@interface WebNodeHighlightView : WAKView
{
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}

- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_layoutForRectsHighlight:(struct Highlight *)arg1 parent:(id)arg2;
- (void)_removeAllLayers;
- (void)dealloc;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)arg1;
- (BOOL)isFlipped;
- (void)layoutSublayers:(id)arg1;
- (id)webNodeHighlight;

@end

