//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WFAlert;

@interface WFAlertButton : NSObject
{
    BOOL _preferred;
    NSString *_title;
    long long _style;
    CDUnknownBlockType _handler;
    WFAlert *_alert;
}

@property (weak, nonatomic) WFAlert *alert; // @synthesize alert=_alert;
@property (readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly, nonatomic, getter=isPreferred) BOOL preferred; // @synthesize preferred=_preferred;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)cancelButtonWithHandler:(CDUnknownBlockType)arg1;
+ (id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)okButtonWithHandler:(CDUnknownBlockType)arg1;
+ (id)okButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3 preferred:(BOOL)arg4;

@end

