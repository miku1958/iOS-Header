//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenReaderCore/SCRCGestureFinger.h>

@interface SCRCGestureStylus : SCRCGestureFinger
{
    double _altitude;
    double _azimuth;
}

- (double)altitude;
- (double)azimuth;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;
- (unsigned long long)type;

@end

