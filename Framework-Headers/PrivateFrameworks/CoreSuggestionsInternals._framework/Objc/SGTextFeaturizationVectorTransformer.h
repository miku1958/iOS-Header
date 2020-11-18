//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSArray;

@interface SGTextFeaturizationVectorTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methods;
    unsigned long long _vectorLength;
    struct _NSRange _characterNGramRange;
    struct _NSRange _tokenNGramRange;
}

+ (id)withMethods:(id)arg1 withVectorLength:(unsigned long long)arg2 withCharacterNGramRange:(struct _NSRange)arg3 withTokenNGramRange:(struct _NSRange)arg4;
- (void).cxx_destruct;
- (id)initWithMethods:(id)arg1 withVectorLength:(unsigned long long)arg2 withCharacterNGramRange:(struct _NSRange)arg3 withTokenNGramRange:(struct _NSRange)arg4;
- (id)transform:(id)arg1;

@end

