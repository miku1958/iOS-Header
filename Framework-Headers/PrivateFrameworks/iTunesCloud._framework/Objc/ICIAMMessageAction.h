//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMMetricEvent, NSMutableArray, NSString;

@interface ICIAMMessageAction : PBCodable <NSCopying>
{
    NSMutableArray *_actionParameters;
    ICIAMMetricEvent *_clickEvent;
    NSString *_displayText;
    NSString *_identifier;
    NSString *_uRL;
    BOOL _requiresDelegate;
    struct {
        unsigned int requiresDelegate:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *actionParameters; // @synthesize actionParameters=_actionParameters;
@property (strong, nonatomic) ICIAMMetricEvent *clickEvent; // @synthesize clickEvent=_clickEvent;
@property (strong, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property (readonly, nonatomic) BOOL hasClickEvent;
@property (readonly, nonatomic) BOOL hasDisplayText;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasRequiresDelegate;
@property (readonly, nonatomic) BOOL hasURL;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL requiresDelegate; // @synthesize requiresDelegate=_requiresDelegate;
@property (strong, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;

+ (Class)actionParametersType;
- (void).cxx_destruct;
- (id)actionParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionParametersCount;
- (void)addActionParameters:(id)arg1;
- (void)clearActionParameters;
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

