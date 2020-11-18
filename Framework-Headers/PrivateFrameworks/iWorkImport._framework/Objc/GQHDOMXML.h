//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQHXMLOutput-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQHDOMXML : NSObject <GQHXMLOutput>
{
    struct _xmlDoc *mXMLDoc;
    struct _xmlNode *mCurrentNode;
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
- (void)removeStyleSheetLinkNodeAndAddStyle:(struct __CFString *)arg1;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;

@end

