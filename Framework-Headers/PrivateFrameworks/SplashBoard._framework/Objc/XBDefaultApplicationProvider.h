//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/XBApplicationProviding-Protocol.h>

@class NSString;

@interface XBDefaultApplicationProvider : NSObject <XBApplicationProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_allApplicationsFilteredBySystem:(BOOL)arg1 bySplashBoard:(BOOL)arg2;
- (id)allInstalledApplications;
- (id)allSplashBoardApplications;
- (id)splashBoardSystemApplications;

@end
