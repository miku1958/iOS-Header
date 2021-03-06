//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIAssistantBarButtonItemProvider : NSObject
{
}

+ (BOOL)_isDictationButtonVisible;
+ (BOOL)_isDismissButtonVisible;
+ (BOOL)_isEmojiButtonVisible;
+ (BOOL)_isKeyboardGroupVisible;
+ (BOOL)_isShowKeyboardButtonVisible;
+ (id)barButtonItemForAssistantItemStyle:(long long)arg1 target:(id)arg2;
+ (id)configuredSymbolImageWithName:(id)arg1 size:(double)arg2;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)arg1;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)arg1;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)arg1;
+ (id)systemDefaultAssistantItem;
+ (id)unmodifiableSystemAssistantItem;

@end

