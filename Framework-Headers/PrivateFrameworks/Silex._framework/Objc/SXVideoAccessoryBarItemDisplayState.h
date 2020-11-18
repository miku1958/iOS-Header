//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol SXVideoAccessoryItem;

@interface SXVideoAccessoryBarItemDisplayState : NSObject
{
    id<SXVideoAccessoryItem> _item;
    UIView *_containerView;
    unsigned long long _displayMode;
    struct CGRect _frame;
}

@property (readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property (readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property (readonly, nonatomic) id<SXVideoAccessoryItem> item; // @synthesize item=_item;

- (void).cxx_destruct;
- (id)initWithItem:(id)arg1 containerView:(id)arg2 displayMode:(unsigned long long)arg3 frame:(struct CGRect)arg4;
- (BOOL)isEqual:(id)arg1;

@end

