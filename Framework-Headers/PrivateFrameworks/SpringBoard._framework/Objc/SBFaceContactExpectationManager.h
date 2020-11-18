//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBProximitySensorManager, SBSceneManager;

@interface SBFaceContactExpectationManager : NSObject
{
    SBSceneManager *_sceneManager;
    SBProximitySensorManager *_proximitySensorManager;
    BOOL _faceExpected;
}

- (void).cxx_destruct;
- (id)_frontmostScenesExpectingFaceContact;
- (id)_proximitySensorClientID;
- (id)description;
- (id)initWithSceneManager:(id)arg1;
- (id)initWithSceneManager:(id)arg1 proximitySensorManager:(id)arg2;
- (void)updateFaceContactExpectation;

@end
