//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/TSWPTopicNumberHints-Protocol.h>

@class NSString, TSUPointerKeyDictionary;

@interface TSWPMutableTopicNumberHints : NSObject <TSWPTopicNumberHints>
{
    TSUPointerKeyDictionary *_numbersForListStyle;
    unsigned long long _charIndex;
    unsigned long long _validThroughCharIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)p_deepCopyDictionary:(id)arg1;
- (void).cxx_destruct;
- (void)advanceToCharIndex:(unsigned long long)arg1 storage:(id)arg2;
- (void)backUpByOneParagraphWithPreviousState:(id)arg1 storage:(id)arg2;
- (unsigned long long)charIndex;
- (unsigned long long)charIndexValidThrough;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)entries;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentStateToTopicNumberHints:(id)arg1;
- (unsigned long long)nextTopicNumberForList:(id)arg1 level:(unsigned long long)arg2;
- (void)offsetCharIndexBy:(long long)arg1 startCharIndex:(unsigned long long)arg2;
- (unsigned long long)previousCharIndexForList:(id)arg1 level:(unsigned long long)arg2;
- (void)reset;
- (void)setCharIndex:(unsigned long long)arg1 validThroughCharIndex:(unsigned long long)arg2;
- (void)setTopicNumber:(unsigned long long)arg1 forList:(id)arg2 level:(unsigned long long)arg3 charIndex:(unsigned long long)arg4;
- (void)unarchiveSetEntries:(id)arg1 forListStyle:(id)arg2;

@end

