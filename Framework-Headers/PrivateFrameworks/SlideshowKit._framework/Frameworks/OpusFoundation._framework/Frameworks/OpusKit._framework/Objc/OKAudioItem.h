//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSString, NSURL;

@interface OKAudioItem : NSObject <OKSettingsSupport>
{
    NSURL *_url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)supportedSettings;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;

@end

