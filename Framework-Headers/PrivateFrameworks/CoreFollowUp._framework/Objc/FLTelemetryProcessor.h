//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FLTelemetryController;

@interface FLTelemetryProcessor : NSObject
{
    NSObject<FLTelemetryController> *_telemetryController;
}

- (void).cxx_destruct;
- (id)initWithController:(id)arg1;
- (void)processItemAddition:(id)arg1;
- (void)processItemRemoval:(id)arg1;

@end

