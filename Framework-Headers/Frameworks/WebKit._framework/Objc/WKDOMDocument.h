//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKDOMNode.h>

@class WKDOMElement;

@interface WKDOMDocument : WKDOMNode
{
}

@property (readonly) WKDOMElement *body;

- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (id)createElement:(id)arg1;
- (id)createTextNode:(id)arg1;

@end

