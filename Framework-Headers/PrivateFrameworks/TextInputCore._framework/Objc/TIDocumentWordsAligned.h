//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TIDocumentWordsAligned : NSObject
{
    NSMutableArray *_inDocumentWordsStack;
    NSMutableDictionary *_leftContextToWordMap;
}

@property (strong, nonatomic) NSMutableArray *inDocumentWordsStack; // @synthesize inDocumentWordsStack=_inDocumentWordsStack;
@property (strong, nonatomic) NSMutableDictionary *leftContextToWordMap; // @synthesize leftContextToWordMap=_leftContextToWordMap;

- (void).cxx_destruct;
- (void)addToContextMap:(id)arg1;
- (int)deleteWordsUptoContext:(id)arg1;
- (id)description;
- (id)init;
- (void)insertWord:(id)arg1 atIndex:(long long)arg2;
- (id)lastWord;
- (void)pushWordToDocument:(id)arg1;
- (void)removeFromContextMap:(id)arg1;
- (id)updateWordEntryAtIndex:(unsigned long long)arg1 withAcceptedString:(id)arg2 documentContext:(id)arg3;
- (unsigned long long)wordsCount;
- (id)wordsForContext:(id)arg1;

@end

