//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;
@protocol HKFetchOperationDelegate;

@interface HKFetchOperation : NSObject
{
    NSUUID *_UUID;
    long long _clientPriority;
    long long _operationPriority;
    id<HKFetchOperationDelegate> _delegate;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (nonatomic) long long clientPriority; // @synthesize clientPriority=_clientPriority;
@property (weak, nonatomic, getter=_delegate, setter=_setDelegate:) id<HKFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long operationPriority; // @synthesize operationPriority=_operationPriority;

- (void).cxx_destruct;
- (void)_alertDelegateDidUpdatePriority;
- (id)init;
- (void)startOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopOperation;

@end

