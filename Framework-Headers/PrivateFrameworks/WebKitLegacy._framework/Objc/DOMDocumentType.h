//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMNode.h>

@class DOMNamedNodeMap, NSString;

@interface DOMDocumentType : DOMNode
{
}

@property (readonly) DOMNamedNodeMap *entities;
@property (readonly, copy) NSString *internalSubset;
@property (readonly, copy) NSString *name;
@property (readonly) DOMNamedNodeMap *notations;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;

- (void)remove;

@end

