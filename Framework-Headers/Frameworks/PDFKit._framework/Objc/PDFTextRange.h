//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextRange.h>

@class PDFTextPosition;

__attribute__((visibility("hidden")))
@interface PDFTextRange : UITextRange
{
    PDFTextPosition *_start;
    PDFTextPosition *_end;
}

- (void).cxx_destruct;
- (id)description;
- (id)end;
- (id)initFromPos:(id)arg1 toPos:(id)arg2;
- (BOOL)isEmpty;
- (id)start;

@end
