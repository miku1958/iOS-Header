//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSString, _SFAuthenticationContext;
@protocol _SFAuthenticationCustomUIProgressObserver;

@protocol _SFAuthenticationClient <NSObject>
- (id<_SFAuthenticationCustomUIProgressObserver>)authenticationCustomUIProgressObserverForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)authenticationMessageForContext:(_SFAuthenticationContext *)arg1;
- (BOOL)displayMessageAsTitleForContext:(_SFAuthenticationContext *)arg1;
- (NSString *)passcodePromptForContext:(_SFAuthenticationContext *)arg1;
@end

