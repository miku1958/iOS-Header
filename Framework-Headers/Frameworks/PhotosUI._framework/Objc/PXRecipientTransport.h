//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSString;

@interface PXRecipientTransport : NSObject <NSCopying>
{
    NSString *_address;
    long long _addressKind;
}

@property (readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property (readonly, nonatomic) long long addressKind; // @synthesize addressKind=_addressKind;

+ (id)new;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAddress:(id)arg1 addressKind:(long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end

