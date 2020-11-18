//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface UIViewPropertyAnimatorTrackingState : NSObject
{
    BOOL _startPaused;
    BOOL _scrubsLinearly;
    BOOL _userInteractionEnabled;
    BOOL _optimizationsEnabled;
    NSUUID *_uuid;
}

@property (nonatomic) BOOL optimizationsEnabled; // @synthesize optimizationsEnabled=_optimizationsEnabled;
@property (nonatomic) BOOL scrubsLinearly; // @synthesize scrubsLinearly=_scrubsLinearly;
@property (nonatomic) BOOL startPaused; // @synthesize startPaused=_startPaused;
@property (nonatomic) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (id)init;

@end

