//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCHScatterElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHLineElementBuilder : TSCHScatterElementBuilder
{
}

- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3 symbolType:(int)arg4;
- (BOOL)needsSeparateHitTestingPaths;
- (void)p_addKnobsForPoint:(struct CGPoint)arg1 strokedUnitSymbolRect:(struct CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 includePoint:(BOOL)arg5;

@end
