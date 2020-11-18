//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HAPMetadataProperty;

@interface HMDHAPProperty : NSObject <NSSecureCoding>
{
    HAPMetadataProperty *_hapPropertyMetadata;
}

@property (strong, nonatomic) HAPMetadataProperty *hapPropertyMetadata; // @synthesize hapPropertyMetadata=_hapPropertyMetadata;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHAPProperty:(id)arg1;

@end

