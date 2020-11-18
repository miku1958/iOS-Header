//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABVCardWatchdogTimer, NSArray, NSMutableData;

@interface ABVCardLexer : NSObject
{
    NSMutableData *_data;
    char *_bytes;
    unsigned long long _length;
    unsigned int _peakedPoint;
    unsigned int _cursor;
    BOOL _unicode;
    int _errorCount;
    NSArray *_activeTokenSets;
    ABVCardWatchdogTimer *_timer;
}

- (BOOL)_advancePastLineFoldingSequenceIfNeeded;
- (void)_applyNextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4 intoString:(id)arg5;
- (BOOL)advancePastEOL;
- (BOOL)advancePastEOLSingle;
- (BOOL)advancePastEOLUnicode;
- (BOOL)advanceToEOL;
- (BOOL)advanceToEOLSingle;
- (BOOL)advanceToEOLUnicode;
- (void)advanceToPeakPoint;
- (int)advanceToSingleByteString;
- (int)advanceToString;
- (BOOL)advanceToToken:(int)arg1 throughTypes:(int)arg2;
- (int)advanceToUnicodeString;
- (BOOL)advancedPastToken:(int)arg1;
- (BOOL)atEOF;
- (unsigned int)cursor;
- (void)dealloc;
- (int)errorCount;
- (void)finalize;
- (id)initWithData:(id)arg1 watchdogTimer:(id)arg2;
- (id)nextArraySeperatedByToken:(int)arg1 stoppingAt:(int)arg2 inEncoding:(unsigned long long)arg3;
- (id)nextBase64Data;
- (id)nextBase64Line:(BOOL *)arg1;
- (id)nextEscapedCharacter;
- (id)nextQuotedPrintableData;
- (id)nextSingleByteBase64Line:(BOOL *)arg1;
- (id)nextSingleByteStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (id)nextStringInEncoding:(unsigned long long)arg1 quotedPrintable:(BOOL)arg2 stopTokens:(int)arg3 trim:(BOOL)arg4;
- (int)nextTokenPeak:(BOOL)arg1;
- (int)nextTokenPeakSingle:(BOOL)arg1 length:(int)arg2;
- (int)nextTokenPeakUnicode:(BOOL)arg1 length:(int)arg2;
- (id)nextUnicodeBase64Line:(BOOL *)arg1;
- (id)nextUnicodeStringStopTokens:(int)arg1 quotedPrintable:(BOOL)arg2 trim:(BOOL)arg3;
- (int)tokenAtCursor;
- (id)tokenName:(int)arg1;
- (id)tokenSetForLength:(int)arg1;

@end

