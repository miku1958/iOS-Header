//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AFSpeechUtterance : NSObject <NSSecureCoding>
{
    NSArray *_interpretationIndices;
    long long _confidenceScore;
    long long _source;
}

@property (nonatomic) long long confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property (copy, nonatomic) NSArray *interpretationIndices; // @synthesize interpretationIndices=_interpretationIndices;
@property (nonatomic) long long source; // @synthesize source=_source;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretationIndices:(id)arg1 confidenceScore:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

