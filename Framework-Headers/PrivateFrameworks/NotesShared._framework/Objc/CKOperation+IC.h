//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

#import <NotesShared/ICLoggable-Protocol.h>

@class NSString;

@interface CKOperation (IC) <ICLoggable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (void)ic_removeAllCompletionBlocks;
@end

