//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NumbersQuicklook/TNPageContentRep.h>

@interface TNAdditionalPageContentRep : TNPageContentRep
{
}

- (struct CGRect)clipRect;
- (BOOL)directlyManagesLayerContent;
- (void)drawInContext:(struct CGContext *)arg1;
- (BOOL)forcesPlacementOnTop;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (BOOL)masksToBounds;
- (unsigned long long)pageIndex;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)willBeRemoved;

@end
