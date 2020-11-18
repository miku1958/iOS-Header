//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@class NSArray, TIKeyboardCandidate;

@interface TIAutocorrectionList : NSObject <NSSecureCoding>
{
    TIKeyboardCandidate *_autocorrection;
    NSArray *_predictions;
}

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection; // @synthesize autocorrection=_autocorrection;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSArray *predictions; // @synthesize predictions=_predictions;
@property (readonly, nonatomic) BOOL shouldAcceptTopCandidate;

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAutocorrection:(id)arg1 predictions:(id)arg2;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;

@end

