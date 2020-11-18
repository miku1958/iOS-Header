//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTService.h>

@class RTDefaultsManager;

@interface RTStarkManager : RTService
{
    RTDefaultsManager *_defaultsManager;
}

@property (strong, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)supportsNotificationName:(id)arg1;
- (void).cxx_destruct;
- (void)_fetchConnectionStateWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchConnectionStateWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;

@end
