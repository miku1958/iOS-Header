//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

@class NSURL, OKDocument, OKPresentationViewController;

@interface OKWidgetOpusView : OKWidgetView
{
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
- (void)_loadDocumentIfNeeded;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;
- (void)layoutSubviews;
- (BOOL)prepareForDisplay:(BOOL)arg1;
- (BOOL)prepareForUnload:(BOOL)arg1;
- (BOOL)prepareForWarmup:(BOOL)arg1;
- (void)setSettingUrl:(id)arg1;

@end

