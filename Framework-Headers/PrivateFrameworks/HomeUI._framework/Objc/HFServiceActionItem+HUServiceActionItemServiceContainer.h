//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFServiceActionItem.h>

#import <HomeUI/HUServiceContainerItem-Protocol.h>

@class NSString;

@interface HFServiceActionItem (HUServiceActionItemServiceContainer) <HUServiceContainerItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)hu_containedAccessories;
- (id)hu_containedServices;
@end

