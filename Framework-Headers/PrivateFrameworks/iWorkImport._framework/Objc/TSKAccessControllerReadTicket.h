//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKAccessControllerReadTicket-Protocol.h>

@class NSString, TSKAccessController;

__attribute__((visibility("hidden")))
@interface TSKAccessControllerReadTicket : NSObject <TSKAccessControllerReadTicket>
{
    TSKAccessController *_accessController;
    _Atomic int _accessCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginExtendingLifetime;
- (void)dealloc;
- (void)endExtendingLifetime;
- (id)init;
- (id)initWithAccessController:(id)arg1;

@end

