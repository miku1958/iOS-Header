//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/NSXPCListenerDelegate-Protocol.h>

@class NSString, Protocol;

@interface CNXPCListenerDelegate : NSObject <NSXPCListenerDelegate>
{
    id _exportedObject;
    Protocol *_exportedInterfaceProtocol;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithWithExportedObject:(id)arg1 exportedInterfaceProtocol:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

