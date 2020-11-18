//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKSharingDestination : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_destinationIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
