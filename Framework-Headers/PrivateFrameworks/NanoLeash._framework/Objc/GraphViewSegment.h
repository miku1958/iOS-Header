//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer;

@interface GraphViewSegment : NSObject
{
    double avghistory[33];
    double rssihistory[33];
    int index;
    CALayer *layer;
}

@property (readonly, nonatomic) CALayer *layer; // @synthesize layer;

- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (BOOL)addAvg:(double)arg1 liveRSSI:(double)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)init;
- (BOOL)isFull;
- (BOOL)isVisibleInRect:(struct CGRect)arg1;
- (void)reset;

@end
