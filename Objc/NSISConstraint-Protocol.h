//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSISVariableDelegate-Protocol.h>

@class NSISVariable;

@protocol NSISConstraint <NSISVariableDelegate>
- (id)firstItem;
- (double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(NSISVariable *)arg1;
- (id)secondItem;
@end
