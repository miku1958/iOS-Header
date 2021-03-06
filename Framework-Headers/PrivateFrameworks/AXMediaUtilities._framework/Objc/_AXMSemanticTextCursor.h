//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMSemanticText, NSAttributedString, NSDictionary;

@interface _AXMSemanticTextCursor : NSObject
{
    NSAttributedString *_text;
    AXMSemanticText *_semanticText;
    unsigned long long _length;
    unsigned long long _currentIndex;
}

@property (readonly, nonatomic) NSDictionary *currentAttributes;
@property (readonly, nonatomic) BOOL isCustomPattern;
@property (readonly, nonatomic) BOOL isDataDetector;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isInLexicon;
@property (readonly, nonatomic) BOOL isOtherWord;
@property (readonly, nonatomic) BOOL isProperNoun;
@property (readonly, nonatomic) BOOL isPunctuation;
@property (readonly, nonatomic) BOOL isSentenceTerminator;
@property (readonly, nonatomic) BOOL isWhitespace;
@property (readonly, nonatomic) struct _NSRange remainingRange;

- (void).cxx_destruct;
- (void)advance;
- (id)initWithText:(id)arg1 semanticText:(id)arg2;
- (void)markCurrentIndexAsSemanticErrorAndAdvanceCursor;
- (BOOL)processAttribute:(id)arg1 getSubstring:(id *)arg2 advanceCursor:(BOOL)arg3 markAsSemanticError:(BOOL)arg4 error:(id *)arg5;

@end

