//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUMiniHTMLParser : NSObject
{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedMarkupElementStartBlock;
    CDUnknownBlockType _parsedMarkupElementEndBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__string;
}

@property (readonly, nonatomic) NSString *_string; // @synthesize _string=__string;
@property (copy, nonatomic) CDUnknownBlockType parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedMarkupElementEndBlock; // @synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedMarkupElementStartBlock; // @synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock;

- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;

@end

