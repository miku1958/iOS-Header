//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableArray, NSSet, NSURL;
@protocol NSXMLParserDelegate;

@interface NSXMLParser : NSObject
{
    id _reserved0;
    id _delegate;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    struct _xmlSAXHandler *_saxHandler;
    struct _xmlParserCtxt *_parserContext;
    unsigned long long _parserFlags;
    NSError *_error;
    NSMutableArray *_namespaces;
    struct __CFDictionary *_slowStringMap;
    BOOL _delegateAborted;
    BOOL _haveDetectedEncoding;
    NSData *_bomChunk;
    unsigned long long _chunkSize;
    NSSet *_allowedEntityURLs;
    NSURL *_url;
    unsigned long long _externalEntityResolvingPolicy;
}

@property (copy) NSSet *allowedExternalEntityURLs;
@property id<NSXMLParserDelegate> delegate;
@property unsigned long long externalEntityResolvingPolicy;
@property (readonly, copy) NSError *parserError;
@property BOOL shouldProcessNamespaces;
@property BOOL shouldReportNamespacePrefixes;
@property BOOL shouldResolveExternalEntities;

+ (id)currentParser;
+ (void)setCurrentParser:(id)arg1;
- (BOOL)_handleParseResult:(long long)arg1;
- (void)_initializeSAX2Callbacks;
- (void)_popNamespaces;
- (void)_pushNamespaces:(id)arg1;
- (void)_setExpandedParserError:(id)arg1;
- (void)_setParserError:(long long)arg1;
- (struct _xmlParserInput *)_xmlExternalEntityWithURL:(const char *)arg1 identifier:(const char *)arg2 context:(struct _xmlParserCtxt *)arg3 originalLoaderFunction:(CDUnknownFunctionPointerType)arg4;
- (void)abortParsing;
- (long long)columnNumber;
- (void)dealloc;
- (BOOL)finishIncrementalParse;
- (id)initForIncrementalParsing;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (long long)lineNumber;
- (BOOL)parse;
- (BOOL)parseData:(id)arg1;
- (BOOL)parseFromStream;
- (id)publicID;
- (void)setShouldContinueAfterFatalError:(BOOL)arg1;
- (BOOL)shouldContinueAfterFatalError;
- (id)systemID;

@end

