//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDynamicItem-Protocol.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIDynamicTransformer : NSObject <UIDynamicItem>
{
    struct CGPoint _center;
    CDUnknownBlockType _action;
}

@property (readonly, nonatomic) struct CGRect bounds;
@property (nonatomic) struct CGPoint center;
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) unsigned long long collisionBoundsType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct CGAffineTransform transform;

- (void).cxx_destruct;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;

@end

