//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol ASVGlyphStateDelegate;

@interface ASVGlyphState : NSObject
{
    CDStruct_0e8a9a91 _quaternionTarget;
    MISSING_TYPE *_scaleTarget;
    MISSING_TYPE *_translationTarget;
    unsigned long long _snapState;
    id<ASVGlyphStateDelegate> _delegate;
}

@property (weak, nonatomic) id<ASVGlyphStateDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) CDStruct_183601bc quaternionTarget;
@property (readonly, nonatomic) MISSING_TYPE *scaleTarget;
@property (nonatomic) unsigned long long snapState;
@property (readonly, nonatomic) MISSING_TYPE *translationTarget;

- (void).cxx_destruct;
- (CDStruct_183601bc)computeQuaternionTarget;
- (MISSING_TYPE *)computeScaleTarget;
- (MISSING_TYPE *)computeTranslationTarget;
- (id)init;
- (void)setQuaternionTarget:(CDStruct_183601bc)arg1;
- (void)setScaleTarget: /* Error: Ran out of types for this method. */;
- (void)setTranslationTarget: /* Error: Ran out of types for this method. */;

@end

