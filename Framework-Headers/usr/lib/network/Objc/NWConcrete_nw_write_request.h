//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_write_request-Protocol.h>

@class NSString, NWConcrete_nw_connection;
@protocol OS_dispatch_data, OS_nw_content_context;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_write_request : NSObject <OS_nw_write_request>
{
    NWConcrete_nw_write_request *next;
    CDUnknownBlockType completion;
    NWConcrete_nw_connection *connection;
    unsigned int qos_class;
    NSObject<OS_dispatch_data> *data;
    NSObject<OS_nw_content_context> *context;
    NSObject<OS_nw_content_context> *original_message;
    unsigned long long consumed_bytes;
    double relative_priority;
    unsigned int complete:1;
    unsigned int reported:1;
    unsigned int idempotent:1;
    unsigned int write_close:1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
