//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/NSObject-Protocol.h>

@class NSString, UIColor;

@protocol FBSceneHostAppearance <NSObject>

@property (nonatomic) unsigned long long appearanceStyle;
@property (strong, nonatomic) UIColor *backgroundColorWhileHosting;
@property (strong, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (nonatomic) unsigned long long hostedLayerTypes;
@property (readonly, nonatomic, getter=isHosting) BOOL hosting;
@property (readonly, nonatomic) double level;
@property (copy, nonatomic) NSString *minificationFilterName;
@property (readonly, nonatomic) struct CGRect referenceFrame;
@property (nonatomic) unsigned long long renderingMode;

@end

