//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIServerHook-Protocol.h>

@class AAUIServerHookResponse, NSString, RUIObjectModel;
@protocol AAUIServerHookDelegate;

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook>
{
    id<AAUIServerHookDelegate> delegate;
    NSString *_altDSID;
    NSString *_context;
}

@property (strong, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property (strong, nonatomic) NSString *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AAUIServerHookDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RUIObjectModel *objectModel;
@property (strong, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performHSAUpgradeWithAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAltDSID:(id)arg1 upgradeContext:(id)arg2;
- (void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processObjectModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldMatchElement:(id)arg1;
- (BOOL)shouldMatchModel:(id)arg1;

@end

