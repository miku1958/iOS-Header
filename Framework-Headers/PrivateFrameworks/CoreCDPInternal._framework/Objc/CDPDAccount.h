//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDAccount : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)isICDPEnabledForDSID:(id)arg1;
- (BOOL)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (id)primaryAccountUsername;

@end
