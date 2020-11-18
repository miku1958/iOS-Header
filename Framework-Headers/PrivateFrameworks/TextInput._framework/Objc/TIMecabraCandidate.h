//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidate.h>

@class NSNumber, NSString;

@interface TIMecabraCandidate : TIKeyboardCandidate
{
    BOOL _emojiCandidate;
    BOOL _extensionCandidate;
    BOOL _isForShortcutConversion;
    BOOL _isAutocorrection;
    BOOL _OTAWordListCandidate;
    NSString *_candidate;
    NSString *_input;
    NSNumber *_mecabraCandidatePointerValue;
    unsigned long long _deleteCount;
    long long _cursorMovement;
}

@property (strong, nonatomic) NSNumber *mecabraCandidatePointerValue; // @synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue;

+ (BOOL)supportsSecureCoding;
+ (int)type;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)cursorMovement;
- (void)dealloc;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4 isEmoji:(BOOL)arg5 isShortcut:(BOOL)arg6 isAutocorrection:(BOOL)arg7 isFromOTAWordList:(BOOL)arg8;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4 isEmoji:(BOOL)arg5 isShortcut:(BOOL)arg6 isAutocorrection:(BOOL)arg7 isFromOTAWordList:(BOOL)arg8 deleteCount:(unsigned long long)arg9;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4 isEmoji:(BOOL)arg5 isShortcut:(BOOL)arg6 isAutocorrection:(BOOL)arg7 isFromOTAWordList:(BOOL)arg8 deleteCount:(unsigned long long)arg9 cursorMovement:(long long)arg10;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(BOOL)arg4;
- (id)input;
- (BOOL)isAutocorrection;
- (BOOL)isEmojiCandidate;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (BOOL)isFullwidthCandidate;
- (BOOL)isOTAWordListCandidate;
- (id)label;

@end

