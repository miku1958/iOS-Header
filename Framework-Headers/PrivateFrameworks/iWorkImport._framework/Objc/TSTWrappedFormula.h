//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTFormula.h>

__attribute__((visibility("hidden")))
@interface TSTWrappedFormula : TSTFormula
{
    int mFunctionIndex;
}

@property (nonatomic) int functionIndex; // @synthesize functionIndex=mFunctionIndex;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2;
- (id)nodesToCheckForBareArgumentPlaceholders;
- (void)reparseWithStorage:(id)arg1 adjustExpressionTree:(CDUnknownBlockType)arg2;

@end
