//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSString, OKPresentationMaterial;
@protocol OKWidgetProtocol;

@interface OKMaterial : NSObject <OKSettingsSupport>
{
    OKPresentationMaterial *_material;
    BOOL _needsApplySettings;
    BOOL _hasSettingsApplied;
    id<OKWidgetProtocol> _parentWidget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) id<OKWidgetProtocol> parentWidget; // @synthesize parentWidget=_parentWidget;
@property (readonly) Class superclass;

+ (id)supportedSettings;
- (void)applySettings;
- (void)applySettingsIfNeeded;
- (void)dealloc;
- (id)initWithMaterial:(id)arg1;
- (void)load;
- (void)setNeedsApplySettings;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)unload;

@end
