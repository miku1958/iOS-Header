//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement
{
}

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *charset;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property (copy) NSString *hreflang;
@property (copy) NSString *name;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (copy) NSString *rel;
@property (copy) NSString *rev;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;
@property (readonly, copy) NSString *text;
@property (copy) NSString *type;

- (id)download;
- (id)origin;
- (id)ping;
- (id)relList;
- (void)setDownload:(id)arg1;
- (void)setPing:(id)arg1;

@end

