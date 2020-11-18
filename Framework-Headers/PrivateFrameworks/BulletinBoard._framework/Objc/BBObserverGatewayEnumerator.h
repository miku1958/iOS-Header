//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BBBulletin, NSArray, NSMutableSet;

@interface BBObserverGatewayEnumerator : NSObject
{
    BOOL _cancelled;
    NSArray *_gateways;
    BBBulletin *_bulletin;
    unsigned long long _feeds;
    double _gatewayTimeout;
    NSMutableSet *_gatewaysPlayedLightsAndSirens;
}

@property (strong, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (nonatomic) unsigned long long feeds; // @synthesize feeds=_feeds;
@property (nonatomic) double gatewayTimeout; // @synthesize gatewayTimeout=_gatewayTimeout;
@property (copy, nonatomic) NSArray *gateways; // @synthesize gateways=_gateways;
@property (copy, nonatomic) NSMutableSet *gatewaysPlayedLightsAndSirens; // @synthesize gatewaysPlayedLightsAndSirens=_gatewaysPlayedLightsAndSirens;

- (void).cxx_destruct;
- (void)attemptNextGatewayInEnumerator:(id)arg1 playLightsAndSirens:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancel;
- (id)defaultGateway;
- (void)enumerateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)sendToDefaultGatewayToPlayLightsAndSirens:(BOOL)arg1;

@end

