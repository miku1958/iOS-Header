//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject
{
    struct {
        unsigned short buffer[64];
        struct __CFString *theString;
        unsigned short *directUniCharBuffer;
        char *directCStringBuffer;
        struct {
            long long location;
            long long length;
        } rangeToBuffer;
        long long bufferedRangeStart;
        long long bufferedRangeEnd;
    } _inputBuffer;
    long long _currentIndex;
    long long _inputLength;
    unsigned int _noFillLevel:30;
    unsigned int _eatOneNewline:1;
    unsigned int _insideComment:1;
    unsigned int _wantsPlainText:1;
    int _lastQuoteLevel;
    struct __CFArray *_commandStack;
    id _outputString;
    NSMutableString *_outputBuffer;
    struct __CFString *_prependHTML;
    struct __CFString *_postpendHTML;
    float _indentWidth;
}

+ (struct __CFCharacterSet *)parenSet;
+ (struct __CFCharacterSet *)punctuationSet;
- (void)appendNewLine:(id)arg1;
- (void)appendStringToBuffer:(id)arg1;
- (void)beginCommand:(id)arg1;
- (void)closeUpQuoting;
- (void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2;
- (void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2;
- (id)currentFont;
- (void)dealloc;
- (id)description;
- (void)endCommand:(id)arg1;
- (void)handleNoParameterCommand:(const CDStruct_3441fd00 *)arg1;
- (void)mismatchError:(id)arg1;
- (void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
- (void)parseParameterString:(id)arg1;
- (int)readTokenInto:(id *)arg1;
- (void)resetStateWithString:(id)arg1 outputString:(id)arg2;
- (void)setWantsHTML:(BOOL)arg1;
- (void)setupFontStackEntry:(struct _CommandStackEntry *)arg1;

@end

