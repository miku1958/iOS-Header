//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FMFContactUtility : NSObject
{
}

+ (id)sharedInstance;
- (id)contactKeys;
- (id)contactStore;
- (id)displayNameForContact:(id)arg1 andHandle:(id)arg2;
- (id)findOptimalContactInContacts:(id)arg1;
- (id)getContactForHandle:(id)arg1;
- (id)getContactForHandle:(id)arg1 keysToFetch:(id)arg2;

@end

