//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface ASDStoreItemMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_propertiesDictionary;
}

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSDictionary *propertiesDictionary; // @synthesize propertiesDictionary=_propertiesDictionary;
@property (readonly, nonatomic) long long storeItemIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)cancelDownloadURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)requiredDeviceCapabilities;
- (id)storeTransationID;

@end

