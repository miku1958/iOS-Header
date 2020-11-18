//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GQHXMLOutput;

__attribute__((visibility("hidden")))
@interface GQHXML : NSObject
{
    id<GQHXMLOutput> mOutput;
    BOOL mUseExternalCss;
    struct __CFString *mFilename;
    struct __CFString *mCssFilename;
    struct __CFString *mCss;
    struct __CFString *mLastCss;
    BOOL isProgressive;
}

@property (readonly) BOOL isProgressive; // @synthesize isProgressive;

- (void)addCharRef:(const char *)arg1;
- (void)addContent:(struct __CFString *)arg1;
- (void)addMetaTagWithTextFormat:(struct __CFString *)arg1;
- (void)addStyleClass:(struct __CFString *)arg1;
- (void)addStyleClassLast:(struct __CFString *)arg1;
- (void)addViewportMetaTagForDocumentSize:(struct CGSize)arg1;
- (void)addViewportMetaTagForDocumentSize:(struct CGSize)arg1 maximumScale:(float)arg2;
- (void)addXmlCharContent:(const char *)arg1;
- (struct __CFData *)createProgressiveHtml;
- (struct __CFData *)createProgressiveeCSSwithStyleTags:(unsigned char)arg1;
- (struct __CFString *)cssFilename;
- (void)dealloc;
- (void)endElement;
- (void)endElementWithExpectedName:(const char *)arg1;
- (id)initEmptyWithFilename:(struct __CFString *)arg1 useExternalCss:(BOOL)arg2;
- (id)initWithFilename:(struct __CFString *)arg1 documentSize:(struct CGSize *)arg2 outputBundle:(id)arg3 useExternalCss:(BOOL)arg4;
- (void)setAttribute:(const char *)arg1 cfStringValue:(struct __CFString *)arg2;
- (void)setAttribute:(const char *)arg1 floatValue:(float)arg2;
- (void)setAttribute:(const char *)arg1 intValue:(int)arg2;
- (void)setAttribute:(const char *)arg1 value:(const char *)arg2;
- (void)startElement:(const char *)arg1;
- (BOOL)writeToOutputBundle:(id)arg1 isThumbnail:(BOOL)arg2;

@end

