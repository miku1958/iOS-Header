//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENXMLDTD, NSMutableString, NSString;
@protocol ENXMLWriterDelegate;

@interface ENXMLWriter : NSObject
{
    id<ENXMLWriterDelegate> _delegate;
    NSMutableString *_contents;
    struct _xmlTextWriter *_xmlWriter;
    struct _xmlOutputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
    } *_xmlOutputBuffer;
    ENXMLDTD *_dtd;
    NSString *_currentElementName;
    unsigned long long _openElementCount;
}

@property (readonly, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property (strong, nonatomic) NSString *currentElementName; // @synthesize currentElementName=_currentElementName;
@property (weak, nonatomic) id<ENXMLWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) ENXMLDTD *dtd; // @synthesize dtd=_dtd;
@property (nonatomic) unsigned long long openElementCount; // @synthesize openElementCount=_openElementCount;

- (void).cxx_destruct;
- (void)dealloc;
- (void)endCDATA;
- (void)endDocument;
- (void)endElement;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)startCDATA;
- (void)startDocument;
- (BOOL)startElement:(id)arg1;
- (BOOL)startElement:(id)arg1 attributes:(id)arg2;
- (BOOL)startElement:(id)arg1 withAttributes:(id)arg2;
- (BOOL)writeAttributeName:(id)arg1 value:(id)arg2;
- (void)writeCDATA:(id)arg1;
- (BOOL)writeElement:(id)arg1 attributes:(id)arg2 content:(id)arg3;
- (BOOL)writeElement:(id)arg1 withAttributes:(id)arg2 content:(id)arg3;
- (void)writeRawString:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeString:(id)arg1 raw:(BOOL)arg2;

@end
