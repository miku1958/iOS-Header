//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MedicalIDChangeObserverDelegate;

@interface MedicalIDChangeObserver : NSObject
{
    int _medicalIDChangedToken;
    id<MedicalIDChangeObserverDelegate> _delegate;
}

@property (weak, nonatomic) id<MedicalIDChangeObserverDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)startObservingChanges;

@end

