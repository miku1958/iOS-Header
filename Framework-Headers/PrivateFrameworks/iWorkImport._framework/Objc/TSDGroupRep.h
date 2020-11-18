//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDContainerRep.h>

#import <iWorkImport/TSDMagicMoveMatching-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
{
    struct CGRect mLastBoundsForStandardKnobs;
}

@property (readonly, nonatomic) NSArray *allRepsContainedInGroup;

- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (struct CGRect)frameInUnscaledCanvas;
- (id)p_groupInfo;
- (void)recursivelyDrawInContext:(struct CGContext *)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (void)updateFromLayout;

@end
