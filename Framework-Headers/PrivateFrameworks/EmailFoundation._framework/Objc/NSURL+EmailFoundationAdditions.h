//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (EmailFoundationAdditions)
+ (id)ef_accountAllowedCharacterSet;
+ (id)ef_defaultAllowedCharacterSet;
+ (id)ef_gmailAuthAllowedCharacterSet;
+ (id)ef_messageAllowedCharacterSet;
+ (id)ef_yahooAuthAllowedCharacterSet;
- (BOOL)ef_hasHost:(id)arg1;
- (BOOL)ef_hasScheme:(id)arg1;
- (id)ef_hostNilForEmpty;
- (BOOL)ef_isHTTPOrHTTPSURL;
@end
