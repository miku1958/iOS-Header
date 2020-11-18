//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIForceObservationMessageConstructing-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIForceMessage : NSObject <_UIForceObservationMessageConstructing>
{
    BOOL _reset;
    double touchForce;
    unsigned long long stage;
    double timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isReset) BOOL reset; // @synthesize reset=_reset;
@property (nonatomic) unsigned long long stage; // @synthesize stage;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp; // @synthesize timestamp;
@property (nonatomic) double touchForce; // @synthesize touchForce;

+ (id)observe:(CDUnknownBlockType)arg1;
+ (id)reset;

@end

