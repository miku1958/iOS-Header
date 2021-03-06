//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQHXMLOutput-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHStreamedXML : NSObject <GQHXMLOutput>
{
    struct _xmlOutputBuffer {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
    } *mOutputBuffer;
    struct __CFData *mData;
    struct __CFArray *mElementNameStack;
    int mLastOp;
    BOOL mNeedNewlineBeforeNextElement;
    struct _xmlDoc *mXMLDoc;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addCharRef:(const char *)arg1;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData *)createHtml;
- (struct __CFData *)createHtmlWithCss:(struct __CFString *)arg1;
- (struct __CFData *)createProgressiveHtml;
- (void)dealloc;
- (void)endElement;
- (void)endElementWithExpectedName:(const char *)arg1;
- (id)initEmpty;
- (id)initWithHead;
- (const char *)peekElementName;
- (char *)popElementName;
- (void)pushElementName:(const char *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;

@end

