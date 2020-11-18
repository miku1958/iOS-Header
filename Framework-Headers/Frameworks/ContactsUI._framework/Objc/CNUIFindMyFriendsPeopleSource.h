//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class CNContactStore, CNUIFMFFacade, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUIFindMyFriendsPeopleSource : NSObject <CNUIPeopleSource>
{
    BOOL _fetching;
    CNUIFMFFacade *_fmfFacade;
    CNContactStore *_contactStore;
    NSArray *_fmfHandles;
    NSArray *_cachedPeople;
}

@property (strong, nonatomic) NSArray *cachedPeople; // @synthesize cachedPeople=_cachedPeople;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetching; // @synthesize fetching=_fetching;
@property (strong, nonatomic) CNUIFMFFacade *fmfFacade; // @synthesize fmfFacade=_fmfFacade;
@property (strong, nonatomic) NSArray *fmfHandles; // @synthesize fmfHandles=_fmfHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sourceKind;
+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;
- (void).cxx_destruct;
- (void)fetchFriends;
- (CDUnknownBlockType)friendContactFromFriendHandleTransformWithKeysToFetch:(id)arg1;
- (id)groups;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;

@end

