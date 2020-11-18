//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CHRecognizer, NSArray, NSLocale, NSString, TIHandwritingStrokes, TIInputManagerHandwriting;

@interface RecognizeDrawingOperation : NSOperation
{
    TIHandwritingStrokes *_strokes;
    NSLocale *_recognitionLanguage;
    NSArray *_candidates;
    NSString *_history;
    TIInputManagerHandwriting *_im;
    CHRecognizer *_recognizer;
}

@property (strong, nonatomic) NSArray *candidates; // @synthesize candidates=_candidates;
@property (strong, nonatomic) NSString *history; // @synthesize history=_history;
@property (strong, nonatomic) TIInputManagerHandwriting *manager; // @synthesize manager=_im;
@property (strong, nonatomic) CHRecognizer *recognizer; // @synthesize recognizer=_recognizer;

+ (id)recognitionResultsForStrokes:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3;
- (void)main;

@end
