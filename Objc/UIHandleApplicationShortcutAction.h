//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction
{
}

@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (readonly, copy, nonatomic) UIApplicationShortcutItem *uiShortcutItem;

- (long long)UIActionType;
- (id)initWithSBSShortcutItem:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end

