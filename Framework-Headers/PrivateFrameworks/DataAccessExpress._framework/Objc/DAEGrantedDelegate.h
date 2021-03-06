//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataAccessExpress/NSSecureCoding-Protocol.h>

@class NSString;

@interface DAEGrantedDelegate : NSObject <NSSecureCoding>
{
    NSString *_uri;
    NSString *_displayName;
    NSString *_preferredUserAddress;
    long long _permission;
}

@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) long long permission; // @synthesize permission=_permission;
@property (copy, nonatomic) NSString *preferredUserAddress; // @synthesize preferredUserAddress=_preferredUserAddress;
@property (copy, nonatomic) NSString *uri; // @synthesize uri=_uri;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

