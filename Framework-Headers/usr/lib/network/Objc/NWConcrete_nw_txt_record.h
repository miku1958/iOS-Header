//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_txt_record-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_txt_record : NSObject <OS_nw_txt_record>
{
    char *buffer;
    unsigned long long data_len;
    unsigned long long max_data_len;
    struct os_unfair_lock_s lock;
    unsigned int is_dictionary:1;
    unsigned int __pad_bits:7;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)init;

@end
