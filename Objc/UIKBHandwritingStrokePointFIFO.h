//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

__attribute__((visibility("hidden")))
@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO
{
    TIHandwritingStrokes *_strokes;
}

@property (strong, nonatomic) TIHandwritingStrokes *strokes; // @synthesize strokes=_strokes;

- (void)addPoint:(struct)arg1;
- (void)clear;
- (void)dealloc;
- (void)flush;
- (id)initWithFIFO:(id)arg1;

@end
