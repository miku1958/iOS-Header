//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACalDAV/CoreDAVTaskGroupDelegate-Protocol.h>

@class NSError;
@protocol CalDAVPrincipal;

@protocol CalDAVAccountPropertyRefreshDelegate <CoreDAVTaskGroupDelegate>
- (void)propertyRefreshForPrincipal:(id<CalDAVPrincipal>)arg1 completedWithError:(NSError *)arg2;
@end

