//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDContainerLayout.h>

#import <TSDrawables/TSDWrappableParent-Protocol.h>

@interface TSDCounterRotateLayout : TSDContainerLayout <TSDWrappableParent>
{
}

- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect)baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (BOOL)canFlip;
- (id)descendentWrappables;
- (BOOL)descendentWrappablesContainsWrappable:(id)arg1;
- (struct CGSize)minimumSize;
- (id)reliedOnLayouts;
- (id)visibleGeometries;

@end

