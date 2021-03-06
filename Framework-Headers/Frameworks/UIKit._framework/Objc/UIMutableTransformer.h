//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITransformer.h>

@protocol UIMutableTransformerDelegate;

@interface UIMutableTransformer : UITransformer
{
    id<UIMutableTransformerDelegate> _delegate;
}

@property (weak, nonatomic, setter=_setDelegate:) id<UIMutableTransformerDelegate> _delegate; // @synthesize _delegate;

- (void).cxx_destruct;
- (void)_ensureTransformsStructuresExists;
- (void)_updateTransform;
- (void)addTransform:(id)arg1 reason:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)removeAll;
- (void)removeTransform:(id)arg1;
- (void)replaceTransform:(id)arg1 withTransform:(id)arg2 reason:(id)arg3;

@end

