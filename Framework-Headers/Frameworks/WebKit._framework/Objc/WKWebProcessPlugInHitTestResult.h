//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, WKWebProcessPlugInNodeHandle;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) Class superclass;

- (void)dealloc;

@end

