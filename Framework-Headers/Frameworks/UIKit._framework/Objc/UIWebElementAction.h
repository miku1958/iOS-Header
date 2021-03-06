//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UIWebElementAction : NSObject
{
    NSString *_title;
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _dismissalHandler;
    int _type;
}

@property (copy, nonatomic) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property (readonly, nonatomic) int type; // @synthesize type=_type;

+ (id)customElementActionWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2;
+ (id)standardElementActionWithType:(int)arg1;
+ (id)standardElementActionWithType:(int)arg1 customTitle:(id)arg2 context:(id)arg3;
- (void)_runActionWithElement:(id)arg1 targetURL:(id)arg2 documentView:(id)arg3 interactionLocation:(struct CGPoint)arg4;
- (id)_title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 actionHandler:(CDUnknownBlockType)arg2 type:(int)arg3;

@end

