//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <system_network/OS_nw_inbound_message-Protocol.h>

@class NSString;
@protocol OS_dispatch_data, OS_nw_dictionary;

@interface NWConcrete_nw_inbound_message : NSObject <OS_nw_inbound_message>
{
    NSObject<OS_dispatch_data> *content;
    NSObject<OS_nw_dictionary> *values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContent:(id)arg1;

@end
