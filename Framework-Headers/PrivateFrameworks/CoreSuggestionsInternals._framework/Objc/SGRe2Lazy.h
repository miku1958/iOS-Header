//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGRe2.h>

@class NSString;

@interface SGRe2Lazy : SGRe2
{
    NSString *_regexp;
}

- (void).cxx_destruct;
- (BOOL)_enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)description;
- (BOOL)existsInUtf8:(const char *)arg1;
- (id)initWithRegexp:(id)arg1;
- (BOOL)matchesUtf8:(const char *)arg1;

@end

