//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WebNodeHighlight, WebView;

__attribute__((visibility("hidden")))
@interface WebNodeHighlighter : NSObject
{
    WebView *_inspectedWebView;
    WebNodeHighlight *_currentHighlight;
}

- (void)dealloc;
- (void)didAttachWebNodeHighlight:(id)arg1;
- (void)hideHighlight;
- (void)highlight;
- (id)initWithInspectedWebView:(id)arg1;
- (void)willDetachWebNodeHighlight:(id)arg1;

@end
