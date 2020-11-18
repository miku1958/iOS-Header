//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement
{
}

@property (readonly, copy) NSURL *absoluteLinkURL;
@property (copy) NSString *accessKey;
@property (copy) NSString *alt;
@property (copy) NSString *coords;
@property (readonly, copy) NSString *hashName;
@property (readonly, copy) NSString *host;
@property (readonly, copy) NSString *hostname;
@property (copy) NSString *href;
@property BOOL noHref;
@property (readonly, copy) NSString *pathname;
@property (readonly, copy) NSString *port;
@property (readonly, copy) NSString *protocol;
@property (readonly, copy) NSString *search;
@property (copy) NSString *shape;
@property (copy) NSString *target;

- (struct _WKQuad)absoluteQuadWithOwner:(id)arg1;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (struct CGRect)boundingBoxWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (id)origin;
- (id)ping;
- (id)rel;
- (id)relList;
- (void)setPing:(id)arg1;
- (void)setRel:(id)arg1;

@end
