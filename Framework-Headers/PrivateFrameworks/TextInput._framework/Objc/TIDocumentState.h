//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TIDocumentState : NSObject <NSSecureCoding>
{
    NSString *_contextBeforeInput;
    NSString *_markedText;
    NSString *_selectedText;
    NSString *_contextAfterInput;
    struct _NSRange _selectedRangeInMarkedText;
}

@property (readonly, nonatomic) NSString *contextAfterInput; // @synthesize contextAfterInput=_contextAfterInput;
@property (readonly, nonatomic) NSString *contextBeforeInput; // @synthesize contextBeforeInput=_contextBeforeInput;
@property (readonly, nonatomic) NSString *markedText; // @synthesize markedText=_markedText;
@property (readonly, nonatomic) struct _NSRange selectedRangeInMarkedText; // @synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText;
@property (readonly, nonatomic) NSString *selectedText; // @synthesize selectedText=_selectedText;

+ (id)documentStateWithContextBefore:(id)arg1 markedText:(id)arg2 selectedRange:(struct _NSRange)arg3 contextAfter:(id)arg4;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateWithContextBefore:(id)arg1 selectedText:(id)arg2 contextAfter:(id)arg3;
+ (id)documentStateWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (BOOL)deletingBackwardsWillRemoveText;
- (id)description;
- (BOOL)documentIsEmpty;
- (id)documentStateAfterCollapsingSelection;
- (id)documentStateAfterCursorAdjustment:(long long)arg1;
- (id)documentStateAfterDeletingBackward;
- (id)documentStateAfterDeletingForward;
- (id)documentStateAfterInsertingText:(id)arg1;
- (id)documentStateAfterInsertingTextAfterSelection:(id)arg1;
- (id)documentStateAfterReplacingText:(id)arg1 withText:(id)arg2;
- (id)documentStateAfterSettingMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (id)documentStateAfterUnmarkingText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashString:(id)arg1 intoHashValue:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextBefore:(id)arg1 markedText:(id)arg2 selectedText:(id)arg3 contextAfter:(id)arg4 selectedRangeInMarkedText:(struct _NSRange)arg5;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (unsigned long long)inputIndexWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)inputStemWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (id)inputStringWithTerminatorPredicate:(CDUnknownBlockType)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)wordPrefixOfString:(id)arg1 withTerminatorPredicate:(CDUnknownBlockType)arg2 reverse:(BOOL)arg3;

@end

