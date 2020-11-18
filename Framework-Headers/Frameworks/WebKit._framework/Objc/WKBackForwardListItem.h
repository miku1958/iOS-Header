//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL;

@interface WKBackForwardListItem : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebBackForwardListItem> _item;
}

@property (readonly, copy) NSURL *URL;
@property (readonly) struct Object *_apiObject;
@property (readonly) struct WebBackForwardListItem *_item;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

- (void)dealloc;

@end

