//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Rapport/RPProfileSession.h>

@interface RPRangingSession : RPProfileSession
{
    CDUnknownBlockType _measurementHandler;
}

@property (copy, nonatomic) CDUnknownBlockType measurementHandler; // @synthesize measurementHandler=_measurementHandler;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_invalidate;
- (id)init;

@end

