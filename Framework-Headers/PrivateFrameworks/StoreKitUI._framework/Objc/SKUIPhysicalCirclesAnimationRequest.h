//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying>
{
    long long _animationType;
    CDUnknownBlockType _completionBlock;
}

@property (nonatomic) long long animationType; // @synthesize animationType=_animationType;

- (void).cxx_destruct;
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finishAnimation;

@end

