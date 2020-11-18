//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSString, SGRe2;

@interface SGRegexTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_mapping;
    SGRe2 *_regex;
}

@property (strong) NSString *mapping; // @synthesize mapping=_mapping;
@property (strong) SGRe2 *regex; // @synthesize regex=_regex;

+ (id)withRegex:(id)arg1 andMapping:(id)arg2;
- (void).cxx_destruct;
- (id)initWithRegex:(id)arg1 andMapping:(id)arg2;
- (id)transform:(id)arg1;

@end

