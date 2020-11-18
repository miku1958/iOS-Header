//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretation : NSObject <NSSecureCoding>
{
    NSArray *_tokens;
    double _averageConfidenceScore;
}

@property (nonatomic) double averageConfidenceScore; // @synthesize averageConfidenceScore=_averageConfidenceScore;
@property (readonly, nonatomic) BOOL removeSpaceAfter;
@property (readonly, nonatomic) BOOL removeSpaceBefore;
@property (readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;

+ (id)serializedInterpretationFromTokens:(id)arg1 transform:(const struct __CFString *)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTokens:(id)arg1;
- (id)initWithTokens:(id)arg1 score:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)serializedInterpretationWithTransform:(const struct __CFString *)arg1;

@end
