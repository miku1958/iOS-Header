//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIIDSHandleAvailability-Protocol.h>

@class NSString;
@protocol CNUIIDSHandle;

@interface TestCNUIIDSHandleAvailability : NSObject <CNUIIDSHandleAvailability>
{
    BOOL _available;
    id<CNUIIDSHandle> _handle;
}

@property (nonatomic) BOOL available; // @synthesize available=_available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<CNUIIDSHandle> handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHandle:(id)arg1 availability:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;

@end

