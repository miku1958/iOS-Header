//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstallCoordination/NSObject-Protocol.h>

@class IXOwnedDataPromise;

@protocol IXCoordinatorWithAppAssetPromise <NSObject>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;

- (BOOL)appAssetPromiseHasBegunFulfillment:(BOOL *)arg1 error:(id *)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;
- (IXOwnedDataPromise *)appAssetPromiseWithError:(id *)arg1;
- (BOOL)setAppAssetPromise:(IXOwnedDataPromise *)arg1 error:(id *)arg2;
- (BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;
@end

