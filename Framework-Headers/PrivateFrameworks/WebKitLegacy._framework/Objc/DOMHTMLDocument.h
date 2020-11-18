//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMDocument.h>

@class DOMHTMLCollection, NSString;

@interface DOMHTMLDocument : DOMDocument
{
}

@property (copy) NSString *alinkColor;
@property (copy) NSString *bgColor;
@property (readonly, copy) NSString *compatMode;
@property (copy) NSString *designMode;
@property (copy) NSString *dir;
@property (readonly) DOMHTMLCollection *embeds;
@property (copy) NSString *fgColor;
@property (readonly) int height;
@property (copy) NSString *linkColor;
@property (readonly) DOMHTMLCollection *plugins;
@property (readonly) DOMHTMLCollection *scripts;
@property (copy) NSString *vlinkColor;
@property (readonly) int width;

- (id)_createDocumentFragmentWithMarkupString:(id)arg1 baseURLString:(id)arg2;
- (id)_createDocumentFragmentWithText:(id)arg1;
- (void)captureEvents;
- (void)clear;
- (void)close;
- (id)createDocumentFragmentWithMarkupString:(id)arg1 baseURL:(id)arg2;
- (id)createDocumentFragmentWithText:(id)arg1;
- (void)open;
- (void)releaseEvents;
- (void)write:(id)arg1;
- (void)writeln:(id)arg1;

@end
