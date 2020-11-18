//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>

@class HDProfile, NSString;

@interface HDSeriesQuantityEventObserver : NSObject <HDDataObserver>
{
    HDProfile *_profile;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_freezeSeriesForType:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;

@end
