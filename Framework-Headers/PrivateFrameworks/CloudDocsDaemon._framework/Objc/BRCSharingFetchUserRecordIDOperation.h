//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCSharingFetchUserRecordIDOperation : _BRCOperation <BRCOperationSubclass>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createActivity;
- (id)initWithSyncContext:(id)arg1;
- (void)main;
- (BOOL)shouldRetryForError:(id)arg1;

@end

