//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFManagedStorageConnection;

@interface AFDisambiguationStore : NSObject
{
    AFManagedStorageConnection *_store;
}

- (void).cxx_destruct;
- (id)_store;
- (id)infoForIdentifier:(id)arg1;
- (void)reset;
- (void)saveInfo:(id)arg1 forIdentifier:(id)arg2;

@end

