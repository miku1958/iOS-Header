//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOToolProxy-Protocol.h>

@interface GEOToolLocalProxy : NSObject <GEOToolProxy>
{
}

- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (id)getDefault:(id)arg1;
- (void)lockDBs;
- (void)resetMapDataExtension;
- (void)unlockDBs;
- (void)validateMapLayerDataWithHandler:(CDUnknownBlockType)arg1;

@end
