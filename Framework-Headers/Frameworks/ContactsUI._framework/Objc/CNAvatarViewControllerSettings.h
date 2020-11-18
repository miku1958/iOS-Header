//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore, PRPersonaStore;
@protocol CNSchedulerProvider, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarViewControllerSettings : NSObject
{
    BOOL _threeDTouchEnabled;
    CNContactStore *_contactStore;
    unsigned long long _style;
    id<CNUIPRLikenessResolver> _likenessResolver;
    id<CNUILikenessRendering> _likenessRenderer;
    id<CNSchedulerProvider> _schedulerProvider;
    PRPersonaStore *_personaStore;
}

@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (strong, nonatomic) id<CNUILikenessRendering> likenessRenderer; // @synthesize likenessRenderer=_likenessRenderer;
@property (strong, nonatomic) id<CNUIPRLikenessResolver> likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property (strong, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property (strong, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (nonatomic) BOOL threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;

+ (id)defaultSettings;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(BOOL)arg3;
+ (id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(BOOL)arg2;
+ (id)settingsWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 threeDTouchEnabled:(BOOL)arg3 schedulerProvider:(id)arg4;
+ (BOOL)threeDTouchEnabledDefaultValue;
- (void).cxx_destruct;
- (id)initWithLikenessResolver:(id)arg1 likenessRenderer:(id)arg2 threeDTouchEnabled:(BOOL)arg3 schedulerProvider:(id)arg4;

@end

