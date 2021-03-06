//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ContentKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying>
{
    NSString *_key;
    NSString *_source;
    NSString *_suggestedAutomationIdentifier;
    BOOL _completed;
    BOOL _interacted;
    struct {
        unsigned int completed:1;
        unsigned int interacted:1;
    } _has;
}

@property (nonatomic) BOOL completed; // @synthesize completed=_completed;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL hasInteracted;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSuggestedAutomationIdentifier;
@property (nonatomic) BOOL interacted; // @synthesize interacted=_interacted;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NSString *source; // @synthesize source=_source;
@property (strong, nonatomic) NSString *suggestedAutomationIdentifier; // @synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

