//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PXTilingController;
@protocol NSObject;

@interface PXTilingControllerCompositionInvalidationContext : NSObject
{
    id<NSObject> _animationOptions;
    PXTilingController *_originatingTilingController;
}

@property (strong, nonatomic) id<NSObject> animationOptions; // @synthesize animationOptions=_animationOptions;
@property (strong, nonatomic) PXTilingController *originatingTilingController; // @synthesize originatingTilingController=_originatingTilingController;

+ (id)defaultAnimationOptionsForTilingController:(id)arg1 withInvalidationContexts:(id)arg2;
- (void).cxx_destruct;
- (id)description;

@end

