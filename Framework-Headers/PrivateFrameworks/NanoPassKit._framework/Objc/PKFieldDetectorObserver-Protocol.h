//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class PKFieldDetector, PKFieldProperties;

@protocol PKFieldDetectorObserver <NSObject>

@optional
- (void)fieldDetectorDidEnterField:(PKFieldDetector *)arg1 withProperties:(PKFieldProperties *)arg2;
- (void)fieldDetectorDidExitField:(PKFieldDetector *)arg1;
@end

