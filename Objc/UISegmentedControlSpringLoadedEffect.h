//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISpringLoadedInteractionEffect-Protocol.h>

@class NSString;
@protocol UISpringLoadedInteractionEffect;

__attribute__((visibility("hidden")))
@interface UISegmentedControlSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect>
{
    id<UISpringLoadedInteractionEffect> _blinkEffect;
}

@property (strong, nonatomic) id<UISpringLoadedInteractionEffect> blinkEffect; // @synthesize blinkEffect=_blinkEffect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end

