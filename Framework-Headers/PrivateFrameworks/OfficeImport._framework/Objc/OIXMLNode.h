//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLNode : NSObject <NSCopying>
{
}

@property (readonly) NSString *XMLString;
@property (readonly) NSString *closingTagString;
@property (readonly) NSString *contentString;
@property (readonly) NSString *name; // @dynamic name;
@property (readonly) NSString *openingTagString;
@property (strong) NSString *stringValue; // @dynamic stringValue;

+ (void)_escapeCharacters:(const unsigned short *)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(struct __CFString *)arg5;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString *)arg3;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

