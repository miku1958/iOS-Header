//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUIRingsRenderPipelineConfiguration : NSObject
{
    BOOL _hasVisibleRings;
    BOOL _hasEmptyRing;
    BOOL _hasFilledRing;
    BOOL _needsAlphaReductionPass;
    BOOL _hasOverlappingRing;
}

@property (nonatomic) BOOL hasEmptyRing; // @synthesize hasEmptyRing=_hasEmptyRing;
@property (nonatomic) BOOL hasFilledRing; // @synthesize hasFilledRing=_hasFilledRing;
@property (nonatomic) BOOL hasOverlappingRing; // @synthesize hasOverlappingRing=_hasOverlappingRing;
@property (nonatomic) BOOL hasVisibleRings; // @synthesize hasVisibleRings=_hasVisibleRings;
@property (nonatomic) BOOL needsAlphaReductionPass; // @synthesize needsAlphaReductionPass=_needsAlphaReductionPass;


@end
