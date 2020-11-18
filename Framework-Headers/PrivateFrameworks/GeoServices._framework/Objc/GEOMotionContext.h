//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOMotionContextProviderDelegate-Protocol.h>

@class NSString;
@protocol GEOMotionContextProvider;

@interface GEOMotionContext : NSObject <GEOMotionContextProviderDelegate>
{
    id<GEOMotionContextProvider> _provider;
    unsigned long long _motionType;
    unsigned long long _exitType;
    unsigned long long _confidence;
}

@property (readonly, nonatomic) unsigned long long confidence; // @synthesize confidence=_confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long exitType; // @synthesize exitType=_exitType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDriving;
@property (readonly, nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) BOOL isWalking;
@property (readonly, nonatomic) unsigned long long motionType; // @synthesize motionType=_motionType;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)startMotionUpdatesWithProvider:(id)arg1;
- (void)stopMotionUpdates;

@end

