//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;

@interface _SFCalendarEventDetector : NSObject
{
    WKWebView *_webView;
    CDUnknownBlockType _checkForCalendarEventsBlock;
}

- (void).cxx_destruct;
- (void)_checkIfPageContainsCalendarEvent;
- (void)_foundCalendarEvents:(id)arg1;
- (void)cancelCheckForConfirmationPage;
- (void)checkIfPageContainsCalendarEvent;
- (id)initWithWebView:(id)arg1;

@end

