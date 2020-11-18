//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLProtectionSpace.h>

@interface NSURLProtectionSpace (SafariCoreExtras)

@property (readonly, nonatomic) struct __CFString *safari_protocolAsSecAttrProtocolValue;

+ (id)safari_HTMLFormProtectionSpaceForURL:(id)arg1;
- (id)safari_URL;
- (id)safari_addressString;
- (BOOL)safari_allowsCredentialSaving;
- (long long)safari_compareToHighLevelDomainFromProtectionSpace:(id)arg1;
- (long long)safari_compareToHighLevelDomainFromProtectionSpaceOrderingDecimalCharactersLast:(id)arg1;
- (id)safari_creationDateOfCredentialWithUser:(id)arg1;
- (id)safari_protectionSpaceByReplacingHostWithHighlevelDomain;
@end

