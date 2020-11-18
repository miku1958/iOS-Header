//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactStore;

@interface HFContactStore : NSObject
{
    CNContactStore *_contactStore;
}

@property (readonly, nonatomic) CNContactStore *backingStore;
@property (readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;

+ (id)defaultStore;
- (void).cxx_destruct;
- (id)_fallbackContactWithEmailAddress:(id)arg1 phoneNumber:(id)arg2;
- (id)_meContactWithEmailAddress:(id)arg1 keys:(id)arg2;
- (id)contactForEmailAddress:(id)arg1 withKeys:(id)arg2;
- (id)contactForPhoneNumber:(id)arg1 withKeys:(id)arg2;
- (id)contactForUserHandle:(id)arg1 withKeys:(id)arg2;
- (id)init;

@end
