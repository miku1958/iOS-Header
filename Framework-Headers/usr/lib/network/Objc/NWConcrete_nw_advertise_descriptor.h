//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_advertise_descriptor-Protocol.h>

@class NSString;

@interface NWConcrete_nw_advertise_descriptor : NSObject <OS_nw_advertise_descriptor>
{
    char *_name;
    char *_type;
    char *_domain;
    char *_txtRecord;
    unsigned long long _txtLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithName:(const char *)arg1 type:(const char *)arg2 domain:(const char *)arg3;

@end
