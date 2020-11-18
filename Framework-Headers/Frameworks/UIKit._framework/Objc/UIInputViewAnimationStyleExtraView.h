//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyleExtraView : NSObject
{
    int _clipContainerType;
    int _alignment;
    UIView *_view;
    CDUnknownBlockType _animation;
}

@property (nonatomic) int alignment; // @synthesize alignment=_alignment;
@property (copy, nonatomic) CDUnknownBlockType animation; // @synthesize animation=_animation;
@property (nonatomic) int clipContainerType; // @synthesize clipContainerType=_clipContainerType;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)extraView:(id)arg1 withAlignment:(int)arg2 animation:(CDUnknownBlockType)arg3 onSnapshot:(BOOL)arg4;
- (void)dealloc;

@end
