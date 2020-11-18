//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCDumper.h>

@interface BRCTermDumper : BRCDumper
{
    int _fd;
    unsigned long long _termWidth;
    unsigned long long _usedTermWidth;
    int _curAttrs;
    int _curFg;
    int _curBg;
    BOOL _isatty;
    BOOL _useColor;
    BOOL _supportsEscapeSequences;
}

@property (readonly, nonatomic) BOOL isatty; // @synthesize isatty=_isatty;
@property (readonly, nonatomic) BOOL supportsEscapeSequences; // @synthesize supportsEscapeSequences=_supportsEscapeSequences;
@property (readonly, nonatomic) BOOL useColor; // @synthesize useColor=_useColor;

+ (void)execPagerOnFileFd:(int)arg1;
+ (void)setupPagerForFd:(int)arg1;
- (void)_putsAndCrop:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)_startInCString:(char [256])arg1 fgColor:(int)arg2 bgColor:(int)arg3 attr:(int)arg4;
- (void)cursorDown:(unsigned int)arg1;
- (void)cursorGotoLineStart;
- (void)cursorLeft:(unsigned int)arg1;
- (void)cursorRestore;
- (void)cursorRight:(unsigned int)arg1;
- (void)cursorSave;
- (void)cursorUp:(unsigned int)arg1;
- (void)endLine;
- (void)eraseEndOfLine;
- (void)eraseLine;
- (void)eraseScreenDown;
- (void)eraseScreenUp;
- (void)eraseStartOfLine;
- (void)forgetRemainingSpace;
- (id)initWithFd:(int)arg1 forceColor:(BOOL)arg2;
- (void)put:(id)arg1;
- (void)puts:(const char *)arg1;
- (void)puts:(const char *)arg1 len:(unsigned long long)arg2;
- (unsigned long long)remainingSpace;
- (void)reset;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (void)startNewLine;
- (void)startPager;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (void)write:(const char *)arg1;

@end

