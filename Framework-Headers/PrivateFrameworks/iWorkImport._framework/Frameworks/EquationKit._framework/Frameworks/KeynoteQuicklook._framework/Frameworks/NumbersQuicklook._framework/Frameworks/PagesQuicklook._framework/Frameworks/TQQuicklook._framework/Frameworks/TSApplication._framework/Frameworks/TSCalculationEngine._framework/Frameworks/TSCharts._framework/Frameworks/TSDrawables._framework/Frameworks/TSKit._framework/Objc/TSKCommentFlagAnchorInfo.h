//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSKCommentFlagAnchorInfo : NSObject
{
    BOOL _isVertical;
    struct CGPoint _leftAnchor;
    struct CGPoint _rightAnchor;
}

@property (nonatomic) BOOL isVertical; // @synthesize isVertical=_isVertical;
@property (nonatomic) struct CGPoint leftAnchor; // @synthesize leftAnchor=_leftAnchor;
@property (nonatomic) struct CGPoint rightAnchor; // @synthesize rightAnchor=_rightAnchor;

- (id)initWithLeftAnchor:(struct CGPoint)arg1 rightAnchor:(struct CGPoint)arg2 isVertical:(BOOL)arg3;

@end
