//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITextPosition.h>

@class PDFPage;

__attribute__((visibility("hidden")))
@interface PDFTextPosition : UITextPosition
{
    PDFPage *_page;
    long long _offset;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithOffset:(long long)arg1 onPage:(id)arg2;
- (long long)offset;
- (id)page;

@end
