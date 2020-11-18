//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableAttributedString, NSString;

@interface AXMSemanticText : NSObject
{
    NSMutableAttributedString *_text;
    NSString *_transformedSpeechText;
    NSLocale *_locale;
    long long _tokenizedLength;
}

@property (readonly, nonatomic) BOOL isSemanticallyComplete;
@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (readonly, nonatomic) NSString *preprocessedText;
@property (nonatomic) long long tokenizedLength; // @synthesize tokenizedLength=_tokenizedLength;
@property (strong, nonatomic) NSString *transformedSpeechText; // @synthesize transformedSpeechText=_transformedSpeechText;

- (void).cxx_destruct;
- (void)addCustomPattern:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addDataDetector:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addIsInLexionMarker:(BOOL)arg1 withRange:(struct _NSRange)arg2;
- (void)addNLPToken:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addNumericToken:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)addSemanticErrorWithRange:(struct _NSRange)arg1;
- (void)enumerateCustomPatterns:(CDUnknownBlockType)arg1;
- (void)enumerateDataDetectors:(CDUnknownBlockType)arg1;
- (void)enumerateLexiconMarkers:(CDUnknownBlockType)arg1;
- (void)enumerateNLPTokens:(CDUnknownBlockType)arg1;
- (void)enumerateNumericTokens:(CDUnknownBlockType)arg1;
- (void)enumerateSemanticErrors:(CDUnknownBlockType)arg1;
- (id)initWithText:(id)arg1 locale:(id)arg2;
- (id)makeCursor;
- (id)substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)textRange;

@end
