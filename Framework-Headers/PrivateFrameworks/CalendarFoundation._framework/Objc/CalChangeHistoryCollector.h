//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CNChangeHistoryEventVisitor-Protocol.h>

@class NSMutableArray, NSString;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>
{
    BOOL _didReset;
    BOOL _hasChanges;
    NSMutableArray *_insertedContacts;
    NSMutableArray *_updatedContacts;
    NSMutableArray *_deletedContactIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong) NSMutableArray *deletedContactIdentifiers; // @synthesize deletedContactIdentifiers=_deletedContactIdentifiers;
@property (readonly, copy) NSString *description;
@property BOOL didReset; // @synthesize didReset=_didReset;
@property BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property (readonly) unsigned long long hash;
@property (strong) NSMutableArray *insertedContacts; // @synthesize insertedContacts=_insertedContacts;
@property (readonly) Class superclass;
@property (strong) NSMutableArray *updatedContacts; // @synthesize updatedContacts=_updatedContacts;

- (void).cxx_destruct;
- (id)init;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;

@end

