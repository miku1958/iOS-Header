//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BackBoardServices/BKSAbstractDefaults.h>

@class BKSIAPDefaults, BKSKeyboardDefaults, BKSLockdownDefaults, BKSPersistentConnectionDefaults, BKSSpringBoardDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults
{
    BKSLockdownDefaults *_lazy_lockdownDefaults;
    BKSIAPDefaults *_lazy_iapDefaults;
    BKSPersistentConnectionDefaults *_lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults *_lazy_springBoardDefaults;
    BKSKeyboardDefaults *_lazy_keyboardDefaults;
}

@property (readonly, strong, nonatomic) BKSIAPDefaults *iapDefaults;
@property (readonly, strong, nonatomic) BKSKeyboardDefaults *keyboardDefaults;
@property (readonly, strong, nonatomic) BKSLockdownDefaults *lockdownDefaults;
@property (readonly, strong, nonatomic) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property (readonly, strong, nonatomic) BKSSpringBoardDefaults *springBoardDefaults;

- (void).cxx_destruct;

@end

