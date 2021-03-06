//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIMutableCarPlayApplicationSceneSettings.h>

#import <CarPlayUIServices/CRSUIInstrumentClusterSceneSettings-Protocol.h>
#import <CarPlayUIServices/CRSUIMutableMapStyleProviding-Protocol.h>

@class NSString;

@interface CRSUIMutableInstrumentClusterSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIInstrumentClusterSceneSettings, CRSUIMutableMapStyleProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemType;
@property (readonly, nonatomic) long long mapStyle;
@property (nonatomic) unsigned long long showsCompass;
@property (nonatomic) unsigned long long showsSpeedLimit;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMapStyle:(long long)arg1;

@end

