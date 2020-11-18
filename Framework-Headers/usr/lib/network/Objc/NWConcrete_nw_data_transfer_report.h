//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_data_transfer_report-Protocol.h>

@class NSString, NWConcrete_nw_connection;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_data_transfer_report : NSObject <OS_nw_data_transfer_report>
{
    unsigned long long start_time;
    unsigned long long duration_milliseconds;
    NWConcrete_nw_connection *connection;
    struct os_unfair_lock_s lock;
    unsigned int path_count;
    unsigned int allocated_path_count;
    int state;
    struct nw_data_transfer_path_report primary_path;
    struct nw_data_transfer_path_report *secondary_paths;
    unsigned int collection_in_progress:1;
    unsigned int __pad_bits:7;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
