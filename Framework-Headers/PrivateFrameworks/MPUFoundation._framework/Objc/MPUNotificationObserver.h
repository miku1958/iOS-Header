//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPUNotificationObserver : NSObject
{
    id _notificationObservationToken;
}

@property (strong, nonatomic) id notificationObservationToken; // @synthesize notificationObservationToken=_notificationObservationToken;

+ (id)observerWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 queue:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;

@end

