//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol IPAImageGeometry, IPAImageTransform;

@protocol IPAImageTransform
- (BOOL)canAlignToPixelsExactly;
- (id<IPAImageGeometry>)inputGeometry;
- (id<IPAImageGeometry>)intrinsicGeometry;
- (id<IPAImageTransform>)inverseTransform;
- (struct CGPoint)mapPoint:(struct CGPoint)arg1;
@end
