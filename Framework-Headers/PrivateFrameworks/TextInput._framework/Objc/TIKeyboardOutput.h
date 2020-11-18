//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSIndexSet, NSString, TIKeyboardCandidate;

@interface TIKeyboardOutput : NSObject <NSSecureCoding>
{
    TIKeyboardCandidate *_acceptedCandidate;
    NSString *_textToCommit;
    unsigned long long _deletionCount;
    NSString *_insertionText;
    unsigned long long _forwardDeletionCount;
    NSString *_insertionTextAfterSelection;
    TIKeyboardCandidate *_shortcutConversion;
    NSIndexSet *_handwritingStrokesToDelete;
}

@property (strong, nonatomic) TIKeyboardCandidate *acceptedCandidate; // @synthesize acceptedCandidate=_acceptedCandidate;
@property (nonatomic) unsigned long long deletionCount; // @synthesize deletionCount=_deletionCount;
@property (nonatomic) unsigned long long forwardDeletionCount; // @synthesize forwardDeletionCount=_forwardDeletionCount;
@property (copy, nonatomic) NSIndexSet *handwritingStrokesToDelete; // @synthesize handwritingStrokesToDelete=_handwritingStrokesToDelete;
@property (copy, nonatomic) NSString *insertionText; // @synthesize insertionText=_insertionText;
@property (copy, nonatomic) NSString *insertionTextAfterSelection; // @synthesize insertionTextAfterSelection=_insertionTextAfterSelection;
@property (strong, nonatomic) TIKeyboardCandidate *shortcutConversion; // @synthesize shortcutConversion=_shortcutConversion;
@property (copy, nonatomic) NSString *textToCommit; // @synthesize textToCommit=_textToCommit;

+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)deleteBackward;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)deleteForward;
- (void)deleteForward:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

