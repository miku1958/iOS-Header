//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSAppleAccountInformationProviding-Protocol.h>

@class NSString;

@interface WBSAppleAccountInformationProvider : NSObject <WBSAppleAccountInformationProviding>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)_primaryAppleAccountSecurityLevel;
- (long long)appleAccountSecurityState;
- (void)getAppleAccountSecurityStateWithCompletion:(CDUnknownBlockType)arg1;

@end

