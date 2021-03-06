//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TKTokenConfiguration, TKTokenDriver, TKTokenID, TKTokenKeychainContents;
@protocol TKTokenDelegate;

@interface TKToken : NSObject
{
    TKTokenConfiguration *_configuration;
    TKTokenDriver *_tokenDriver;
    id<TKTokenDelegate> _delegate;
    TKTokenKeychainContents *_keychainContents;
    TKTokenID *_tokenID;
}

@property (readonly) TKTokenConfiguration *configuration;
@property (weak) id<TKTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) TKTokenKeychainContents *keychainContents; // @synthesize keychainContents=_keychainContents;
@property (readonly) TKTokenDriver *tokenDriver; // @synthesize tokenDriver=_tokenDriver;
@property (readonly) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTokenDriver:(id)arg1 instanceID:(id)arg2;
- (void)terminate;

@end

