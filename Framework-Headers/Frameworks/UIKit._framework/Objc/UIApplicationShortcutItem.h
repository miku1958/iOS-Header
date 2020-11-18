//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>

@class NSData, NSDictionary, NSString, SBSApplicationShortcutItem, UIApplicationShortcutIcon;

@interface UIApplicationShortcutItem : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_type;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    UIApplicationShortcutIcon *_icon;
    id _targetContentIdentifier;
    unsigned long long _activationMode;
    NSData *_userInfoData;
}

@property (readonly, nonatomic) unsigned long long activationMode;
@property (nonatomic) unsigned long long activationMode; // @synthesize activationMode=_activationMode;
@property (copy, nonatomic) UIApplicationShortcutIcon *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSString *localizedSubtitle; // @synthesize localizedSubtitle=_localizedSubtitle;
@property (copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property (readonly, copy, nonatomic) SBSApplicationShortcutItem *sbsShortcutItem;
@property (copy, nonatomic) id targetContentIdentifier; // @synthesize targetContentIdentifier=_targetContentIdentifier;
@property (copy, nonatomic) NSString *type; // @synthesize type=_type;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;

+ (unsigned long long)_sbsActivationModeFromUIActivationMode:(unsigned long long)arg1;
+ (unsigned long long)_uiActivationModeFromSBSActivationMode:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfoData:(id)arg5 activationMode:(unsigned long long)arg6 targetContentIdentifier:(id)arg7;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSBSApplicationShortcutItem:(id)arg1;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2;
- (id)initWithType:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 icon:(id)arg4 userInfo:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
