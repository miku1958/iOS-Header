//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACDClient, NSDictionary, NSSet;

@interface ACDClientAuthorization : NSObject
{
    BOOL _isGranted;
    ACDClient *_client;
    NSSet *_grantedPermissions;
    NSDictionary *_options;
}

@property (strong, nonatomic) ACDClient *client; // @synthesize client=_client;
@property (strong, nonatomic) NSSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property (nonatomic) BOOL isGranted; // @synthesize isGranted=_isGranted;
@property (copy, nonatomic) NSDictionary *options; // @synthesize options=_options;

- (void).cxx_destruct;
- (id)initForClient:(id)arg1;

@end

