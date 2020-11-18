//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableString;

@interface MFPlainTextDocument : NSObject
{
    NSMutableString *_text;
    NSMutableArray *_fragments;
}

- (void)appendArchivedRepresentation:(id)arg1;
- (void)appendString:(id)arg1 withQuoteLevel:(unsigned int)arg2;
- (id)archivedRepresentation;
- (void)dealloc;
- (unsigned long long)fragmentCount;
- (void)getFormatFlowedString:(id *)arg1 insertedTrailingSpaces:(BOOL *)arg2 encoding:(unsigned int)arg3;
- (void)getString:(id *)arg1 quoteLevel:(unsigned int *)arg2 ofFragmentAtIndex:(unsigned long long)arg3;
- (id)quotedString:(unsigned int)arg1;
- (id)string;

@end

