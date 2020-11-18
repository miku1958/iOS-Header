//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUINowPlayingUserTriggeredFeature-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUINowPlayingUserTriggeredFeature : NSObject <VUINowPlayingUserTriggeredFeature>
{
    BOOL _active;
    BOOL _autoRemove;
    id _userInfo;
    unsigned long long _type;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic, getter=shouldAutoRemove) BOOL autoRemove; // @synthesize autoRemove=_autoRemove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

