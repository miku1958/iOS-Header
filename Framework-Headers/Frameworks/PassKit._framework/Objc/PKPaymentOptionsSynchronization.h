//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PKPaymentOptionsSynchronizationDelegate;

@interface PKPaymentOptionsSynchronization : NSObject
{
    BOOL _shouldSyncToCloud;
    id<PKPaymentOptionsSynchronizationDelegate> _delegate;
}

@property (weak, nonatomic) id<PKPaymentOptionsSynchronizationDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL shouldSyncToCloud; // @synthesize shouldSyncToCloud=_shouldSyncToCloud;

+ (BOOL)shouldSyncToCloud;
- (void).cxx_destruct;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_updateSynchronizationBehavior;
- (id)init;

@end

