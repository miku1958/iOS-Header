//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TIWordTokenizer;

__attribute__((visibility("hidden")))
@interface WebBookmarkTitleWordTokenizer : NSObject
{
    NSString *_string;
    unsigned long long _stringLength;
    TIWordTokenizer *_wordTokenizer;
    struct _NSRange _rangeOfNextToken;
    unsigned long long _startOfUnclassifiedRangeBeforeNextToken;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct _NSRange)advanceToNextToken;
- (id)init;
- (void)setString:(id)arg1;

@end

