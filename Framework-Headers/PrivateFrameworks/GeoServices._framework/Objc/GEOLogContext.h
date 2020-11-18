//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSArray, NSMutableArray;

@interface GEOLogContext : NSObject <NSCopying>
{
    NSMutableArray *_logMsgStates;
}

@property (readonly, nonatomic) NSArray *logMsgStates; // @synthesize logMsgStates=_logMsgStates;

+ (id)defaultGlobalLogContext;
+ (id)emptyLogContext;
+ (id)logContextFromTraits:(id)arg1;
+ (id)logContextWithDefaultTraits;
+ (id)logContextWithDefaultTraitsForCachedContext;
- (void).cxx_destruct;
- (void)_initializeDefaultStates;
- (void)_initializeGlobalDefaultStates;
- (void)_registerApplicationIdentifierState;
- (void)_registerDefaultMapUIState;
- (void)_registerDeviceBaseStateWithTraits:(id)arg1;
- (void)_registerDeviceConnectionState;
- (void)_registerDeviceIdentifierState;
- (void)_registerDeviceLocaleStateWithTraits:(id)arg1;
- (void)_registerExperimentsState;
- (void)_registerLogContextWithTraits:(id)arg1;
- (void)_registerMapViewStateWithTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentExperimentsState;
- (id)init;
- (id)initWithDefaultStates;
- (id)initWithDefaultTraits;
- (id)initWithGlobalDefaultStates;
- (id)initWithTraits:(id)arg1;
- (id)logContextByMergingLogContext:(id)arg1;
- (id)logMsgStateOfType:(int)arg1;
- (void)mergeLogContext:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)registerUserSessionStateOfType:(unsigned long long)arg1 isNavSessionAllowed:(BOOL)arg2 userSessionSnapshot:(id)arg3;
- (void)unregisterLogMsgStateOfType:(int)arg1;
- (void)unregisterLogMsgStateOfType:(int)arg1 stateOrigin:(id)arg2;

@end

