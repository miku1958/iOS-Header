//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSTimer;

@interface PerformanceGraphWidgetPrivate : NSObject
{
    int queueIndex;
    int queueCount;
    struct {
        double _field1;
        int _field2;
        int _field3;
        int _field4;
        unsigned long long _field5;
        BOOL _field6;
    } *dataPoints;
    NSTimer *timer;
    unsigned long long lastDraw;
    unsigned long long lastUpdate;
    int maxMemoryUsage;
    unsigned long long maxRenderTime;
    int maxPageCount;
    NSMutableDictionary *pageMemory;
}

- (void).cxx_destruct;

@end

