//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXVideoInteractionObserverFactory-Protocol.h>

@class NSString;
@protocol SXVideoEventTrackerProviding;

@interface SXSkipInteractionObserverFactory : NSObject <SXVideoInteractionObserverFactory>
{
    id<SXVideoEventTrackerProviding> _eventTrackerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXVideoEventTrackerProviding> eventTrackerProvider; // @synthesize eventTrackerProvider=_eventTrackerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionObserverForVideo:(id)arg1;
- (id)initWithVideoEventTrackerProvider:(id)arg1;

@end

