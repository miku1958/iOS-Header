//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObjectContext.h>

@interface PLSharedManagedObjectContext : PLManagedObjectContext
{
    id _changeNotificationObserver;
}

- (void).cxx_destruct;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(BOOL)arg2;
- (BOOL)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;

@end
