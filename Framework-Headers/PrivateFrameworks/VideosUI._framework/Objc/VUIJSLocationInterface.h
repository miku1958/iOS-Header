//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideosUI/VUIJSLocationInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface VUIJSLocationInterface : IKJSObject <VUIJSLocationInterface>
{
}

- (void)_authorizationStatusDidChange:(id)arg1;
- (void)_locationDidChange:(id)arg1;
- (id)authorizationStatus;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (void)requestAuthorization;
- (void)shouldUpdateUserLocation;

@end
