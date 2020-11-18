//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

@interface PLURIWithHash : NSObject
{
    NSObject<OS_xpc_object> *_uri;
    unsigned long long _uriHash;
}

@property (strong, nonatomic) NSObject<OS_xpc_object> *uri; // @synthesize uri=_uri;
@property (nonatomic) unsigned long long uriHash; // @synthesize uriHash=_uriHash;

- (void).cxx_destruct;
- (id)init;
- (id)initWithXPCURI:(id)arg1;

@end
