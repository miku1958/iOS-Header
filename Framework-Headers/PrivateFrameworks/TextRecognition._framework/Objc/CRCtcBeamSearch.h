//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale;

@interface CRCtcBeamSearch : NSObject
{
    struct _LXLexicon *_dynamicLexicon;
    NSLocale *_locale;
}

@property (nonatomic) struct _LXLexicon *dynamicLexicon; // @synthesize dynamicLexicon=_dynamicLexicon;
@property (readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;
- (id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id *)arg4 outputWhitespaceRanges:(id *)arg5 error:(id *)arg6;

@end

