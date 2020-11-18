//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIImage;

@interface UIContextualAction : NSObject
{
    BOOL _forcesFallbackBackgroundColor;
    long long _style;
    CDUnknownBlockType _handler;
    NSString *_title;
    UIColor *_backgroundColor;
    UIImage *_image;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _preHandler;
}

@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) BOOL forcesFallbackBackgroundColor; // @synthesize forcesFallbackBackgroundColor=_forcesFallbackBackgroundColor;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) BOOL isDestructive;
@property (copy, nonatomic) CDUnknownBlockType preHandler; // @synthesize preHandler=_preHandler;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)contextualActionWithStyle:(long long)arg1 title:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_completeWithResult:(BOOL)arg1;
- (void)cancel;
- (id)description;
- (void)executeHandlerWithView:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)executePreHandlerWithView:(id)arg1;

@end

