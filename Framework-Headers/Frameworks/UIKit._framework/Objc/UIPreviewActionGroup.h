//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/UIPreviewActionItem-Protocol.h>

@class NSArray, NSString, UIColor, UIImage;

@interface UIPreviewActionGroup : NSObject <NSCopying, UIPreviewActionItem>
{
    NSString *_title;
    NSString *_identifier;
    long long _style;
    UIColor *_color;
    UIImage *_image;
    NSArray *_actions;
}

@property (copy, nonatomic, getter=_actions, setter=_setActions:) NSArray *actions; // @synthesize actions=_actions;
@property (strong, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1;
+ (id)actionGroupWithTitle:(id)arg1 style:(long long)arg2 actions:(id)arg3;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
