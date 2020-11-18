//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/UISpringLoadedInteractionEffect-Protocol.h>

@class NSString;
@protocol SBFSpringLoadedInteractionEffectDelegate, UISpringLoadedInteractionEffect;

@interface SBFSpringLoadedInteractionEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id<UISpringLoadedInteractionEffect> _blinkEffect;
    BOOL _useFastBlinkAnimation;
    id<SBFSpringLoadedInteractionEffectDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBFSpringLoadedInteractionEffectDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useFastBlinkAnimation; // @synthesize useFastBlinkAnimation=_useFastBlinkAnimation;

- (void).cxx_destruct;
- (id)fastBlinkAnimation;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end
