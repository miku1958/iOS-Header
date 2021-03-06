//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ABVCardActivityAlertScanner : NSObject
{
    NSString *_string;
    unsigned long long _position;
}

+ (BOOL)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scanAlertValueFromString:(id)arg1;
+ (id)scannerWithString:(id)arg1;
- (BOOL)atEnd;
- (void)dealloc;
- (id)initWithString:(id)arg1;
- (unsigned short)nextCharacter;
- (unsigned short)nextUnescapedCharacter;
- (unsigned long long)position;
- (id)scanAlertValue;
- (unsigned short)scanCharacter;
- (unsigned short)scanCharacterWithEscaping:(BOOL)arg1;
- (id)scanKeyValuePair;
- (BOOL)scanPastCharacter:(unsigned short)arg1;
- (BOOL)scanPastItemDelimiter;
- (BOOL)scanPastKeyValueSeparator;
- (void)scanPastWhitespace;
- (id)scanQuotedStringValue;
- (id)scanStringValue;
- (id)scanUnquotedStringValue;

@end

