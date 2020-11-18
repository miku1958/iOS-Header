//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaURLComponents : NSObject
{
    NSString *_identifier;
    NSString *_storefrontCountryCode;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSString *storefrontCountryCode; // @synthesize storefrontCountryCode=_storefrontCountryCode;

+ (id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2;
+ (id)storefrontCountryCodeFromPathComponent:(id)arg1;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end
