//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/JSExport-Protocol.h>

@class NSNumber;

@protocol VUIJSLocationInterface <JSExport>
- (NSNumber *)authorizationStatus;
- (void)requestAuthorization;
- (void)shouldUpdateUserLocation;
@end
