//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep
{
}

@property (readonly, nonatomic) struct CGRect p_clipRect;
@property (readonly, nonatomic) struct UIEdgeInsets p_edgeInsetsForClipping;

- (struct CGRect)clipRect;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (struct CGRect)layerFrameInScaledCanvas;
- (struct CGRect)p_convertBaseToPartialNaturalRect:(struct CGRect)arg1;
- (struct CGImage *)p_newImageForCachingBaseRep;
- (void)willBeRemoved;

@end

