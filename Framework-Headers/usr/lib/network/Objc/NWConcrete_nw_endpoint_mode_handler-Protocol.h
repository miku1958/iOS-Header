//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NSObject-Protocol.h>

@class NWConcrete_nw_endpoint_handler;

@protocol NWConcrete_nw_endpoint_mode_handler <NSObject>
- (void)cancelWithHandler:(NWConcrete_nw_endpoint_handler *)arg1 forced:(BOOL)arg2;
- (void)startWithHandler:(NWConcrete_nw_endpoint_handler *)arg1;
- (void)updatePathWithHandler:(NWConcrete_nw_endpoint_handler *)arg1;

@optional
- (BOOL)applyWithHandler:(NWConcrete_nw_endpoint_handler *)arg1 toChildren:(BOOL (^)(NWConcrete_nw_endpoint_handler *))arg2;
@end

