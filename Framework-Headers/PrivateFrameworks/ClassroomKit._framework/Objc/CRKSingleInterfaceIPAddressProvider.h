//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSString;

@interface CRKSingleInterfaceIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    NSString *mInterfaceName;
}

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInterfaceName:(id)arg1;

@end

