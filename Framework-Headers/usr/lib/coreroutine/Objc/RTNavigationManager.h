//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTNotifier.h>

#import <coreroutine/GEONavigationListenerDelegate-Protocol.h>

@class GEONavigationListener, GEONavigationRouteSummary, NSString, RTAuthorizationManager;

@interface RTNavigationManager : RTNotifier <GEONavigationListenerDelegate>
{
    BOOL _monitorRouteSummary;
    GEONavigationListener *_navigationListener;
    GEONavigationRouteSummary *_routeSummary;
    RTAuthorizationManager *_authorizationManager;
}

@property (strong, nonatomic) RTAuthorizationManager *authorizationManager; // @synthesize authorizationManager=_authorizationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL monitorRouteSummary; // @synthesize monitorRouteSummary=_monitorRouteSummary;
@property (strong, nonatomic) GEONavigationListener *navigationListener; // @synthesize navigationListener=_navigationListener;
@property (strong, nonatomic) GEONavigationRouteSummary *routeSummary; // @synthesize routeSummary=_routeSummary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithAuthorizationManager:(id)arg1;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2;
- (void)onAuthorizationNotification:(id)arg1;
- (void)setup;

@end

