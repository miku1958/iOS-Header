//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISpringLoadedInteractionEffect-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface _UISpringLoadedBlinkingEffect : NSObject <UISpringLoadedInteractionEffect>
{
    CALayer *_blinkLayer;
}

@property (strong, nonatomic) CALayer *blinkLayer; // @synthesize blinkLayer=_blinkLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareLayer:(id)arg1 forView:(id)arg2;
- (id)blinkAnimation;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end

