//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject
{
    id _primaryTarget;
    NSMutableSet *_allTargets;
}

- (BOOL)addActivityTarget:(id)arg1;
- (id)allTargets;
- (void)dealloc;
- (id)displayName;
- (id)primaryTarget;
- (BOOL)removeActivityTarget:(id)arg1;
- (void)setPrimaryTarget:(id)arg1;

@end

