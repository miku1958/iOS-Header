//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentContainer, NSURL;

@interface SCLUnlockHistoryPersistentStore : NSObject
{
    NSURL *_URL;
    NSPersistentContainer *_persistentContainer;
    NSManagedObjectContext *_storeContext;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property (strong) NSManagedObjectContext *storeContext; // @synthesize storeContext=_storeContext;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)deleteHistory:(id *)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)insertItem:(id)arg1;
- (void)loadStore;
- (BOOL)purgeOldItems;
- (id)recentHistoryItems;
- (id)recentItemsThresholdDate;

@end

