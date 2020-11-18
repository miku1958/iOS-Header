//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/SYChange-Protocol.h>
#import <CompanionSync/SYObject-Protocol.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYObject, SYChange>
{
    NSString *_sequencer;
    NSString *_syncId;
}

@property (readonly, nonatomic) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer; // @synthesize sequencer=_sequencer;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *syncId; // @synthesize syncId=_syncId;

- (void).cxx_destruct;
- (id)initWithObjectID:(id)arg1 sequencer:(id)arg2;
- (id)initWithSyncId:(id)arg1;

@end

