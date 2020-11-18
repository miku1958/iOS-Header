//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _defaultPairedDevice;
    NSString *_name;
    NSString *_modelIdentifier;
    NSString *_uniqueID;
    NSString *_phoneNumberURI;
}

@property (nonatomic, getter=isDefaultPairedDevice) BOOL defaultPairedDevice; // @synthesize defaultPairedDevice=_defaultPairedDevice;
@property (copy, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) NSString *phoneNumberURI; // @synthesize phoneNumberURI=_phoneNumberURI;
@property (copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

