//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSApplicationTrustDataProvider-Protocol.h>

@class NSString;
@protocol _FBSMISInterfaceWrapper;

@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider>
{
    id<_FBSMISInterfaceWrapper> _misInterfaceWrapper;
    BOOL _authoritative;
}

@property (nonatomic) BOOL authoritative; // @synthesize authoritative=_authoritative;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithMISInterfaceWrapper:(id)arg1;
- (void)_logTrustState:(unsigned long long)arg1 forApp:(id)arg2 reason:(id)arg3;
- (unsigned long long)_validateApp:(id)arg1;
- (id)init;
- (unsigned long long)trustStateForApplication:(id)arg1;

@end
