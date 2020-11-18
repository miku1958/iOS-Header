//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RTManagedConfigurationObserver;

@interface RTManagedConfiguration : NSObject
{
    id<RTManagedConfigurationObserver> _delegate;
}

@property (weak, nonatomic) id<RTManagedConfigurationObserver> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)effectiveBoolValueForSetting:(id)arg1;
- (BOOL)isFindMyCarAllowed;
- (id)stringToManagedConfigurationKey:(id)arg1;

@end
