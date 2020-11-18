//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL, NSURLRequest, WKFrameInfo;

@interface WKNavigationAction : NSObject <WKObject>
{
    struct ObjectStorage<API::NavigationAction> _navigationAction;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, nonatomic) BOOL _canHandleRequest;
@property (readonly, nonatomic) NSURL *_originalURL;
@property (readonly, nonatomic) BOOL _shouldOpenAppLinks;
@property (readonly, nonatomic) BOOL _shouldOpenExternalSchemes;
@property (readonly, nonatomic) BOOL _shouldOpenExternalURLs;
@property (readonly, nonatomic, getter=_isUserInitiated) BOOL _userInitiated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long navigationType;
@property (readonly, copy, nonatomic) NSURLRequest *request;
@property (readonly, copy, nonatomic) WKFrameInfo *sourceFrame;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) WKFrameInfo *targetFrame;

- (void)dealloc;

@end

