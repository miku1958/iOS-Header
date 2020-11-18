//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSLayoutItem-Protocol.h>

@class NSISEngine, NSISVariable, NSMutableSet, NSObservation;

@protocol _UILayoutItem <NSLayoutItem>
- (NSISVariable *)_boundsHeightVariable;
- (NSISVariable *)_boundsWidthVariable;
- (NSISVariable *)_minXVariable;
- (NSISVariable *)_minYVariable;
- (void *)_referenceView;
- (NSMutableSet *)_uili_existingBaseFrameVariables;
- (NSMutableSet *)_uili_existingLayoutVariables;
- (NSISEngine *)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1;
- (BOOL)_uili_requiresObservationForVariable:(NSISVariable *)arg1;
- (void)_uili_stashLayoutVariableObservation:(NSObservation *)arg1 forVariable:(NSISVariable *)arg2;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_minXVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_widthVariable;

@optional
- (NSISVariable *)_contentHeightVariable;
- (NSISVariable *)_contentWidthVariable;
- (NSISVariable *)nsli_contentHeightVariable;
- (NSISVariable *)nsli_contentWidthVariable;
@end
