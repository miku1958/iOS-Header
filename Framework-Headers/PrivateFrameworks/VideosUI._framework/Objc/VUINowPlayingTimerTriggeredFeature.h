//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUINowPlayingFeature-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature>
{
    BOOL _active;
    BOOL _autoRemove;
    BOOL _repeats;
    double _duration;
    id _userInfo;
    unsigned long long _type;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove; // @synthesize autoRemove=_autoRemove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL repeats; // @synthesize repeats=_repeats;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;

@end
