//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class UIKBTouchState;

__attribute__((visibility("hidden")))
@interface UIKBTouchStateTask : NSObject <NSCopying>
{
    UIKBTouchState *_touchState;
    CDUnknownBlockType _task;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
@property (readonly, strong, nonatomic) UIKBTouchState *touchState; // @synthesize touchState=_touchState;

+ (id)touchStateTaskForTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTouchState:(id)arg1 andTask:(CDUnknownBlockType)arg2;

@end

