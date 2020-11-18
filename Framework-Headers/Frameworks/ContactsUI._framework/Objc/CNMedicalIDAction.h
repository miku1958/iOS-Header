//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

#import <ContactsUI/HKMedicalIDViewControllerDelegate-Protocol.h>

@class CNContact, HKHealthStore, NSString, _HKMedicalIDData;

__attribute__((visibility("hidden")))
@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate>
{
    long long _medicalIDActionType;
    HKHealthStore *_healthStore;
    _HKMedicalIDData *_healthData;
}

@property (strong, nonatomic) CNContact *contact; // @dynamic contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _HKMedicalIDData *healthData; // @synthesize healthData=_healthData;
@property (strong, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (nonatomic) long long medicalIDActionType; // @synthesize medicalIDActionType=_medicalIDActionType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)medicalIDViewControllerDidCancel:(id)arg1;
- (void)medicalIDViewControllerDidDelete:(id)arg1;
- (void)medicalIDViewControllerDidFinish:(id)arg1;
- (void)medicalIDViewControllerDidSave:(id)arg1;
- (void)performActionWithSender:(id)arg1;

@end

