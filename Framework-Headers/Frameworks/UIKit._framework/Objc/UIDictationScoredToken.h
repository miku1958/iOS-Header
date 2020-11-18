//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDictationToken.h>

#import <UIKit/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding>
{
    double _confidenceScore;
}

@property (readonly, nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;

+ (BOOL)supportsSecureCoding;
- (id)_descriptionExtra;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 confidenceScore:(double)arg4;
- (BOOL)isEqual:(id)arg1;

@end
