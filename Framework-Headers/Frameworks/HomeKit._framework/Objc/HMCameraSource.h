//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _HMCameraSource;
@protocol OS_dispatch_queue;

@interface HMCameraSource : NSObject
{
    _HMCameraSource *_source;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong, nonatomic) _HMCameraSource *source; // @synthesize source=_source;

- (void).cxx_destruct;
- (id)initWithSource:(id)arg1;

@end

