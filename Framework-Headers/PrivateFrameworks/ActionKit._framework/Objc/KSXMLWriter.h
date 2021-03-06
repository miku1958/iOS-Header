//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/KSForwardingWriter.h>

@class KSXMLAttributes, KSXMLElementContentsProxy, NSArray, NSMutableArray;

@interface KSXMLWriter : KSForwardingWriter
{
    KSXMLAttributes *_attributes;
    NSMutableArray *_openElements;
    BOOL _elementIsEmpty;
    unsigned long long _inlineWritingLevel;
    KSXMLElementContentsProxy *_contentsProxy;
    long long _indentation;
    unsigned long long _encoding;
}

@property (nonatomic) unsigned long long encoding; // @synthesize encoding=_encoding;
@property (nonatomic) long long indentationLevel; // @synthesize indentationLevel=_indentation;
@property (readonly, weak, nonatomic) NSArray *openElements;

+ (void)initialize;
+ (id)stringFromAttributeValue:(id)arg1;
+ (id)stringFromCharacters:(id)arg1;
- (void).cxx_destruct;
- (BOOL)canWriteElementInline:(id)arg1;
- (void)close;
- (void)closeComment;
- (void)closeEmptyElementTag;
- (void)closeStartTag;
- (id)currentAttributes;
- (void)decreaseIndentationLevel;
- (void)didStartElement;
- (BOOL)elementCanBeEmpty:(id)arg1;
- (void)endCDATA;
- (void)endElement;
- (void)flush;
- (BOOL)hasCurrentAttributes;
- (BOOL)hasOpenElement:(id)arg1;
- (void)increaseIndentationLevel;
- (id)initWithOutputWriter:(id)arg1;
- (id)initWithOutputWriter:(id)arg1 encoding:(unsigned long long)arg2;
- (BOOL)isWritingInline;
- (void)openComment;
- (unsigned long long)openElementsCount;
- (void)popElement;
- (void)pushAttribute:(id)arg1 value:(id)arg2;
- (void)pushElement:(id)arg1;
- (void)startCDATA;
- (void)startDocumentWithDocType:(id)arg1 encoding:(unsigned long long)arg2;
- (void)startElement:(id)arg1;
- (void)startElement:(id)arg1 attributes:(id)arg2;
- (void)startElement:(id)arg1 writeInline:(BOOL)arg2;
- (void)startNewline;
- (void)startWritingInline;
- (void)stopWritingInline;
- (id)topElement;
- (id)validateAttribute:(id)arg1 value:(id)arg2 ofElement:(id)arg3;
- (BOOL)validateElement:(id)arg1;
- (void)willStartElement:(id)arg1;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)writeAttributeValue:(id)arg1;
- (void)writeCharacters:(id)arg1;
- (void)writeComment:(id)arg1;
- (id)writeElement:(id)arg1 contentsInvocationTarget:(id)arg2;
- (void)writeElement:(id)arg1 text:(id)arg2;
- (void)writeEndTag:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeStringByEscapingXMLEntities:(id)arg1 escapeQuot:(BOOL)arg2;

@end

