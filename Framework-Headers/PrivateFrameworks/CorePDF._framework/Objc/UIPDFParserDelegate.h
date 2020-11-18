//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/NSXMLParserDelegate-Protocol.h>

@class NSString;

@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate>
{
    struct CGPoint _p[4];
    struct CGPath *_path;
    BOOL _parserError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL parserError; // @synthesize parserError=_parserError;
@property (readonly) struct CGPath *path; // @dynamic path;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;

@end

