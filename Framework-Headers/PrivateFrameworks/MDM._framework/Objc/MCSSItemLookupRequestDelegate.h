//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/MCSSRequestDelegate.h>

#import <MDM/SSItemLookupRequestDelegate-Protocol.h>

@class NSArray, NSString, SSItemLookupRequest;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate>
{
    NSArray *_items;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) SSItemLookupRequest *request; // @dynamic request;
@property (readonly) Class superclass;

+ (id)instance;
- (void).cxx_destruct;
- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end
