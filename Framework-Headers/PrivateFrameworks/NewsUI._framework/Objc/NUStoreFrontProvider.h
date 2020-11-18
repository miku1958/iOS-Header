//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXStoreFrontProvider-Protocol.h>

@class NSString;
@protocol FCAppleAccount;

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider>
{
    id<FCAppleAccount> _appleAccount;
}

@property (readonly, nonatomic) id<FCAppleAccount> appleAccount; // @synthesize appleAccount=_appleAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAppleAccount:(id)arg1;

@end

