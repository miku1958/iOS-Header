//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class NSSet, NSString, NSURL, WKWebView;

@interface _SFActivityItemProvider : UIActivityItemProvider
{
    NSURL *_url;
    NSString *_pageTitle;
    NSSet *_excludedActivityTypes;
    CDUnknownBlockType _thumbnailHandler;
    WKWebView *_webView;
}

@property (copy, nonatomic) NSSet *excludedActivityTypes; // @synthesize excludedActivityTypes=_excludedActivityTypes;
@property (copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property (copy, nonatomic) CDUnknownBlockType thumbnailHandler; // @synthesize thumbnailHandler=_thumbnailHandler;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;
@property (weak, nonatomic) WKWebView *webView; // @synthesize webView=_webView;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 URL:(id)arg2 pageTitle:(id)arg3 webView:(id)arg4;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 webView:(id)arg3;
- (id)item;
- (void)main;

@end

