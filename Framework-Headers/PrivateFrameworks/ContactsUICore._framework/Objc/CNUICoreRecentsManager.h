//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CRRecentContactsLibrary;
@protocol CNScheduler;

@interface CNUICoreRecentsManager : NSObject
{
    CRRecentContactsLibrary *_recentsLibrary;
    id<CNScheduler> _workQueue;
}

@property (readonly, nonatomic) CRRecentContactsLibrary *recentsLibrary; // @synthesize recentsLibrary=_recentsLibrary;
@property (readonly, nonatomic) id<CNScheduler> workQueue; // @synthesize workQueue=_workQueue;

+ (id)allHandlesToSearchForFromContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)handlesForContactProperties:(id)arg1;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg1;
+ (id)queryForHandles:(id)arg1;
+ (id)supportedPropertyDescriptions;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;
+ (CDUnknownBlockType)transformForPropertyDescription:(id)arg1;
- (void).cxx_destruct;
- (id)initWithRecentsLibrary:(id)arg1 schedulerProvider:(id)arg2;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)arg1;
- (id)recentContactsMatchingContactProperties:(id)arg1;
- (id)recentsContactsMatchingHandles:(id)arg1;
- (void)removeRecents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

