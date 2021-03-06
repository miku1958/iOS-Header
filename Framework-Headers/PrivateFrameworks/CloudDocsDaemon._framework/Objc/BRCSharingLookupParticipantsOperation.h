//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingLookupParticipantsOperation : _BRCFrameworkOperation <BRCOperationSubclass>
{
    NSArray *_userIdentities;
    NSMutableArray *_shareParticipants;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithUserIdentities:(id)arg1 session:(id)arg2;
- (void)main;

@end

