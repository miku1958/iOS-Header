//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface MSPSharedTripSharingIdentity : NSObject <NSSecureCoding>
{
    BOOL _validAccount;
    NSString *_name;
    NSString *_handle;
    NSArray *_aliases;
}

@property (readonly, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property (readonly, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic, getter=hasValidAccount) BOOL validAccount; // @synthesize validAccount=_validAccount;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValidAccount:(BOOL)arg1 name:(id)arg2 handle:(id)arg3 aliases:(id)arg4;

@end
