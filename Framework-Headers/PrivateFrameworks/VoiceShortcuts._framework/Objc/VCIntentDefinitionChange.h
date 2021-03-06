//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSYChange-Protocol.h>

@class NSArray, NSString;

@interface VCIntentDefinitionChange : NSObject <VCSYChange>
{
    NSString *_objectIdentifier;
    long long _changeType;
    NSString *_checksum;
    NSArray *_files;
}

@property (nonatomic) long long changeType; // @synthesize changeType=_changeType;
@property (readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;

+ (int)messageType;
- (void).cxx_destruct;
- (id)initWithApplicationRecord:(id)arg1 changeType:(long long)arg2;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (BOOL)readFrom:(id)arg1 error:(id *)arg2;
- (BOOL)writeTo:(id)arg1 error:(id *)arg2;

@end

