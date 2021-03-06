//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveInputPredictions/NSCopying-Protocol.h>
#import <ProactiveInputPredictions/NSSecureCoding-Protocol.h>

@class PSGStructuredInfoSuggestion, PSGTextualResponseSuggestion;

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying>
{
    PSGTextualResponseSuggestion *_textualResponseSuggestion;
    PSGStructuredInfoSuggestion *_structuredInfoSuggestion;
}

@property (readonly, nonatomic) PSGStructuredInfoSuggestion *structuredInfoSuggestion; // @synthesize structuredInfoSuggestion=_structuredInfoSuggestion;
@property (readonly, nonatomic) PSGTextualResponseSuggestion *textualResponseSuggestion; // @synthesize textualResponseSuggestion=_textualResponseSuggestion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextualResponseSuggestion:(id)arg1 structuredInfoSuggestion:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToItem:(id)arg1;
- (id)predictedValue;

@end

