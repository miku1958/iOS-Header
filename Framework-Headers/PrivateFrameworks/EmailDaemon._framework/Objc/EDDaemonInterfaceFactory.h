//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCategorySubsystem, EDPersistence;

@interface EDDaemonInterfaceFactory : NSObject
{
    EDPersistence *_persistence;
    EDCategorySubsystem *_categorySubsystem;
}

@property (strong, nonatomic) EDCategorySubsystem *categorySubsystem; // @synthesize categorySubsystem=_categorySubsystem;
@property (readonly, nonatomic) EDPersistence *persistence; // @synthesize persistence=_persistence;

- (void).cxx_destruct;
- (id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2;
- (id)newAccountRepository;
- (id)newActivityRegistry;
- (id)newClientResumerWithForegroundReporter:(id)arg1;
- (id)newFetchController;
- (id)newMailboxRepository;
- (id)newMessageRepository;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)newVIPManagerInterface;
- (id)sharedDonationController;
- (id)sharedInteractionLogger;

@end
