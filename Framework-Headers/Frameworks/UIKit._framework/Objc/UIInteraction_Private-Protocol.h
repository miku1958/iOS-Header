//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInteraction-Protocol.h>

@class UITraitCollection;
@protocol UIInteractionEffect;

@protocol UIInteraction_Private <UIInteraction>

@property (strong, nonatomic) id<UIInteractionEffect> interactionEffect;


@optional
- (void)_viewTraitCollectionDidChange:(UITraitCollection *)arg1;
@end
