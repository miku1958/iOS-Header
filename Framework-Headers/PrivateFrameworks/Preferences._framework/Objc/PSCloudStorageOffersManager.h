//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Preferences/CommerceRemoteUIDelegateDelegate-Protocol.h>

@class CommerceRemoteUIDelegate, NSString;
@protocol PSCloudStorageOffersManagerDelegate;

@interface PSCloudStorageOffersManager : NSObject <CommerceRemoteUIDelegateDelegate>
{
    CommerceRemoteUIDelegate *_commerceDelegate;
    BOOL _skipCompletionAlert;
    BOOL _supportsModernAlerts;
    id<PSCloudStorageOffersManagerDelegate> _delegate;
    unsigned long long _requiredStorageThreshold;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSCloudStorageOffersManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long requiredStorageThreshold; // @synthesize requiredStorageThreshold=_requiredStorageThreshold;
@property (nonatomic) BOOL skipCompletionAlert; // @synthesize skipCompletionAlert=_skipCompletionAlert;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsModernAlerts; // @synthesize supportsModernAlerts=_supportsModernAlerts;

- (void).cxx_destruct;
- (void)_setupFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2;
- (void)beginFlowWithNavigationController:(id)arg1 modally:(BOOL)arg2;
- (void)beginFlowWithNavigationController:(id)arg1 purchaseToken:(id)arg2 buyParameters:(id)arg3 requestHeaders:(id)arg4 modally:(BOOL)arg5;
- (void)cancelLoad;
- (void)commerceDelegate:(id)arg1 didCompleteWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 loadDidFailWithError:(id)arg2;
- (void)commerceDelegate:(id)arg1 willPresentObjectModel:(id)arg2 page:(id)arg3;
- (void)commerceDelegateDidCancel:(id)arg1;
- (void)dealloc;

@end

