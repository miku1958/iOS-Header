//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSKeychainStore : NSObject
{
}

- (id)addItem:(id)arg1 error:(id *)arg2;
- (BOOL)deleteItemsMatchingQuery:(id)arg1 error:(id *)arg2;
- (id)findItemsMatchingQuery:(id)arg1 error:(id *)arg2;
- (BOOL)updateAttributes:(id)arg1 ofItemsMatchingQuery:(id)arg2 error:(id *)arg3;

@end

