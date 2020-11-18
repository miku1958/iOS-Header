//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFMimePart, NSArray, NSData, NSMutableData;

@interface MFProgressiveMimeParser : NSObject
{
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id _delegate;
    id _context;
    unsigned long long _cursor;
    unsigned long long _lastLength;
    MFMimePart *_topLevelPart;
    MFMimePart *_currentPart;
    NSData *_currentBoundary;
    struct {
        unsigned int delegateBeganMimePart:1;
        unsigned int delegateFinishedMimePart:1;
        unsigned int delegateBeganData:1;
        unsigned int delegateFailed:1;
        unsigned int state:3;
    } _parserFlags;
}

- (void)_continueParsing;
- (void)_continueParsingBody;
- (void)_continueParsingHeaders;
- (void)_continueParsingStartOfPart;
- (id)_currentBoundary;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (void)_reportError:(id)arg1;
- (id)context;
- (id)currentPart;
- (id)data;
- (void)dealloc;
- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;
- (void)noteDataLengthChanged:(unsigned int)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)topLevelPart;

@end

