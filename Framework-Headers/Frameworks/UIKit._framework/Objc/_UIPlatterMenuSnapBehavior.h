//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior
{
    UIAttachmentBehavior *_spring1;
    UIAttachmentBehavior *_spring2;
}

@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint)arg2;

@end
