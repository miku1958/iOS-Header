//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImage-Protocol.h>

@class NURegion;

@protocol NUPurgeableImage <NUImage>
- (BOOL)beginAccess;
- (BOOL)beginAccessRegion:(NURegion *)arg1;
- (void)endAccess;
- (void)endAccessRegion:(NURegion *)arg1;
@end

