//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUINowPlayingHybridFeature-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingHybridFeature : NSObject <VUINowPlayingHybridFeature>
{
    BOOL _active;
    BOOL _autoRemove;
    BOOL _skippable;
    double _startTime;
    double _duration;
    unsigned long long _activationType;
    id _userInfo;
    unsigned long long _type;
}

@property (nonatomic) unsigned long long activationType; // @synthesize activationType=_activationType;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove; // @synthesize autoRemove=_autoRemove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isSkippable) BOOL skippable; // @synthesize skippable=_skippable;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (BOOL)isEqual:(id)arg1;

@end

