//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/_WKObservablePageState-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface WKObservablePageState : NSObject <_WKObservablePageState>
{
    RefPtr_a805eeb8 _page;
    struct unique_ptr<WebKit::PageLoadStateObserver, std::__1::default_delete<WebKit::PageLoadStateObserver>> _observer;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL _webProcessIsResponsive;
@property (readonly, nonatomic) double estimatedProgress;
@property (readonly, nonatomic) BOOL hasOnlySecureContent;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) struct __SecTrust *serverTrust;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *unreachableURL;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPage:(RefPtr_a805eeb8 *)arg1;

@end

