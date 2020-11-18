//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardOutput.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding>
{
    BOOL _didBeginOutput;
    long long _positionOffset;
}

@property (nonatomic) BOOL didBeginOutput; // @synthesize didBeginOutput=_didBeginOutput;
@property (nonatomic) long long positionOffset; // @synthesize positionOffset=_positionOffset;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setForwardDeletionCount:(unsigned long long)arg1;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setTextToCommit:(id)arg1;

@end

