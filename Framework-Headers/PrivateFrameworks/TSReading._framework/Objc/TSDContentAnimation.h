//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSDContentAnimationTiming-Protocol.h>

@class NSString;

@interface TSDContentAnimation : NSObject <TSDContentAnimationTiming>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)animation;
- (id)i_animationWithTransformBlock:(CDUnknownBlockType)arg1;
- (void)i_applyToLayer:(id)arg1 withTransformBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)i_canProduceAnimation;
- (id)i_endLocation;

@end

