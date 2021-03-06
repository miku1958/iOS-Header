//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNChangeHistoryEventVisitor-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString;

@interface CNAvatarCacheFingerprintCollector : NSObject <CNChangeHistoryEventVisitor>
{
    NSMutableOrderedSet *_fingerprints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *fingerprintsOfAffectedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end

