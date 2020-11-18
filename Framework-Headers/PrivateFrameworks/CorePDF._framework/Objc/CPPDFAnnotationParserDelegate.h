//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/NSXMLParserDelegate-Protocol.h>

@class NSMutableString, NSString;

@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate>
{
    NSMutableString *_characters;
    BOOL _parseError;
    struct CGPoint _p[4];
    struct __CFArray *_quadPoints;
    struct CGRect _rect;
    struct __CFDictionary *_annotationDictionary;
    struct __CFString *_id;
    struct __CFString *_otherId;
    struct __CFString *_content;
    struct CGColor *_color;
}

@property (nonatomic) struct __CFDictionary *annotationDictionary; // @synthesize annotationDictionary=_annotationDictionary;
@property (readonly, nonatomic) struct __CFString *annotationId; // @synthesize annotationId=_id;
@property (readonly, nonatomic) struct CGColor *color; // @synthesize color=_color;
@property (readonly, nonatomic) struct __CFString *content; // @synthesize content=_content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct __CFString *otherId; // @synthesize otherId=_otherId;
@property (readonly, nonatomic) BOOL parseError; // @synthesize parseError=_parseError;
@property (readonly, nonatomic) struct CGRect rect; // @dynamic rect;
@property (readonly) Class superclass;

- (void)addQuadpoints;
- (void)dealloc;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;

@end

