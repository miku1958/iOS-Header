//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchKit/WKInterfaceObject.h>

@interface WKInterfaceMap : WKInterfaceObject
{
}

- (void)addAnnotation:(CDStruct_c3b9c2ee)arg1 withImage:(id)arg2 centerOffset:(struct CGPoint)arg3;
- (void)addAnnotation:(CDStruct_c3b9c2ee)arg1 withImageNamed:(id)arg2 centerOffset:(struct CGPoint)arg3;
- (void)addAnnotation:(CDStruct_c3b9c2ee)arg1 withPinColor:(long long)arg2;
- (void)removeAllAnnotations;
- (void)setRegion:(CDStruct_90e2a262)arg1;
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1;

@end
