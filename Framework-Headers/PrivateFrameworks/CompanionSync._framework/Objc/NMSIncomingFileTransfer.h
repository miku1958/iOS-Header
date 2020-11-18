//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CompanionSync/NMSObfuscatableDescriptionProviding-Protocol.h>

@class NMSMessageCenter, NSDictionary, NSString, NSURL;

@interface NMSIncomingFileTransfer : NSObject <NMSObfuscatableDescriptionProviding>
{
    NMSMessageCenter *_messageCenter;
    NSString *_idsIdentifier;
    NSURL *_fileURL;
    NSDictionary *_metadata;
    id _pbHeaderInfo;
    unsigned long long _priority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property (weak, nonatomic) NMSMessageCenter *messageCenter; // @synthesize messageCenter=_messageCenter;
@property (copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) id pbHeaderInfo; // @synthesize pbHeaderInfo=_pbHeaderInfo;
@property (nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;

@end

