//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASDServiceBroker;

@interface ASDInstallAttribution : NSObject
{
    ASDServiceBroker *_serviceBroker;
}

+ (id)interface;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)addInstallAttributionParamsWithConfig:(id)arg1;
- (void)addInstallAttributionParamsWithConfig:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

