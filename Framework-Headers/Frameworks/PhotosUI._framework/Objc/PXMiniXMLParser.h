//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSScanner;

@interface PXMiniXMLParser : NSObject
{
    CDUnknownBlockType _parsedCharactersBlock;
    CDUnknownBlockType _parsedTagBlock;
    CDUnknownBlockType _parsedEntityBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSScanner *__scanner;
    NSCharacterSet *__syntaxMarkerCharactersSet;
}

@property (readonly, nonatomic) NSScanner *_scanner; // @synthesize _scanner=__scanner;
@property (readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet; // @synthesize _syntaxMarkerCharactersSet=__syntaxMarkerCharactersSet;
@property (copy, nonatomic) CDUnknownBlockType parsedCharactersBlock; // @synthesize parsedCharactersBlock=_parsedCharactersBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedEntityBlock; // @synthesize parsedEntityBlock=_parsedEntityBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedTagBlock; // @synthesize parsedTagBlock=_parsedTagBlock;

- (void).cxx_destruct;
- (BOOL)_isAtEnd;
- (BOOL)_parseCharacters;
- (BOOL)_parseEntity;
- (BOOL)_parseTag;
- (BOOL)_tryScanningUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithString:(id)arg1;
- (void)parse;

@end

