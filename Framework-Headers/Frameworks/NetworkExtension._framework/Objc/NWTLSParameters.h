//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSSet;

@interface NWTLSParameters : NSObject
{
    NSData *_TLSSessionID;
    NSSet *_SSLCipherSuites;
    unsigned long long _minimumSSLProtocolVersion;
    unsigned long long _maximumSSLProtocolVersion;
}

@property (copy) NSSet *SSLCipherSuites; // @synthesize SSLCipherSuites=_SSLCipherSuites;
@property (copy) NSData *TLSSessionID; // @synthesize TLSSessionID=_TLSSessionID;
@property unsigned long long maximumSSLProtocolVersion; // @synthesize maximumSSLProtocolVersion=_maximumSSLProtocolVersion;
@property unsigned long long minimumSSLProtocolVersion; // @synthesize minimumSSLProtocolVersion=_minimumSSLProtocolVersion;

- (void).cxx_destruct;

@end

