//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFDatabase.h>

#import <VoiceShortcuts/VCDatabaseProvider-Protocol.h>

@class NSPersistentStoreDescription, NSString;

@interface WFDatabase (VCDatabaseProvider) <VCDatabaseProvider>

@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSPersistentStoreDescription *storeDescription;
@property (readonly) Class superclass;

@end
