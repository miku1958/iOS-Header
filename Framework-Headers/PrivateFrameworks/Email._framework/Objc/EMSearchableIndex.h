//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSString;

@interface EMSearchableIndex : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

@property (strong) EMRemoteConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)attachmentPersistentIDFromItemIdentifier:(id)arg1;
+ (id)log;
+ (id)remoteInterface;
- (void).cxx_destruct;
- (id)initWithRemoteConnection:(id)arg1;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;

@end

