//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSLayoutAnchor.h>

@interface NSLayoutXAxisAnchor : NSLayoutAnchor
{
}

- (long long)_directionAbstraction;
- (BOOL)_validateOtherXAxisAnchorDirectionAbstraction:(long long)arg1;
- (id)anchorByOffsettingWithConstant:(double)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1;
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)anchorWithOffsetToAnchor:(id)arg1;
- (id)distanceTo:(id)arg1;
- (BOOL)isCompatibleWithAnchor:(id)arg1;
- (id)offsetBy:(double)arg1;
- (id)offsetByDimension:(id)arg1;
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;
- (id)offsetTo:(id)arg1;
- (BOOL)validateOtherAttribute:(long long)arg1;

@end

