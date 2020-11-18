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
    long long _itemType;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property (readonly, copy, nonatomic) NSString *storefrontCountryCode; // @synthesize storefrontCountryCode=_storefrontCountryCode;

+ (id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2;
+ (long long)itemTypeFromPathComponent:(id)arg1 queryItems:(id)arg2;
+ (id)storefrontCountryCodeFromPathComponent:(id)arg1;
- (void).cxx_destruct;
- (id)initWithURL:(id)arg1;

@end

