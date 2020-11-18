//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IntentsUICardKitProviderSupport/NSObject-Protocol.h>

@class INInteraction, NSArray, NSDictionary;
@protocol INUICKPViewControllerAllocatingDelegate;

@protocol INUICKPViewControllerAllocating <NSObject>

@property (readonly, copy, nonatomic) NSArray *allocatedViewControllers;
@property (weak, nonatomic) id<INUICKPViewControllerAllocatingDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *redundantInterfaceSections;
@property (nonatomic) BOOL requiresUserConsent;
@property (readonly, copy, nonatomic) NSDictionary *viewControllersByInitialInterfaceSection;

- (void)performAllocationsFromInteraction:(INInteraction *)arg1 initialInterfaceSections:(NSArray *)arg2 completion:(void (^)(NSError *))arg3;

@optional
@end
