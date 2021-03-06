//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable>
{
    BOOL _accessRequiresPassword;
    unsigned long long _access;
    NSString *_accessPassword;
}

@property (readonly, nonatomic) unsigned long long access; // @synthesize access=_access;
@property (readonly, copy, nonatomic) NSString *accessPassword; // @synthesize accessPassword=_accessPassword;
@property (readonly, nonatomic) BOOL accessRequiresPassword; // @synthesize accessRequiresPassword=_accessRequiresPassword;
@property (readonly, nonatomic) BOOL accessSupportsPassword;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)accessClassificationSupportsPassword:(unsigned long long)arg1;
+ (id)defaultAccessControl;
+ (id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(BOOL)arg2 password:(id)arg3;
+ (id)na_identity;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccess:(unsigned long long)arg1 requiresPassword:(BOOL)arg2 password:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end

