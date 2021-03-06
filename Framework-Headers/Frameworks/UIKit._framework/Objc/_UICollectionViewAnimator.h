//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class _UICollectionViewAnimationContext;
@protocol _UICollectionViewAnimationContext;

@interface _UICollectionViewAnimator : NSObject <NSCopying>
{
    id<_UICollectionViewAnimationContext> _animationContext;
    CDUnknownBlockType _handler;
}

@property (strong, nonatomic) _UICollectionViewAnimationContext *animationContext;
@property (readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

@end

