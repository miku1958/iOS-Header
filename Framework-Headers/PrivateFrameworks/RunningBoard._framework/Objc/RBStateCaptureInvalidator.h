//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBSInvalidatable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RBStateCaptureInvalidator : NSObject <RBSInvalidatable>
{
    unsigned long long _handle;
    BOOL _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)invalidate;

@end

