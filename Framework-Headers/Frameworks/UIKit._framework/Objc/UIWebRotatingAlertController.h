//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController
{
    BOOL _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (void).cxx_destruct;
- (void)_disableWebView;
- (void)_enableWebView;
- (void)dealloc;
- (void)doneWithSheet;
- (id)initWithUIWebDocumentView:(id)arg1;
- (BOOL)presentSheet;

@end

