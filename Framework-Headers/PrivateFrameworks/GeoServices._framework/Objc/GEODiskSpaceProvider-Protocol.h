//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@protocol GEODiskSpaceProvider <NSObject>
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;
@end

