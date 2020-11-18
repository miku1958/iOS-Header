//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSTextCheckingResult;

@interface PRTypologyCandidate : NSObject
{
    NSString *_candidateString;
    struct _NSRange _selectedRange;
    NSString *_stringToCheck;
    NSTextCheckingResult *_result;
    double _openTime;
    double _closeTime;
    BOOL _isOpen;
}

+ (id)openTypologyCandidate:(id)arg1 selectedRange:(struct _NSRange)arg2 inString:(id)arg3;
- (void)closeTypologyCandidateWithResult:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithString:(id)arg1 range:(struct _NSRange)arg2 inString:(id)arg3;

@end

