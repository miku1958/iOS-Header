//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class NSString, NSURLRequest, UIViewController;
@protocol SWNavigationHandler, SWNavigationObserver;

@protocol SWNavigationManager <NSObject>
- (unsigned long long)actionForRequest:(NSURLRequest *)arg1;
- (void)addObserver:(id<SWNavigationObserver>)arg1;
- (void)commitViewController:(UIViewController *)arg1;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
- (void)registerHandler:(id<SWNavigationHandler>)arg1;
- (void)registerHandler:(id<SWNavigationHandler>)arg1 extension:(NSString *)arg2;
- (void)registerHandler:(id<SWNavigationHandler>)arg1 scheme:(NSString *)arg2;
- (void)removeObserver:(id<SWNavigationObserver>)arg1;
- (BOOL)shouldPreviewRequest:(NSURLRequest *)arg1;
@end

