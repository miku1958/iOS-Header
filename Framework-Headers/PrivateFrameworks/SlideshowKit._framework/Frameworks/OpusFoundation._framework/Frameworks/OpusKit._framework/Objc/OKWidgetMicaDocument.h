//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OpusKit/NSCopying-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>

@class CALayer, NSData, NSDictionary, NSString, OKWidgetMicaView, OKWidgetMicaViewProxy;

@interface OKWidgetMicaDocument : NSObject <OKSettingsSupport, NSCopying>
{
    NSData *_data;
    NSDictionary *_rootDictionary;
    CALayer *_rootLayer;
    NSDictionary *_publishedObjects;
    OKWidgetMicaView *_widgetMicaView;
}

@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *publishedObjects; // @synthesize publishedObjects=_publishedObjects;
@property (strong, nonatomic) NSDictionary *rootDictionary; // @synthesize rootDictionary=_rootDictionary;
@property (strong, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property (readonly) Class superclass;
@property (nonatomic) OKWidgetMicaViewProxy *widgetMicaView;

+ (id)supportedSettings;
- (void)applySettings:(id)arg1 withResolution:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (double)documentHeight;
- (double)documentWidth;
- (id)initWithURL:(id)arg1;
- (void)loadMicaDocument;
- (id)publishedObjectNames;
- (id)publishedObjectWithName:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (id)settingsForKey:(id)arg1;

@end

